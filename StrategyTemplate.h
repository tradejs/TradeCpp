#pragma once
#include "StrategyBase.h"

class CSampleStrategy : public CStrategyBase
{
public:
	CSampleStrategy(void);
	~CSampleStrategy(void);


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
		return "�������� �Է��մϴ�.";
	}

	//���⿡ �ʿ��� ������ �����մϴ�.
	//double longPeriod;
	//double shortPeriod;
	//double entryQuantity;
	
	//���� ���� �����쿡�� ����ϴ� ������ ����մϴ�.
	void LoadAllProperty(void)
	{
		//MakeVarProperty(&longPeriod, "��� ����", "��� ũ�ν��� ����� ��� �̵���� ���.");
		//MakeVarProperty(&shortPeriod, "�ܱ� ����", "��� ũ�ν��� ����� �ܱ� �̵���� ���.");
		//MakeVarProperty(&entryQuantity, "���� ����", "�ѹ��� ������ ������ ����.");
	}
};

