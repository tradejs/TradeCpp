#include "stdafx.h"
#include "AccountStrategy.h"


//매시간마다 


//클래스 생성자입니다.
//일반적으로 클래스의 변수들을 초기화 합니다.
CAccountStrategy::CAccountStrategy()
{
	
}

CAccountStrategy::~CAccountStrategy(void)
{
}



//전략이 최초 로딩될 때 처리할 작업을 정의 합니다.
//이 동작은 여러번 시작/중단 하더라도 한번만 수행됩니다.
//클래스 생성자에서는 변수초기화만 처리하고, 나머지 작업은 여기서 처리하는것을 권장합니다. 
void CAccountStrategy::OnLoad()
{
}

//전략이 시작되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CAccountStrategy::OnStart()
{

}


//전략 수행이 중단되면 처리할 작업을 정의합니다.
//여러번 호출 될 수 있습니다.
void CAccountStrategy::OnStop()
{
}

//요청한 조회 데이터가 수신되면 호출 됩니다.
//프로토콜을 C++ 데이터 타입으로 변환하는 과정은 packet.h / packet.cpp 를 참고하세요.
void CAccountStrategy::OnReceiveData(LPRECV_PACKET packet)
{
}

//요청한 실시간 데이터가 수신되면 호출 됩니다.
void CAccountStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
	
}

//메시지가 수신되면 호출 됩니다.
//주로 오류코드인 경유가 많습니다.
//reqId를 확인하여 다른 동작을 수행할 수 있습니다.
void CAccountStrategy::OnMessage(int reqId, const CString& msg)
{

}

//조회 데이터가 타임아웃일 경우 발생합니다.
void CAccountStrategy::OnTimeout()
{

}


//타이머가 발생할 경우 호출 됩니다.
//여러 타이머를 동시에 돌릴경우 timerId를 통해 구분할 수 있습니다.
//타이머를 중지시키려면 KillTimer(timerId)를 실행하세요.
void CAccountStrategy::OnTimer(int timerId)
{

}


