#include "stdafx.h"
#include "DataWriteStrategy.h"

#include "packet\t9945.h"
#include "packet\S3_.h"
#include "packet\K3_.h"

//Ŭ���� �������Դϴ�.
//�Ϲ������� Ŭ������ �������� �ʱ�ȭ �մϴ�.
CDataWriteStrategy::CDataWriteStrategy()
{
	
}

CDataWriteStrategy::~CDataWriteStrategy(void)
{
}



//������ ���� �ε��� �� ó���� �۾��� ���� �մϴ�.
//�� ������ ������ ����/�ߴ� �ϴ��� �ѹ��� ����˴ϴ�.
//Ŭ���� �����ڿ����� �����ʱ�ȭ�� ó���ϰ�, ������ �۾��� ���⼭ ó���ϴ°��� �����մϴ�. 
void CDataWriteStrategy::OnLoad()
{
}

//������ ���۵Ǹ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CDataWriteStrategy::OnStart()
{
	NormalLog("������ ������ ���� �Ǿ����ϴ�.");
	
	//������ �����͸� ��û�մϴ�.
	isKospi = TRUE;
	RequestMaster(isKospi);

	//�����͸� ������ ������ �����մϴ�.
	logfile.Open("datalog.log", CFile::modeCreate|CFile::modeWrite);

}


//���� ������ �ߴܵǸ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CDataWriteStrategy::OnStop()
{
	NormalLog("������ ������ �ߴ��մϴ�.");

	logfile.Close();
}

//��û�� ��ȸ �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
//���������� C++ ������ Ÿ������ ��ȯ�ϴ� ������ packet.h / packet.cpp �� �����ϼ���.
void CDataWriteStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	int nDataLength = packet->nDataLength;

	//���� ������ ����
	if (strcmp(packet->szTrCode, NAME_t9945) == 0)
	{
		LPt9945OutBlock pOutBlock = (LPt9945OutBlock)packet->lpData;

		// OutBlock �� ������ŭ ó���մϴ�.
		int nOutBlockCount = nDataLength / sizeof( t9945OutBlock );
		for( int i=0; i<nOutBlockCount; i++ )
		{
			CString code = GetStringData(pOutBlock[i].shcode, 6);
			NormalLog(code + "���� �ü��� ��û�մϴ�.");
			requestCodes.push_back((string)code);

			//�ǽð� �ü��� ��û�մϴ�.
			RequestSise(code);
		}

		//�ڽ��Ǹ� ��û�����Ƿ� �̹����� �ڽ����� ��û�մϴ�.
		if (isKospi)
		{
			isKospi = FALSE;
			RequestMaster(isKospi);
		}
	}
}

//��û�� �ǽð� �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
void CDataWriteStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
	//�ڽ��� �ǽð� �ü�
	if( strcmp( realpacket->szTrCode, NAME_S3_ ) == 0 )
	{
		LPS3__OutBlock pOutBlock = (LPS3__OutBlock)realpacket->pszData;

		if (pOutBlock->status[0] != '0')
			return;

		//��Ŷ���� �ʿ��� �����͸� �����մϴ�.
		CString code = GetStringData(pOutBlock->shcode, 6);
		CString time = GetStringData(pOutBlock->chetime, 6);
		long change = GetLongData(pOutBlock->change, 8);
		double drate = GetDoubleData(pOutBlock->drate, 6, 2);
		long close = GetLongData(pOutBlock->price, 8);
		long open = GetLongData(pOutBlock->open, 8);
		long high = GetLongData(pOutBlock->high, 8);
		long low = GetLongData(pOutBlock->low, 8);
		long volume = GetLongData(pOutBlock->volume, 12);

		//���Ͽ� ������ �����͸� ����ϴ�.
		CString data;
		data.Format("%s, %s, %d, %d\r\n", code, time, close, volume);
		logfile.Write((LPCTSTR)data, data.GetLength());		
	}
	else if( strcmp( realpacket->szTrCode, NAME_K3_ ) == 0 )
	{
		LPK3__OutBlock pOutBlock = (LPK3__OutBlock)realpacket->pszData;

		if (pOutBlock->status[0] != '0')
			return;

		string code = GetStringData(pOutBlock->shcode, 6);
		long change = GetLongData(pOutBlock->change, 8);
		double drate = GetDoubleData(pOutBlock->drate, 6, 2);
		long close = GetLongData(pOutBlock->price, 8);
		long open = GetLongData(pOutBlock->open, 8);
		long high = GetLongData(pOutBlock->high, 8);
		long low = GetLongData(pOutBlock->low, 8);
		long volume = GetLongData(pOutBlock->volume, 12);

		CString data;
		data.Format("%s, %s, %d, %d\r\n", code, time, close, volume);
		logfile.Write((LPCTSTR)data, data.GetLength());
		
	}
	
}

//�޽����� ���ŵǸ� ȣ�� �˴ϴ�.
//�ַ� �����ڵ��� ������ �����ϴ�.
//reqId�� Ȯ���Ͽ� �ٸ� ������ ������ �� �ֽ��ϴ�.
void CDataWriteStrategy::OnMessage(int reqId, const CString& msg)
{

}

//��ȸ �����Ͱ� Ÿ�Ӿƿ��� ��� �߻��մϴ�.
void CDataWriteStrategy::OnTimeout()
{

}


//Ÿ�̸Ӱ� �߻��� ��� ȣ�� �˴ϴ�.
//���� Ÿ�̸Ӹ� ���ÿ� ������� timerId�� ���� ������ �� �ֽ��ϴ�.
//Ÿ�̸Ӹ� ������Ű���� KillTimer(timerId)�� �����ϼ���.
void CDataWriteStrategy::OnTimer(int timerId)
{

}


BOOL CDataWriteStrategy::RequestMaster(BOOL isKospi)
{
	if (isKospi)
	{
		// �ڽ��� �����͸� ��û�մϴ�.
		_t9945InBlock in;
		memcpy(in.gubun, "1", 1);
		Request(NAME_t9945, &in, sizeof(in), FALSE, "");
	}
	else
	{
		//�ڽ��� �����͸� ��û�մϴ�.
		_t9945InBlock in2;
		memcpy(in2.gubun, "2", 1);
		Request(NAME_t9945, &in2, sizeof(in2), FALSE, "");
	}

	return true;
}

BOOL CDataWriteStrategy::RequestSise(const CString code)
{
	if (isKospi)
	{
		S3__InBlock in;
		memcpy(in.shcode, (LPCTSTR)code, 6);
		AdviseRealData(NAME_S3_, (LPCTSTR)&in, sizeof(in));
	}
	else
	{
		K3__InBlock in;
		memcpy(in.shcode, (LPCTSTR)code, 6);
		AdviseRealData(NAME_K3_, (LPCTSTR)&in, sizeof(in));
	}

	return TRUE;
}