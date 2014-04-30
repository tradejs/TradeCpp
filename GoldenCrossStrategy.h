#pragma once
#include "StrategyBase.h"

class CGoldenCrossStrategy : public CStrategyBase
{
public:
	CGoldenCrossStrategy(void);
	~CGoldenCrossStrategy(void);


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
		return "���ũ�ν� �Ÿ�";
	}

	//���⿡ �ʿ��� ������ �����մϴ�.
	double longPeriod;
	double shortPeriod;
	double entryAmount;

	CChart* pSSE30Chart;

	//���� ���� �����쿡�� ����ϴ� ������ ����մϴ�.
	void LoadAllProperty(void)
	{
		MakeVarProperty(&longPeriod, "��� ����", "��� ũ�ν��� ����� ��� �̵���� ���.");
		MakeVarProperty(&shortPeriod, "�ܱ� ����", "��� ũ�ν��� ����� �ܱ� �̵���� ���.");
		MakeVarProperty(&entryAmount, "���� �ݾ�", "�ѹ��� ������ �ݾ��� ����.");
	}
};

