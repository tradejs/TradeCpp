#pragma once
#include "IXingAPI.h"
#include "sltime.h"

enum
{
	DATA_TYPE_STRING = 0,		// ���ڿ�
	DATA_TYPE_LONG,				// ����
	DATA_TYPE_FLOAT,			// �Ǽ�
	DATA_TYPE_FLOAT_DOT,		// �Ǽ�( �Ҽ����� ������ ���� )
};
#define DATA_TYPE_DOUBLE	DATA_TYPE_FLOAT
#define DATA_TYPE_DOT		DATA_TYPE_FLOAT_DOT


CString GetStringData( char* psData, int nSize);
long GetLongData( char* psData, int nSize);
double GetDoubleData( char* psData, int nSize, int nDotPos );
double GetDotDoubleData( char* psData, int nSize);
sltime GetTime(char* time);
void SetPacketData( char* psData, int nSize, const char* pszSrc, int nType, int nDotPos = 0);
void SetPacketData( char* psData, int nSize, long data);

