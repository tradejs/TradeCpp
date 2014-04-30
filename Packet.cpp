#include "stdafx.h"
#include "Packet.h"

CString GetStringData( char* psData, int nSize)
{
	CString strData(psData, nSize);
	strData.Trim();
	return strData;
}

long GetLongData( char* psData, int nSize)
{
	CString strData( psData, nSize );
	return atoi( strData );
	
}

double GetDoubleData( char* psData, int nSize, int nDotPos )
{
	CString strData( psData, nSize );
	// �Ҽ����� ������ ���� �������̹Ƿ� nDotPos ��ġ�� ���� ��´�.
	strData.Insert( strData.GetLength() - nDotPos, '.' );

	return atof(strData);
}

double GetDotDoubleData( char* psData, int nSize)
{
	CString strData( psData, nSize );
	return atof(strData);
}

StockSiseResponse Packet::MakeStockSiseResponse(LPRECV_PACKET packet)
{
	ASSERT(strcmp(packet->szTrCode, NAME_t1102) == 0);

	StockSiseResponse response;
	return response;
}