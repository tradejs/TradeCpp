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

int g_year = 0;
int g_month = 0;
int g_day = 0;

void GetYMD()
{
	sltime now = sltime::GetCurrentSlTime();
	g_year = now.GetYear();
	g_month = now.GetMonth();
	g_day = now.GetDay();
}

sltime GetTime(char* time)
{
	if (g_year == 0)
		GetYMD();

	int hour;
	int min;
	int sec;

	char buf[4] = { 0 };
	memcpy(buf, time, 2);
	hour = atoi(buf);

	memcpy(buf, time +2, 2);
	min = atoi(buf);

	memcpy(buf, time + 4, 2);
	sec = atoi(buf);

	return sltime(g_year, g_month, g_day, hour, min, sec);	
}


void SetPacketData( char* psData, int nSize, const char* pszSrc, int nType, int nDotPos )
{
	//-----------------------------------------------------------------------
	// ���ڿ�
	if( nType == DATA_TYPE_STRING )
	{
		// ���� ����
		// ���� ���ڸ��� ' ' �� ä��

		// ����ũ�Ⱑ �� �����ͺ��� �۴ٸ� �����ʹ� ©���� �ϹǷ� �����߻�
		int nSrcLen = strlen( pszSrc );

		// ���� Space�� ä���
		FillMemory( psData, nSize, ' ' );

		// �տ����� �����͸� �ִ´�.
		// �������Ͱ� ũ�ٸ� �޺κ��� ������.
		CopyMemory( psData, pszSrc, min( nSize, nSrcLen ) );
	}

	//-----------------------------------------------------------------------
	// ����
	else if( nType == DATA_TYPE_LONG )
	{
		// ������ ����
		// ���� ���ڸ��� '0' ���� ä��

		// ����ũ�Ⱑ �� �����ͺ��� �۴ٸ� �����ʹ� ©���� �ϹǷ� �����߻�
		int nSrcLen = strlen( pszSrc );
		ATLASSERT( nSize >= nSrcLen );

		// ���� 0 ���� ä���
		FillMemory( psData, nSize, '0' );

		// �ڿ������� �����͸� �ִ´�.
		if( nSize >= nSrcLen )
		{
			CopyMemory( psData+nSize-nSrcLen, pszSrc, nSrcLen );
		}
		// �������Ͱ� ũ�ٸ� ���������� �޺κ��� ������.
		else
		{
			CopyMemory( psData, pszSrc, nSize );
		}
	}

	//-----------------------------------------------------------------------
	// �Ǽ� : �Ҽ����� ���� �ʴ´�.
	else if( nType == DATA_TYPE_FLOAT )
	{
		// �Ҽ��� ��ġ�� �������� ����
		// �Ҽ����� ���� ������ �������� ���ڸ��� �Ҽ����� ���ڸ��� 0���� ä��

//		int nSrcLen = strlen( pszSrc );

		// ���� 0 ���� ä���
		FillMemory( psData, nSize, '0' );

		// �������Ϳ��� �Ҽ����� ��ġ�� ã�Ƽ�
		// ���������� �������� ���̿� �Ҽ����� ���̸� ���Ѵ�.
		int nSrcIntLen;
		int nSrcDotLen;
		const char* psz = _tcschr( pszSrc, '.' );
		if( psz == NULL )		// �Ҽ��ΰ� ����.
		{
			nSrcIntLen = strlen( pszSrc );
			nSrcDotLen = 0;
		}
		else					// �Ҽ��ΰ� �ִ�.
		{
			nSrcIntLen = psz - pszSrc;
			nSrcDotLen = strlen( pszSrc ) - nSrcIntLen - 1;
		}

		// �����θ� �ִ´�.
		if( nSize-nDotPos >= nSrcIntLen )
		{
			CopyMemory( psData+nSize-nDotPos-nSrcIntLen, pszSrc, nSrcIntLen );
		}
		else
		{
			// ���������� ������ ���̰� �� �� ��� �������� ���ڸ��� �����ȴ�.
			ATLASSERT( FALSE );
			CopyMemory( psData, pszSrc, nSize-nDotPos );
		}

		// �Ҽ��θ� �ִµ� ���������� �Ҽ��� ���̰� �� �� ��� �Ҽ����� ���ڸ��� �����ȴ�.
		ATLASSERT( nDotPos >= nSrcDotLen );
		CopyMemory( psData+nSize-nDotPos, pszSrc + strlen( pszSrc ) - nSrcDotLen, min( nDotPos, nSrcDotLen ) );
	}

	//-----------------------------------------------------------------------
	// �Ǽ� : �Ҽ����� ����
	else if( nType == DATA_TYPE_FLOAT_DOT )
	{
		// �Ҽ��� ��ġ�� �������� ����
		// �Ҽ����� ���� ������ �������� ���ڸ��� �Ҽ����� ���ڸ��� 0���� ä��
		
		//int nSrcLen = strlen( pszSrc );
		
		// ���� 0 ���� ä���
		FillMemory( psData, nSize, '0' );
		
		// �������Ϳ��� �Ҽ����� ��ġ�� ã�Ƽ�
		// ���������� �������� ���̿� �Ҽ����� ���̸� ���Ѵ�.
		int nSrcIntLen;
		int nSrcDotLen;
		const char* psz = _tcschr( pszSrc, '.' );
		if( psz == NULL )		// �Ҽ��ΰ� ����.
		{
			nSrcIntLen = strlen( pszSrc );
			nSrcDotLen = 0;
		}
		else					// �Ҽ��ΰ� �ִ�.
		{
			nSrcIntLen = psz - pszSrc;
			nSrcDotLen = strlen( pszSrc ) - nSrcIntLen - 1;
		}
		
		// �����θ� �ִ´�.
		if( nSize-nDotPos-1 >= nSrcIntLen )
		{
			CopyMemory( psData+nSize-nDotPos-nSrcIntLen-1, pszSrc, nSrcIntLen );
		}
		else
		{
			// ���������� ������ ���̰� �� �� ��� �������� ���ڸ��� �����ȴ�.
			ATLASSERT( FALSE );
			CopyMemory( psData, pszSrc, nSize-nDotPos-1 );
		}

		// �Ҽ����� ��´�.
		psData[nSize-nDotPos-1] = '.';
		
		// �Ҽ��θ� �ִµ� ���������� �Ҽ��� ���̰� �� �� ��� �Ҽ����� ���ڸ��� �����ȴ�.
		ATLASSERT( nDotPos >= nSrcDotLen );
		CopyMemory( psData+nSize-nDotPos, pszSrc + strlen( pszSrc ) - nSrcDotLen, min( nDotPos, nSrcDotLen ) );
	}
}


void SetPacketData( char* psData, int nSize, long data)
{
	// ������ ����
	// ���� ���ڸ��� '0' ���� ä��

	// ����ũ�Ⱑ �� �����ͺ��� �۴ٸ� �����ʹ� ©���� �ϹǷ� �����߻�
	//string stc = misc::itoa(data);
	char buf[32] = {0};
	sprintf_s(buf, 32, "%d", data);

	int nLen = strlen(buf);
	ATLASSERT( nSize >= nLen );

	// ���� 0 ���� ä���
	FillMemory( psData, nSize, '0' );

	// �ڿ������� �����͸� �ִ´�.
	if( nSize >= nLen )
	{
		CopyMemory( psData+nSize-nLen, buf, nLen );
	}
	// �������Ͱ� ũ�ٸ� ���������� �޺κ��� ������.
	else
	{
		CopyMemory( psData, buf, nSize );
	}


}
