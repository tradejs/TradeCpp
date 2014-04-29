#include "stdafx.h"
#include "Packet.h"


StockSiseResponse Packet::MakeStockSiseResponse(LPRECV_PACKET packet)
{
	ASSERT(strcmp(packet->szTrCode, NAME_t1102) == 0);

	StockSiseResponse response;
	return response;
}