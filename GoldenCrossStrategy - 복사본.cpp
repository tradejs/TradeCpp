#include "stdafx.h"
#include "GoldenCrossStrategy.h"


//����� ���¹�ȣ�� ��й�ȣ�� �����մϴ�.
CString AccountCode = "";
CString AccountPass = "";

//Ŭ���� �������Դϴ�.
//�Ϲ������� Ŭ������ �������� �ʱ�ȭ �մϴ�.
CGoldenCrossStrategy::CGoldenCrossStrategy()
{
	longPeriod = 20;
	shortPeriod = 5;
	entryAmount = 1000000;
}

CGoldenCrossStrategy::~CGoldenCrossStrategy(void)
{
}

//������ ���� �ε��� �� ó���� �۾��� ���� �մϴ�.
//�� ������ ������ ����/�ߴ� �ϴ��� �ѹ��� ����˴ϴ�.
//Ŭ���� �����ڿ����� �����ʱ�ȭ�� ó���ϰ�, ������ �۾��� ���⼭ ó���ϴ°��� �����մϴ�. 
void CGoldenCrossStrategy::OnLoad()
{

}

//������ ���۵Ǹ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CGoldenCrossStrategy::OnStart()
{

}


//���� ������ �ߴܵǸ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CGoldenCrossStrategy::OnStop()
{

}

//��û�� ��ȸ �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
//���������� C++ ������ Ÿ������ ��ȯ�ϴ� ������ packet.h / packet.cpp �� �����ϼ���.
void CGoldenCrossStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	if (strcmp(packet->szTrCode,NAME_t1102) == 0)
	{
		StockSiseResponse stockSise = Packet::MakeStockSiseResponse(packet);

	}

	//CFuOrder(AccountCode, AccountPass, 10, 150000);
	//Request(
}

//��û�� �ǽð� �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
//���������� C++ ������ Ÿ������ ��ȯ�ϴ� ������ packet.h / packet.cpp �� �����ϼ���.
void CGoldenCrossStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{

}

//�޽����� ���ŵǸ� ȣ�� �˴ϴ�.
//�ַ� �����ڵ��� ������ �����ϴ�.
//reqId�� Ȯ���Ͽ� �ٸ� ������ ������ �� �ֽ��ϴ�.
void CGoldenCrossStrategy::OnMessage(int reqId, const CString& msg)
{

}

//��ȸ �����Ͱ� Ÿ�Ӿƿ��� ��� �߻��մϴ�.
void CGoldenCrossStrategy::OnTimeout()
{

}


//Ÿ�̸Ӱ� �߻��� ��� ȣ�� �˴ϴ�.
//���� Ÿ�̸Ӹ� ���ÿ� ������� timerId�� ���� ������ �� �ֽ��ϴ�.
//Ÿ�̸Ӹ� ������Ű���� KillTimer(timerId)�� �����ϼ���.
void CGoldenCrossStrategy::OnTimer(int timerId)
{

}