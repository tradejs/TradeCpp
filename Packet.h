#pragma once
#include "IXingAPI.h"
#include "packet\t1102.h"

class CRequest
{
public:
	virtual int GetPacketSize() = 0;
	virtual char* GetPacketStream() = 0;
};


class StockSiseRequst : public CRequest
{
private:
	t1102InBlock in;

public:
	StockSiseRequst(const CString& code)
	{
		memset(&in, ' ', sizeof(t1102InBlock));
		strcpy_s(in.shcode, 6, (LPCTSTR)code);
	}

	int GetPacketSize() { return sizeof(t1102InBlock);	}
	char* GetPacketStream()	{ return (char*)&in;	}
};

//T1102
class StockSiseResponse
{
	CString	hname;	//	한글명	문자열	20	
	int		price;	//	현재가	정수	8	
	CString	sign;	//	전일대비구분	문자열	1	1:상한	2:상승	3:보합	4:하한	5:하락
	int		change;	//	전일대비	정수	8	
	double	diff;	//	등락율	실수	6.2	
	long	volume;	//	누적거래량	정수	12	
	int		recprice;//	기준가	정수	8	
	int		avg;	//	가중평균	정수	8	
	int		uplmtprice;	//	상한가	정수	8	
	int		dnlmtprice;	//	하한가	정수	8	
	long	jnilvolume;	//	전일거래량	정수	12	
	long	volumediff;	//	거래량차	정수	12	
	int		open;	//	시가	정수	8	
	CString	opentime;	//	시가시간	문자열	6	
	int		high;	//	고가	정수	8	
	CString	hightime;	//	고가시간	문자열	6	
	int		low;	//	저가	정수	8	
	CString	lowtime;	//	저가시간	문자열	6	
	int		high52w;	//	52최고가	정수	8	
	CString	high52wdate;	//	52최고가일	문자열	8	
	int		low52w;	//	52최저가	정수	8	
	CString	low52wdate;	//	52최저가일	문자열	8	
	double	exhratio;	//소진율	실수	6.2	
	double	per;	//	PER	실수	6.2	
	double	pbrx;	//	PBRX	실수	6.2	
	long	listing;	//	상장주식수(천)	정수	12	
	int		jkrate;	//	증거금율	정수	8	
	CString	memedan;	//	수량단위	문자열	5	
	CString	offernocd1;	//	매도증권사코드1	문자열	3	
	CString	bidnocd1;	//	매수증권사코드1	문자열	3	
	CString	offerno1;	//	매도증권사명1	문자열	6	
	CString	bidno1;	//	매수증권사명1	문자열	6	
	int		dvol1;	//	총매도수량1	정수	8	
	int		svol1;	//	총매수수량1	정수	8	
	int		dcha1;	//	매도증감1	정수	8	
	int		scha1;	//	매수증감1	정수	8	
	double	ddiff1;	//	매도비율1	실수	6.2	
	double	sdiff1;	//	매수비율1	실수	6.2	
	CString	offernocd2;	//	매도증권사코드2	문자열	3	
	CString	bidnocd2;	//	매수증권사코드2	문자열	3	
	CString	offerno2;	//	매도증권사명2	문자열	6	
	CString	bidno2;	//	매수증권사명2	문자열	6	
	int		dvol2;	//	총매도수량2	정수	8	
	int		svol2;	//	총매수수량2	정수	8	
	int		dcha2;	//	매도증감2	정수	8	
	int		scha2;	//	매수증감2	정수	8	
	double	ddiff2;	//	매도비율2	실수	6.2	
	double	sdiff2;	//	매수비율2	실수	6.2	
	CString	offernocd3;	//	매도증권사코드3	문자열	3	
	CString	bidnocd3;	//	매수증권사코드3	문자열	3	
	CString	offerno3;	//	매도증권사명3	문자열	6	
	CString	bidno3;	//	매수증권사명3	문자열	6	
	int		dvol3;	//	총매도수량3	정수	8	
	int		svol3;	//	총매수수량3	정수	8	
	int		dcha3;	//	매도증감3	정수	8	
	int		scha3;	//	매수증감3	정수	8	
	double	ddiff3;	//	매도비율3	실수	6.2	
	double	sdiff3;	//	매수비율3	실수	6.2	
	CString	offernocd4;	//	매도증권사코드4	문자열	3	
	CString	bidnocd4;	//	매수증권사코드4	문자열	3	
	CString	offerno4;	//	매도증권사명4	문자열	6	
	CString	bidno4;	//	매수증권사명4	문자열	6	
	int		dvol4;	//	총매도수량4	정수	8	
	int		svol4;	//	총매수수량4	정수	8	
	int		dcha4;	//	매도증감4	정수	8	
	int		scha4;	//	매수증감4	정수	8	
	double	ddiff4;	//	매도비율4	실수	6.2	
	double	sdiff4;	//	매수비율4	실수	6.2	
	CString	offernocd5;	//	매도증권사코드5	문자열	3	
	CString	bidnocd5;	//	매수증권사코드5	문자열	3	
	CString	offerno5;	//	매도증권사명5	문자열	6	
	CString	bidno5;	//	매수증권사명5	문자열	6	
	int		dvol5;	//	총매도수량5	정수	8	
	int		svol5;	//	총매수수량5	정수	8	
	int		dcha5;	//	매도증감5	정수	8	
	int		scha5;	//	매수증감5	정수	8	
	double	ddiff5;	//	매도비율5	실수	6.2	
	double	sdiff5;	//	매수비율5	실수	6.2	
	long	fwdvl;	//	외국계매도합계수량	정수	12	
	long	ftradmdcha;	//	외국계매도직전대비	정수	12	
	double	ftradmddiff;	//	외국계매도비율	실수	6.2	
	long	fwsvl;	//	외국계매수합계수량	정수	12	
	long	ftradmscha;	//	외국계매수직전대비	정수	12	
	double	ftradmsdiff;	//	외국계매수비율	실수	6.2	
	double	vol;	//	회전율	실수	6.2	
	CString	shcode;	//	단축코드	문자열	6	
	long	value;	//	누적거래대금	정수	12	
	long	jvolume;	//	전일동시간거래량	정수	12	
	int		highyear;	//	연중최고가	정수	8	
	CString	highyeardate;	//	연중최고일자	문자열	8	
	int		lowyear;	//	연중최저가	정수	8	
	CString	lowyeardate;	//	연중최저일자	문자열	8	
	int		target;	//	목표가	정수	8	
	long	capital;	//	자본금	정수	12	
	long	abscnt;	//	유동주식수	정수	12	
	long	parprice;	//	액면가	정수	8	
	CString	gsmm;	//	결산월	문자열	2	
	int		subprice;	//	대용가	정수	8	
	long	total;	//	시가총액	정수	12	
	CString	listdate;	//	상장일	문자열	8	
	CString	name;	//	전분기명	문자열	10	
	long	bfsales;	//	전분기매출액	정수	12	
	long	bfoperatingincome;	//	전분기영업이익	정수	12	
	long	bfordinaryincome;	//	전분기경상이익	정수	12	
	long	bfnetincome;	//	전분기순이익	정수	12	
	double	bfeps;	//	전분기EPS	실수	13.2	
	CString	name2;	//	전전분기명	문자열	10	
	long	bfsales2;	//	전전분기매출액	정수	12	
	long	bfoperatingincome2;	//	전전분기영업이익	정수	12	
	long	bfordinaryincome2;	//	전전분기경상이익	정수	12	
	long	bfnetincome2;	//	전전분기순이익	정수	12	
	double	bfeps2;	//	전전분기EPS	실수	13.2	
	double	salert;	//	전년대비매출액	실수	7.2	
	double	opert;	//	전년대비영업이익	실수	7.2	
	double	ordrt;	//	전년대비경상이익	실수	7.2	
	double	netrt;	//	전년대비순이익	실수	7.2	
	double	epsrt;	//	전년대비EPS	실수	7.2	
	CString	info1;	//	락구분	문자열	10	권배락	권리락	배당락	액면분할	액면병합	주식병합	기업분할	감자
	CString	info2;	//	관리/급등구분	문자열	10	관리/경고	관리/위험	관리	예고	경고	위험
	CString	info3;	//	정지/연장구분	문자열	10	거래정지	거래중단	시가연장	종가연장
	CString	info4;	//	투자/불성실구분	문자열	12	
	CString	janginfo;	//	장구분	문자열	10	KOSPI	KOSPI200	KOSPI DR	KOSDAQ50	KOSDAQ	CB
	double	t_per;	//	T.PER	실수	6.2	

};

class Packet
{
public:
	static StockSiseResponse MakeStockSiseResponse(LPRECV_PACKET packet);
};

