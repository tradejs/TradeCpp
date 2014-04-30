#pragma once
#include "StrategyBase.h"

class CAccountStrategy : public CStrategyBase
{
public:
	CAccountStrategy(void);
	~CAccountStrategy(void);


	//기본적으로 구현해야 할 함수 입니다.
	void OnReceiveData(LPRECV_PACKET packet);
	void OnRealData(LPRECV_REAL_PACKET realpacket);
	void OnMessage(int reqId, const CString& msg);
	void OnTimeout();
	void OnLoad();
	void OnStart();
	void OnStop();
	void OnTimer(int timerId);

	LPCTSTR GetStrategyName()
	{
		return "";
	}

	//변수 설정 윈도우에서 사용하는 정보를 기록합니다.
	void LoadAllProperty(void)
	{
	}
};

