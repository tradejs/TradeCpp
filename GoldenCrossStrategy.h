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
		return "���ũ�ν�";
	}

	//���⿡ �ʿ��� ������ �����մϴ�.
	double NearPrice;
	double TradeMoney;

	//���� ���� �����쿡�� ����ϴ� ������ ����մϴ�.
	void LoadAllProperty(void)
	{
		MakeVarProperty(&NearPrice, "�ŷ�����", "�� ���� ����� ������ �ż��Ѵ�.");
		MakeVarProperty(&TradeMoney, "�ŷ��ݾ�", "�ѹ��� �󸶳� ����� �����ϴ� ����");
	}
};

