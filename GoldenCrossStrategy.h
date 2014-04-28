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

	LPCTSTR GetStrategyName()
	{
		return "골든크로스";
	}

	//여기에 필요한 변수를 선언합니다.
	double NearPrice;
	double TradeMoney;

	//변수 설정 윈도우에서 사용하는 정보를 기록합니다.
	void LoadAllProperty(void)
	{
		MakeVarProperty(&NearPrice, "거래가격", "이 값에 가까운 가격을 매수한다.");
		MakeVarProperty(&TradeMoney, "거래금액", "한번에 얼마나 쏠건지 정의하는 변수");
	}
};

