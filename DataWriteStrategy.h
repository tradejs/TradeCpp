#pragma once
#include "StrategyBase.h"

class CDataWriteStrategy : public CStrategyBase
{
public:
	CDataWriteStrategy(void);
	~CDataWriteStrategy(void);


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
		return "������ �����";
	}

	BOOL isKospi;
	BOOL RequestMaster(BOOL isKospi);
	BOOL RequestSise(const CString code);
	vector<string> requestCodes;

	CFile logfile;

	//���� ���� �����쿡�� ����ϴ� ������ ����մϴ�.
	void LoadAllProperty(void)
	{
	}
};

