#pragma once
#include "IXingAPI.h"
#include "packet\t1102.h"

class CT1102Response
{
};

class Packet
{
public:
	static CT1102Response MakeT1102Response(LPRECV_PACKET packet);
};

