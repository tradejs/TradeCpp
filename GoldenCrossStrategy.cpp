#include "stdafx.h"
#include "GoldenCrossStrategy.h"

#include "packet\FC0.h"
#include "packet\CFOAT00100.h"


//����� ���¹�ȣ�� ��й�ȣ�� �����մϴ�.
CString AccountCode = "";
CString AccountPass = "";
CString JongCode = "101J6000";

//Ŭ���� �������Դϴ�.
//�Ϲ������� Ŭ������ �������� �ʱ�ȭ �մϴ�.
CGoldenCrossStrategy::CGoldenCrossStrategy()
{
	longPeriod = 20;
	shortPeriod = 5;
	entryQuantity = 10;

	isEntered = FALSE;
	pFUChart = nullptr;
}

CGoldenCrossStrategy::~CGoldenCrossStrategy(void)
{
}

//������ ���� �ε��� �� ó���� �۾��� ���� �մϴ�.
//�� ������ ������ ����/�ߴ� �ϴ��� �ѹ��� ����˴ϴ�.
//Ŭ���� �����ڿ����� �����ʱ�ȭ�� ó���ϰ�, ������ �۾��� ���⼭ ó���ϴ°��� �����մϴ�. 
void CGoldenCrossStrategy::OnLoad()
{
}

//������ ���۵Ǹ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CGoldenCrossStrategy::OnStart()
{
	NormalLog("������ ���� �Ǿ����ϴ�.");
	//���� �ֱٿ��� �ǽð� �ü��� ��û�մϴ�.
	// T8432 TR�� �̿��Ͽ� ���� �����͸� ���� ��ȸ�ϰ� �ֱ� ���� �ڵ带 ������ ���� �ֽ��ϴ�.
	FC0_InBlock in;
	memset(&in, ' ', sizeof(FC0_InBlock));
	memcpy(in.futcode, (LPCTSTR)JongCode, 8);
	AdviseRealData(NAME_FC0, (LPCTSTR)&in, sizeof(in.futcode));

	//���� �ֱ� ���� 1�к��� ��Ʈ�� �����մϴ�.
	//������ ����Ǵ� �������� ���� �����Ͱ� �ʿ��ϴٸ� T8415 �� �̿��Ͽ� ��ȸ�� �� �ֽ��ϴ�.
	pFUChart = new CChart(JongCode, 1, CANDLE_UNIT::series_min);
}


//���� ������ �ߴܵǸ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CGoldenCrossStrategy::OnStop()
{
	FC0_InBlock in;
	memset(&in, ' ', sizeof(FC0_InBlock));
	memcpy(in.futcode, (LPCTSTR)JongCode, 8);
	UnadviseRealData(NAME_FC0, (LPCTSTR)&in, sizeof(in.futcode));

	if (pFUChart != nullptr)
		delete pFUChart;
}

//��û�� ��ȸ �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
//���������� C++ ������ Ÿ������ ��ȯ�ϴ� ������ packet.h / packet.cpp �� �����ϼ���.
void CGoldenCrossStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	if (strcmp(packet->szTrCode, NAME_CFOAT00100) == 0) 
	{
		typedef struct
		{
			CFOAT00100OutBlock1	outBlock1;
			CFOAT00100OutBlock2	outBlock2;
		} CFOAT00100AllOutBlock, *LPCFOAT00100AllOutBlock;

		//LPCFOAT00100AllOutBlock pAllOutBlock = (LPCFOAT00100AllOutBlock)pRpData->lpData;
		int						nDataLength  = packet->nDataLength;
		
		nDataLength -= sizeof( CFOAT00100OutBlock1 );
		if( nDataLength < 0 )
		{
			NormalLog("���� �ֹ� ������");
			return;
		}
		
		nDataLength -= sizeof( CFOAT00100OutBlock2 );
		if( nDataLength < 0 )
		{
			NormalLog("���� �ֹ� ������");
			return;
		}

		//
	}
}

//��û�� �ǽð� �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
void CGoldenCrossStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
	//���� ü�� �ǽð� ������
	if( strcmp( realpacket->szTrCode, NAME_FC0 ) == 0 )
	{
		LPFC0_OutBlock pOutBlock = (LPFC0_OutBlock)realpacket->pszData;
		
		sltime chetime = GetTime(pOutBlock->chetime);
		double current = GetDoubleData( pOutBlock->price, sizeof( pOutBlock->price) , 2 );    // ���簡            
		long curVol = GetLongData( pOutBlock->cvolume    , sizeof( pOutBlock->cvolume));    // ü�ᷮ            
		long vol = GetLongData( pOutBlock->volume     , sizeof( pOutBlock->volume));    // �����ŷ��� 

		CString log;
		log.Format("���� �ü� ����.. ���簡: %.2f, ü�ᷮ : %d", current, curVol);
		NormalLog(log);

		//��Ʈ�� �����͸� �߰��մϴ�.
		pFUChart->OnTick(chetime, current, curVol);

		//ĵ���� ������ 20���� ������
		if (pFUChart->GetCandleCount() > 20)
		{
			double ma20, ma5;
			double ma20pre, ma5pre;
			
			//������ ���� ���� ������ ���մϴ�.
			pFUChart->GetMA(&ma20, CANDLE_PART::close, 20, 0);
			pFUChart->GetMA(&ma5, CANDLE_PART::close, 5, 0);

			//�ϳ� ���� ���� ���������� ���մϴ�.
			pFUChart->GetMA(&ma20pre, CANDLE_PART::close, 20, 1);
			pFUChart->GetMA(&ma5pre, CANDLE_PART::close, 5, 1);

			//�ż� ���°� �ƴϸ� ���� ���θ� �Ǵ��մϴ�.
			if (isEntered == FALSE)
			{
				//��� ũ�ν���� �ż��մϴ�.
				if (ma20pre > ma5pre && ma20 < ma5)
				{
					NormalLog("��� ũ�ν� �߻�");
					FuOrder(JongCode, entryQuantity, 0);
					isEntered = TRUE;
				}
			}
			else //�ż� �����̸� û�� ���θ� �Ǵ��մϴ�.
			{
				//���� ũ�ν���� �ŵ��մϴ�.
				if (ma20pre < ma5pre && ma20 > ma5)
				{
					NormalLog("���� ũ�ν� �߻�");
					FuOrder(JongCode, entryQuantity * -1, 0);
					isEntered = FALSE;
				}
			}
		}
	}
}

//�޽����� ���ŵǸ� ȣ�� �˴ϴ�.
//�ַ� �����ڵ��� ������ �����ϴ�.
//reqId�� Ȯ���Ͽ� �ٸ� ������ ������ �� �ֽ��ϴ�.
void CGoldenCrossStrategy::OnMessage(int reqId, const CString& msg)
{

}

//��ȸ �����Ͱ� Ÿ�Ӿƿ��� ��� �߻��մϴ�.
void CGoldenCrossStrategy::OnTimeout()
{

}


//Ÿ�̸Ӱ� �߻��� ��� ȣ�� �˴ϴ�.
//���� Ÿ�̸Ӹ� ���ÿ� ������� timerId�� ���� ������ �� �ֽ��ϴ�.
//Ÿ�̸Ӹ� ������Ű���� KillTimer(timerId)�� �����ϼ���.
void CGoldenCrossStrategy::OnTimer(int timerId)
{

}


//���� �ֹ� quantity�� ����� �ż� /  ������ �ŵ�, price�� 0�̸� ���尡, 0�� �ƴϸ� ������ �ֹ�
int CGoldenCrossStrategy::FuOrder(CString code, int quantity, double price)
{
	CFOAT00100InBlock1	pckInBlock;
	FillMemory( &pckInBlock, sizeof( pckInBlock ), ' ' );

	SetPacketData( pckInBlock.AcntNo          , sizeof( pckInBlock.AcntNo           ), AccountCode  , DATA_TYPE_STRING );    // [string,   20] ���¹�ȣ                 
	SetPacketData( pckInBlock.Pwd             , sizeof( pckInBlock.Pwd              ), AccountCode  , DATA_TYPE_STRING );    // [string,    8] ��й�ȣ                 
	SetPacketData( pckInBlock.FnoIsuNo        , sizeof( pckInBlock.FnoIsuNo         ), code        , DATA_TYPE_STRING );    // [string,   12] �����ɼ������ȣ         
	SetPacketData( pckInBlock.BnsTpCode       , sizeof( pckInBlock.BnsTpCode        ), quantity > 0 ? "2" : "1" , DATA_TYPE_STRING );    // [string,    1] �Ÿű���                 
	SetPacketData( pckInBlock.FnoOrdprcPtnCode, sizeof( pckInBlock.FnoOrdprcPtnCode ), price == 0 ? "03" : "00", DATA_TYPE_STRING );    // [string,    2] �����ɼ�ȣ�������ڵ�

	char strPrice[20]; sprintf_s(strPrice, 20, "%.02f", price); 
	SetPacketData( pckInBlock.OrdPrc          , sizeof(pckInBlock.OrdPrc			), strPrice          , DATA_TYPE_FLOAT_DOT, 2 );    // [double, 15.2] �ֹ�����                 
	SetPacketData( pckInBlock.OrdQty          , sizeof( pckInBlock.OrdQty           ), abs(quantity));    // [long  ,   16] �ֹ�����                 

	CString log;
	log.Format("[�ֹ�] �����ڵ� : %s, ����: %.02f, ����:%d", code, price, quantity);
	TradeLog(log);

	return Request(NAME_CFOAT00100, &pckInBlock, sizeof( pckInBlock ), FALSE, "");
	
}