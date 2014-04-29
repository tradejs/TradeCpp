#include "stdafx.h"
#include "sltime.h"


sltimespan::sltimespan() throw() : m_timeSpan(0)
{
}

 sltimespan::sltimespan( time_t time) throw() : m_timeSpan( time )
{
}

sltimespan::sltimespan(long lDays, int nHours, int nMins, int nSecs) throw()
{
	m_timeSpan = nSecs + 60* (nMins + 60* (nHours + __int64(24) * lDays));
}

__int64 sltimespan::GetDays() const throw()
{
	return( m_timeSpan/(24*3600) );
}

__int64 sltimespan::GetTotalHours() const throw()
{
	return( m_timeSpan/3600 );
}

long sltimespan::GetHours() const throw()
{
	return( long( GetTotalHours()-(GetDays()*24) ) );
}

__int64 sltimespan::GetTotalMinutes() const throw()
{
	return( m_timeSpan/60 );
}

long sltimespan::GetMinutes() const throw()
{
	return( long( GetTotalMinutes()-(GetTotalHours()*60) ) );
}

__int64 sltimespan::GetTotalSeconds() const throw()
{
	return( m_timeSpan );
}

long sltimespan::GetSeconds() const throw()
{
	return( long( GetTotalSeconds()-(GetTotalMinutes()*60) ) );
}

time_t sltimespan::GetTimeSpan() const throw()
{
	return( m_timeSpan );
}

sltimespan sltimespan::operator+( sltimespan span) const throw()
{
	return( sltimespan( m_timeSpan+span.m_timeSpan ) );
}

sltimespan sltimespan::operator-( sltimespan span) const throw()
{
	return( sltimespan( m_timeSpan-span.m_timeSpan ) );
}

sltimespan& sltimespan::operator+=( sltimespan span) throw()
{
	m_timeSpan += span.m_timeSpan;
	return( *this );
}

sltimespan& sltimespan::operator-=( sltimespan span) throw()
{
	m_timeSpan -= span.m_timeSpan;
	return( *this );
}

bool sltimespan::operator==( sltimespan span) const throw()
{
	return( m_timeSpan == span.m_timeSpan );
}

bool sltimespan::operator!=( sltimespan span) const throw()
{
	return( m_timeSpan != span.m_timeSpan );
}

bool sltimespan::operator<( sltimespan span) const throw()
{
	return( m_timeSpan < span.m_timeSpan );
}

bool sltimespan::operator>( sltimespan span) const throw()
{
	return( m_timeSpan > span.m_timeSpan );
}

bool sltimespan::operator<=( sltimespan span) const throw()
{
	return( m_timeSpan <= span.m_timeSpan );
}

bool sltimespan::operator>=( sltimespan span) const throw()
{
	return( m_timeSpan >= span.m_timeSpan );
}

/////////////////////////////////////////////////////////////////////////////
// CSlTime
/////////////////////////////////////////////////////////////////////////////

sltime sltime::GetCurrentSlTime() throw()
{
	return( sltime( time( nullptr ) ) );
}

sltime::sltime() throw() : m_time(0)
{
}

sltime::sltime( time_t time)  throw(): m_time( time )
{
}

sltime::sltime( int nYear, int nMonth, int nDay, int nHour, int nMin, int nSec, int nDST)
{
#pragma warning (push)
#pragma warning (disable: 4127)  // conditional expression constant

	ASSERT( nYear >= 1900 );
	ASSERT( nMonth >= 1 && nMonth <= 12 );
	ASSERT( nDay >= 1 && nDay <= 31 );
	ASSERT( nHour >= 0 && nHour <= 23 );
	ASSERT( nMin >= 0 && nMin <= 59 );
	ASSERT( nSec >= 0 && nSec <= 59 );

#pragma warning (pop)

	struct tm atm;

	atm.tm_sec = nSec;
	atm.tm_min = nMin;
	atm.tm_hour = nHour;
	atm.tm_mday = nDay;
	atm.tm_mon = nMonth - 1;        // tm_mon is 0 based
	atm.tm_year = nYear - 1900;     // tm_year is 1900 based
	atm.tm_isdst = nDST;

	m_time = mktime(&atm);
	ASSERT(m_time != -1);       // indicates an illegal input time
	if(m_time == -1)
	{
		throw(0);
	}
}

sltime& sltime::operator=( time_t time) throw()
{
	m_time = time;

	return( *this );
}

sltime& sltime::operator=( const sltime& time) throw()
{
	m_time = time.GetTime();

	return( *this );
}

sltime& sltime::operator+=( sltimespan span) throw()
{
	m_time += span.GetTimeSpan();

	return( *this );
}

sltime& sltime::operator-=( sltimespan span) throw()
{
	m_time -= span.GetTimeSpan();

	return( *this );
}

sltimespan sltime::operator-( sltime time) const throw()
{
	return( sltimespan( m_time-time.m_time ) );
}

sltime sltime::operator-( sltimespan span) const throw()
{
	return( sltime( m_time-span.GetTimeSpan() ) );
}

sltime sltime::operator+( sltimespan span) const throw()
{
	return( sltime( m_time+span.GetTimeSpan() ) );
}

bool sltime::operator==( sltime time) const throw()
{
	return( m_time == time.m_time );
}

bool sltime::operator!=( sltime time) const throw()
{
	return( m_time != time.m_time );
}

bool sltime::operator<( sltime time) const throw()
{
	return( m_time < time.m_time );
}

bool sltime::operator>( sltime time) const throw()
{
	return( m_time > time.m_time );
}

bool sltime::operator<=( sltime time) const throw()
{
	return( m_time <= time.m_time );
}

bool sltime::operator>=( sltime time) const throw()
{
	return( m_time >= time.m_time );
}


struct tm* sltime::GetLocalTm( struct tm* ptm) const
{
	// Ensure ptm is valid
	ASSERT( ptm != nullptr );

	if (ptm != nullptr)
	{
		struct tm* ptmTemp;
		ptmTemp = localtime(&m_time);

		// Be sure the call succeeded
		if(ptmTemp == 0) { ASSERT(false); return nullptr; }

		*ptm = *ptmTemp;
		return ptm;
	}

	return nullptr;
}

time_t sltime::GetTime() const throw()
{
	return( m_time );
}

int sltime::GetYear() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? (ptm->tm_year) + 1900 : 0 ;
}

int sltime::GetMonth() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? ptm->tm_mon + 1 : 0;
}

int sltime::GetDay() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? ptm->tm_mday : 0 ;
}

int sltime::GetHour() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? ptm->tm_hour : -1 ;
}

int sltime::GetMinute() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? ptm->tm_min : -1 ;
}

int sltime::GetSecond() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? ptm->tm_sec : -1 ;
}

int sltime::GetDayOfWeek() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm ? ptm->tm_wday : 0;
}


CString sltime::Format( const char* pFormat) const
{
	if(pFormat == nullptr)
	{
		return pFormat;
	}

	char szBuffer[256];
	struct tm* ptmTemp;

	ptmTemp = localtime(&m_time);
	if (ptmTemp == nullptr)
	{
		ASSERT(false);
		return "time format failed";
	}

	if (!strftime(szBuffer, 256, pFormat, ptmTemp))
	{
		szBuffer[0] = '\0';
	}

	return szBuffer;
}

inline CString sltime::FormatGmt( const char* pFormat) const
{
	if(pFormat == nullptr)
	{
		return pFormat;
	}

	char szBuffer[256];
	struct tm* ptmTemp;
	ptmTemp = gmtime(&m_time);

	if (!strftime(szBuffer, 256, pFormat, ptmTemp))
	{
		szBuffer[0] = '\0';
	}

	return szBuffer;
}

/*int GetMonthInterval(int month1, int month2)
{
	int year = month1 / 100 - month2 / 100;
	int mon = month1 % 100 - month2 % 100;

	return (year*12 + mon);
}*/

int sltime::sltimetoYM() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return (ptm->tm_year+1900)*100 + ptm->tm_mon+1;
}

int sltime::sltimetoYMD() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	int nResult = (ptm->tm_year+1900) * 10000;
	nResult += (ptm->tm_mon+1) * 100;
	nResult += ptm->tm_mday;
	return nResult;
}

int sltime::sltimetoHM() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	return ptm->tm_hour * 100 + ptm->tm_min;
}

int sltime::sltimetoDHM() const
{
	ASSERT(m_time!=0);
	struct tm * ptm;
	ptm = localtime(&m_time);
	int nResult = ptm->tm_mday * 10000;
	nResult += ptm->tm_hour * 100;
	nResult += ptm->tm_min;
	return nResult;
}

void sltime::YMDtoSlTime(int YMD)
{
	struct tm atm;

	atm.tm_sec = 0;
	atm.tm_min = 0;
	atm.tm_hour = 0;
	atm.tm_mday = YMD % 100;
	atm.tm_mon = (YMD%10000)/100 - 1;        // tm_mon is 0 based
	atm.tm_year = YMD/10000 - 1900;     // tm_year is 1900 based
	atm.tm_isdst = -1;

	m_time = mktime(&atm);
	ASSERT(m_time != -1);       // indicates an illegal input time
}

void sltime::YMDHMStoSlTime(int YMD, int hour, int min, int sec)
{
	struct tm atm;

	atm.tm_sec = sec;
	atm.tm_min = min;
	atm.tm_hour = hour;
	atm.tm_mday = YMD % 100;
	atm.tm_mon = (YMD%10000)/100 - 1;        // tm_mon is 0 based
	atm.tm_year = YMD/10000 - 1900;     // tm_year is 1900 based
	atm.tm_isdst = -1;

	m_time = mktime(&atm);
	ASSERT(m_time != -1);       // indicates an illegal input time
}