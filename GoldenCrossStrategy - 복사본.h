#pragma once
#include "StrategyBase.h"

class CGoldenCrossStrategy : public CStrategyBase
{
public:
	CGoldenCrossStrategy(void);
	~CGoldenCrossStrategy(void);

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
		return "골든크로스 매매";
	}

	//여기에 필요한 변수를 선언합니다.
	double longPeriod;
	double shortPeriod;
	double entryAmount;

	//변수 설정 윈도우에서 사용하는 정보를 기록합니다.
	void LoadAllProperty(void)
	{
		MakeVarProperty(&longPeriod, "장기 이평", "골든 크로스에 사용할 장기 이동평균 계수.");
		MakeVarProperty(&shortPeriod, "단기 이평", "골든 크로스에 사용할 단기 이동평균 계수.");
		MakeVarProperty(&entryAmount, "진입 금액", "한번에 진입할 금액을 설정.");
	}
};

