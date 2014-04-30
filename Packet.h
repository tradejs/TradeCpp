#pragma once
#include "IXingAPI.h"
#include "sltime.h"

enum
{
	DATA_TYPE_STRING = 0,		// 문자열
	DATA_TYPE_LONG,				// 정수
	DATA_TYPE_FLOAT,			// 실수
	DATA_TYPE_FLOAT_DOT,		// 실수( 소숫점을 가지고 있음 )
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

