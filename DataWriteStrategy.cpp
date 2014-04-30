#include "stdafx.h"
#include "DataWriteStrategy.h"

#include "packet\t9945.h"
#include "packet\S3_.h"
#include "packet\K3_.h"

//클래스 생성자입니다.
//일반적으로 클래스의 변수들을 초기화 합니다.
CDataWriteStrategy::CDataWriteStrategy()
{
	
}

CDataWriteStrategy::~CDataWriteStrategy(void)
{
}



//전략이 최초 로딩될 때 처리할 작업을 정의 합니다.
//이 동작은 여러번 시작/중단 하더라도 한번만 수행됩니다.
//클래스 생성자에서는 변수초기화만 처리하고, 나머지 작업은 여기서 처리하는것을 권장합니다. 
void CDataWriteStrategy::OnLoad()
{
}

//전략이 시작되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CDataWriteStrategy::OnStart()
{
	NormalLog("데이터 저장이 시작 되었습니다.");
	
	//마스터 데이터를 요청합니다.
	isKospi = TRUE;
	RequestMaster(isKospi);

	//데이터를 저장할 파일을 생성합니다.
	logfile.Open("datalog.log", CFile::modeCreate|CFile::modeWrite);

}


//전략 수행이 중단되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CDataWriteStrategy::OnStop()
{
	NormalLog("데이터 저장을 중단합니다.");

	logfile.Close();
}

//요청한 조회 데이터가 수신되면 호출 됩니다.
//프로토콜을 C++ 데이터 타입으로 변환하는 과정은 packet.h / packet.cpp 를 참고하세요.
void CDataWriteStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	int nDataLength = packet->nDataLength;

	//종목 마스터 수신
	if (strcmp(packet->szTrCode, NAME_t9945) == 0)
	{
		LPt9945OutBlock pOutBlock = (LPt9945OutBlock)packet->lpData;

		// OutBlock 의 갯수만큼 처리합니다.
		int nOutBlockCount = nDataLength / sizeof( t9945OutBlock );
		for( int i=0; i<nOutBlockCount; i++ )
		{
			CString code = GetStringData(pOutBlock[i].shcode, 6);
			NormalLog(code + "종목 시세를 요청합니다.");
			requestCodes.push_back((string)code);

			//실시간 시세를 요청합니다.
			RequestSise(code);
		}

		//코스피를 요청했으므로 이번에는 코스닥을 요청합니다.
		if (isKospi)
		{
			isKospi = FALSE;
			RequestMaster(isKospi);
		}
	}
}

//요청한 실시간 데이터가 수신되면 호출 됩니다.
void CDataWriteStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
	//코스피 실시간 시세
	if( strcmp( realpacket->szTrCode, NAME_S3_ ) == 0 )
	{
		LPS3__OutBlock pOutBlock = (LPS3__OutBlock)realpacket->pszData;

		if (pOutBlock->status[0] != '0')
			return;

		//패킷에서 필요한 데이터를 추출합니다.
		CString code = GetStringData(pOutBlock->shcode, 6);
		CString time = GetStringData(pOutBlock->chetime, 6);
		long change = GetLongData(pOutBlock->change, 8);
		double drate = GetDoubleData(pOutBlock->drate, 6, 2);
		long close = GetLongData(pOutBlock->price, 8);
		long open = GetLongData(pOutBlock->open, 8);
		long high = GetLongData(pOutBlock->high, 8);
		long low = GetLongData(pOutBlock->low, 8);
		long volume = GetLongData(pOutBlock->volume, 12);

		//파일에 저장할 데이터를 만듭니다.
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

//메시지가 수신되면 호출 됩니다.
//주로 오류코드인 경유가 많습니다.
//reqId를 확인하여 다른 동작을 수행할 수 있습니다.
void CDataWriteStrategy::OnMessage(int reqId, const CString& msg)
{

}

//조회 데이터가 타임아웃일 경우 발생합니다.
void CDataWriteStrategy::OnTimeout()
{

}


//타이머가 발생할 경우 호출 됩니다.
//여러 타이머를 동시에 돌릴경우 timerId를 통해 구분할 수 있습니다.
//타이머를 중지시키려면 KillTimer(timerId)를 실행하세요.
void CDataWriteStrategy::OnTimer(int timerId)
{

}


BOOL CDataWriteStrategy::RequestMaster(BOOL isKospi)
{
	if (isKospi)
	{
		// 코스피 마스터를 요청합니다.
		_t9945InBlock in;
		memcpy(in.gubun, "1", 1);
		Request(NAME_t9945, &in, sizeof(in), FALSE, "");
	}
	else
	{
		//코스닥 마스터를 요청합니다.
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