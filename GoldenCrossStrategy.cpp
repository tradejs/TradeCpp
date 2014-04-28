#include "stdafx.h"
#include "GoldenCrossStrategy.h"

CString AccountCode = "";
CString AccountPass = "";

CGoldenCrossStrategy::CGoldenCrossStrategy()
{
	NearPrice = 100;
	TradeMoney = 10;
}

CGoldenCrossStrategy::~CGoldenCrossStrategy(void)
{
}

void CGoldenCrossStrategy::OnLoad()
{

}

void CGoldenCrossStrategy::OnReceiveData(LPRECV_PACKET packet)
{
	if (packet->szTrCode == "T1102")
	{
//		CT1102Response t1102 = Packet::MakeT1102(packet);

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