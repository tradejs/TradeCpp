#pragma once
#include "StrategyBase.h"

class CAccountStrategy : public CStrategyBase
{
public:
	CAccountStrategy(void);
	~CAccountStrategy(void);


	//�⺻������ �����ؾ� �� �Լ� �Դϴ�.
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

	//���� ���� �����쿡�� ����ϴ� ������ ����մϴ�.
	void LoadAllProperty(void)
	{
	}
};

