#pragma once

#include <time.h>
//#include <string>

class sltimespan
{
public:
	sltimespan() throw();
	sltimespan(time_t time) throw();
	sltimespan(
		 long lDays,
		 int nHours,
		 int nMins,
		 int nSecs) throw();

	__int64 GetDays() const throw();
	__int64 GetTotalHours() const throw();
	long GetHours() const throw();
	__int64 GetTotalMinutes() const throw();
	long GetMinutes() const throw();
	__int64 GetTotalSeconds() const throw();
	long GetSeconds() const throw();

	time_t GetTimeSpan() const throw();

	sltimespan operator+( sltimespan span) const throw();
	sltimespan operator-( sltimespan span) const throw();
	sltimespan& operator+=( sltimespan span) throw();
	sltimespan& operator-=( sltimespan span) throw();
	bool operator==( sltimespan span) const throw();
	bool operator!=( sltimespan span) const throw();
	bool operator<( sltimespan span) const throw();
	bool operator>( sltimespan span) const throw();
	bool operator<=( sltimespan span) const throw();
	bool operator>=( sltimespan span) const throw();

private:
	time_t m_timeSpan;
};

class sltime
{
public:
	static sltime GetCurrentSlTime() throw();

	sltime() throw();
	sltime( time_t time) throw();
	sltime(
		 int nYear,
		 int nMonth,
		 int nDay,
		 int nHour,
		 int nMin,
		 int nSec,
		 int nDST = -1);

	sltime& operator=( time_t time) throw();
	sltime& operator=( const sltime& time) throw();

	sltime& operator+=( sltimespan span) throw();
	sltime& operator-=( sltimespan span) throw();

	sltimespan operator-( sltime time) const throw();
	sltime operator-( sltimespan span) const throw();
	sltime operator+( sltimespan span) const throw();

	bool operator==( sltime time) const throw();
	bool operator!=( sltime time) const throw();
	bool operator<( sltime time) const throw();
	bool operator>( sltime time) const throw();
	bool operator<=( sltime time) const throw();
	bool operator>=( sltime time) const throw();

	//struct tm* GetGmtTm( struct tm* ptm) const;
	struct tm* GetLocalTm( struct tm* ptm) const;

	time_t GetTime() const throw();

	int GetYear() const throw();
	int GetMonth() const throw();
	int GetDay() const throw();
	int GetHour() const throw();
	int GetMinute() const throw();
	int GetSecond() const throw();
	int GetDayOfWeek() const throw();

	
	int sltimetoYM() const;
	int sltimetoYMD() const;
	int sltimetoHM() const;
	int sltimetoDHM() const;

	void YMDtoSlTime(int YMD);
	void YMDHMStoSlTime(int YMD, int hour, int min, int sec);

	// formatting using "C" strftime
	CString Format(const char* pszFormat) const;
	CString FormatGmt(const char* pszFormat) const;

private:
	time_t m_time;
};
