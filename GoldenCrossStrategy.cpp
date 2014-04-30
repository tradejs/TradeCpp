#include "stdafx.h"
#include "GoldenCrossStrategy.h"

#include "packet\FC0.h"
#include "packet\CFOAT00100.h"


//사용할 계좌번호와 비밀번호를 저장합니다.
CString AccountCode = "";
CString AccountPass = "";
CString JongCode = "101J6000";

//클래스 생성자입니다.
//일반적으로 클래스의 변수들을 초기화 합니다.
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

//전략이 최초 로딩될 때 처리할 작업을 정의 합니다.
//이 동작은 여러번 시작/중단 하더라도 한번만 수행됩니다.
//클래스 생성자에서는 변수초기화만 처리하고, 나머지 작업은 여기서 처리하는것을 권장합니다. 
void CGoldenCrossStrategy::OnLoad()
{
}

//전략이 시작되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CGoldenCrossStrategy::OnStart()
{
	NormalLog("전략이 시작 되었습니다.");
	//선물 최근월물 실시간 시세를 요청합니다.
	// T8432 TR을 이용하여 선물 마스터를 먼저 조회하고 최근 월물 코드를 가져올 수도 있습니다.
	FC0_InBlock in;
	memset(&in, ' ', sizeof(FC0_InBlock));
	memcpy(in.futcode, (LPCTSTR)JongCode, 8);
	AdviseRealData(NAME_FC0, (LPCTSTR)&in, sizeof(in.futcode));

	//선물 최근 월물 1분봉을 차트를 생성합니다.
	//전략이 실행되는 시점에서 이전 데이터가 필요하다면 T8415 을 이용하여 조회할 수 있습니다.
	pFUChart = new CChart(JongCode, 1, CANDLE_UNIT::series_min);
}


//전략 수행이 중단되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CGoldenCrossStrategy::OnStop()
{
	FC0_InBlock in;
	memset(&in, ' ', sizeof(FC0_InBlock));
	memcpy(in.futcode, (LPCTSTR)JongCode, 8);
	UnadviseRealData(NAME_FC0, (LPCTSTR)&in, sizeof(in.futcode));

	if (pFUChart != nullptr)
		delete pFUChart;
}

//요청한 조회 데이터가 수신되면 호출 됩니다.
//프로토콜을 C++ 데이터 타입으로 변환하는 과정은 packet.h / packet.cpp 를 참고하세요.
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
			NormalLog("선물 주문 비정상");
			return;
		}
		
		nDataLength -= sizeof( CFOAT00100OutBlock2 );
		if( nDataLength < 0 )
		{
			NormalLog("선물 주문 비정상");
			return;
		}

		//
	}
}

//요청한 실시간 데이터가 수신되면 호출 됩니다.
void CGoldenCrossStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
	//선물 체결 실시간 데이터
	if( strcmp( realpacket->szTrCode, NAME_FC0 ) == 0 )
	{
		LPFC0_OutBlock pOutBlock = (LPFC0_OutBlock)realpacket->pszData;
		
		sltime chetime = GetTime(pOutBlock->chetime);
		double current = GetDoubleData( pOutBlock->price, sizeof( pOutBlock->price) , 2 );    // 현재가            
		long curVol = GetLongData( pOutBlock->cvolume    , sizeof( pOutBlock->cvolume));    // 체결량            
		long vol = GetLongData( pOutBlock->volume     , sizeof( pOutBlock->volume));    // 누적거래량 

		CString log;
		log.Format("선물 시세 수신.. 현재가: %.2f, 체결량 : %d", current, curVol);
		NormalLog(log);

		//차트에 데이터를 추가합니다.
		pFUChart->OnTick(chetime, current, curVol);

		//캔들의 갯수가 20개를 넘으면
		if (pFUChart->GetCandleCount() > 20)
		{
			double ma20, ma5;
			double ma20pre, ma5pre;
			
			//마지막 봉의 종가 이평을 구합니다.
			pFUChart->GetMA(&ma20, CANDLE_PART::close, 20, 0);
			pFUChart->GetMA(&ma5, CANDLE_PART::close, 5, 0);

			//하나 이전 봉의 종가이평을 구합니다.
			pFUChart->GetMA(&ma20pre, CANDLE_PART::close, 20, 1);
			pFUChart->GetMA(&ma5pre, CANDLE_PART::close, 5, 1);

			//매수 상태가 아니면 진입 여부를 판단합니다.
			if (isEntered == FALSE)
			{
				//골든 크로스라면 매수합니다.
				if (ma20pre > ma5pre && ma20 < ma5)
				{
					NormalLog("골든 크로스 발생");
					FuOrder(JongCode, entryQuantity, 0);
					isEntered = TRUE;
				}
			}
			else //매수 상태이면 청산 여부를 판단합니다.
			{
				//데드 크로스라면 매도합니다.
				if (ma20pre < ma5pre && ma20 > ma5)
				{
					NormalLog("데드 크로스 발생");
					FuOrder(JongCode, entryQuantity * -1, 0);
					isEntered = FALSE;
				}
			}
		}
	}
}

//메시지가 수신되면 호출 됩니다.
//주로 오류코드인 경유가 많습니다.
//reqId를 확인하여 다른 동작을 수행할 수 있습니다.
void CGoldenCrossStrategy::OnMessage(int reqId, const CString& msg)
{

}

//조회 데이터가 타임아웃일 경우 발생합니다.
void CGoldenCrossStrategy::OnTimeout()
{

}


//타이머가 발생할 경우 호출 됩니다.
//여러 타이머를 동시에 돌릴경우 timerId를 통해 구분할 수 있습니다.
//타이머를 중지시키려면 KillTimer(timerId)를 실행하세요.
void CGoldenCrossStrategy::OnTimer(int timerId)
{

}


//선물 주문 quantity가 양수면 매수 /  음수면 매도, price가 0이면 시장가, 0이 아니면 지정가 주문
int CGoldenCrossStrategy::FuOrder(CString code, int quantity, double price)
{
	CFOAT00100InBlock1	pckInBlock;
	FillMemory( &pckInBlock, sizeof( pckInBlock ), ' ' );

	SetPacketData( pckInBlock.AcntNo          , sizeof( pckInBlock.AcntNo           ), AccountCode  , DATA_TYPE_STRING );    // [string,   20] 계좌번호                 
	SetPacketData( pckInBlock.Pwd             , sizeof( pckInBlock.Pwd              ), AccountCode  , DATA_TYPE_STRING );    // [string,    8] 비밀번호                 
	SetPacketData( pckInBlock.FnoIsuNo        , sizeof( pckInBlock.FnoIsuNo         ), code        , DATA_TYPE_STRING );    // [string,   12] 선물옵션종목번호         
	SetPacketData( pckInBlock.BnsTpCode       , sizeof( pckInBlock.BnsTpCode        ), quantity > 0 ? "2" : "1" , DATA_TYPE_STRING );    // [string,    1] 매매구분                 
	SetPacketData( pckInBlock.FnoOrdprcPtnCode, sizeof( pckInBlock.FnoOrdprcPtnCode ), price == 0 ? "03" : "00", DATA_TYPE_STRING );    // [string,    2] 선물옵션호가유형코드

	char strPrice[20]; sprintf_s(strPrice, 20, "%.02f", price); 
	SetPacketData( pckInBlock.OrdPrc          , sizeof(pckInBlock.OrdPrc			), strPrice          , DATA_TYPE_FLOAT_DOT, 2 );    // [double, 15.2] 주문가격                 
	SetPacketData( pckInBlock.OrdQty          , sizeof( pckInBlock.OrdQty           ), abs(quantity));    // [long  ,   16] 주문수량                 

	CString log;
	log.Format("[주문] 종목코드 : %s, 가격: %.02f, 수량:%d", code, price, quantity);
	TradeLog(log);

	return Request(NAME_CFOAT00100, &pckInBlock, sizeof( pckInBlock ), FALSE, "");
	
}