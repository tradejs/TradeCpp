#include "stdafx.h"
#include "GoldenCrossStrategy.h"


//����� ���¹�ȣ�� ��й�ȣ�� �����մϴ�.
CString AccountCode = "";
CString AccountPass = "";

//Ŭ���� �������Դϴ�.
//�Ϲ������� Ŭ������ �������� �ʱ�ȭ �մϴ�.
CGoldenCrossStrategy::CGoldenCrossStrategy()
{
	NearPrice = 100;
	TradeMoney = 10;


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
//���������� ���Ի��� ������ Ÿ������ ��ȯ�ϴ� ������ ������ packet.h / packet.cpp �� �����ϼ���.
void CGoldenCrossStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	if (packet->szTrCode == NAME_t1102)
	{
		StockSiseResponse stockSise = Packet::MakeStockSiseResponse(packet);

	}

	//CFuOrder(AccountCode, AccountPass, 10, 150000);
	//Request(
}

void CGoldenCrossStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{

}

void CGoldenCrossStrategy::OnMessage(int reqId, const CString& msg)
{

}

void CGoldenCrossStrategy::OnTimeout()
{

}