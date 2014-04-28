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
	CString	hname;	//	�ѱ۸�	���ڿ�	20	
	int		price;	//	���簡	����	8	
	CString	sign;	//	���ϴ�񱸺�	���ڿ�	1	1:����	2:���	3:����	4:����	5:�϶�
	int		change;	//	���ϴ��	����	8	
	double	diff;	//	�����	�Ǽ�	6.2	
	long	volume;	//	�����ŷ���	����	12	
	int		recprice;//	���ذ�	����	8	
	int		avg;	//	�������	����	8	
	int		uplmtprice;	//	���Ѱ�	����	8	
	int		dnlmtprice;	//	���Ѱ�	����	8	
	long	jnilvolume;	//	���ϰŷ���	����	12	
	long	volumediff;	//	�ŷ�����	����	12	
	int		open;	//	�ð�	����	8	
	CString	opentime;	//	�ð��ð�	���ڿ�	6	
	int		high;	//	��	����	8	
	CString	hightime;	//	���ð�	���ڿ�	6	
	int		low;	//	����	����	8	
	CString	lowtime;	//	�����ð�	���ڿ�	6	
	int		high52w;	//	52�ְ�	����	8	
	CString	high52wdate;	//	52�ְ���	���ڿ�	8	
	int		low52w;	//	52������	����	8	
	CString	low52wdate;	//	52��������	���ڿ�	8	
	double	exhratio;	//������	�Ǽ�	6.2	
	double	per;	//	PER	�Ǽ�	6.2	
	double	pbrx;	//	PBRX	�Ǽ�	6.2	
	long	listing;	//	�����ֽļ�(õ)	����	12	
	int		jkrate;	//	���ű���	����	8	
	CString	memedan;	//	��������	���ڿ�	5	
	CString	offernocd1;	//	�ŵ����ǻ��ڵ�1	���ڿ�	3	
	CString	bidnocd1;	//	�ż����ǻ��ڵ�1	���ڿ�	3	
	CString	offerno1;	//	�ŵ����ǻ��1	���ڿ�	6	
	CString	bidno1;	//	�ż����ǻ��1	���ڿ�	6	
	int		dvol1;	//	�Ѹŵ�����1	����	8	
	int		svol1;	//	�Ѹż�����1	����	8	
	int		dcha1;	//	�ŵ�����1	����	8	
	int		scha1;	//	�ż�����1	����	8	
	double	ddiff1;	//	�ŵ�����1	�Ǽ�	6.2	
	double	sdiff1;	//	�ż�����1	�Ǽ�	6.2	
	CString	offernocd2;	//	�ŵ����ǻ��ڵ�2	���ڿ�	3	
	CString	bidnocd2;	//	�ż����ǻ��ڵ�2	���ڿ�	3	
	CString	offerno2;	//	�ŵ����ǻ��2	���ڿ�	6	
	CString	bidno2;	//	�ż����ǻ��2	���ڿ�	6	
	int		dvol2;	//	�Ѹŵ�����2	����	8	
	int		svol2;	//	�Ѹż�����2	����	8	
	int		dcha2;	//	�ŵ�����2	����	8	
	int		scha2;	//	�ż�����2	����	8	
	double	ddiff2;	//	�ŵ�����2	�Ǽ�	6.2	
	double	sdiff2;	//	�ż�����2	�Ǽ�	6.2	
	CString	offernocd3;	//	�ŵ����ǻ��ڵ�3	���ڿ�	3	
	CString	bidnocd3;	//	�ż����ǻ��ڵ�3	���ڿ�	3	
	CString	offerno3;	//	�ŵ����ǻ��3	���ڿ�	6	
	CString	bidno3;	//	�ż����ǻ��3	���ڿ�	6	
	int		dvol3;	//	�Ѹŵ�����3	����	8	
	int		svol3;	//	�Ѹż�����3	����	8	
	int		dcha3;	//	�ŵ�����3	����	8	
	int		scha3;	//	�ż�����3	����	8	
	double	ddiff3;	//	�ŵ�����3	�Ǽ�	6.2	
	double	sdiff3;	//	�ż�����3	�Ǽ�	6.2	
	CString	offernocd4;	//	�ŵ����ǻ��ڵ�4	���ڿ�	3	
	CString	bidnocd4;	//	�ż����ǻ��ڵ�4	���ڿ�	3	
	CString	offerno4;	//	�ŵ����ǻ��4	���ڿ�	6	
	CString	bidno4;	//	�ż����ǻ��4	���ڿ�	6	
	int		dvol4;	//	�Ѹŵ�����4	����	8	
	int		svol4;	//	�Ѹż�����4	����	8	
	int		dcha4;	//	�ŵ�����4	����	8	
	int		scha4;	//	�ż�����4	����	8	
	double	ddiff4;	//	�ŵ�����4	�Ǽ�	6.2	
	double	sdiff4;	//	�ż�����4	�Ǽ�	6.2	
	CString	offernocd5;	//	�ŵ����ǻ��ڵ�5	���ڿ�	3	
	CString	bidnocd5;	//	�ż����ǻ��ڵ�5	���ڿ�	3	
	CString	offerno5;	//	�ŵ����ǻ��5	���ڿ�	6	
	CString	bidno5;	//	�ż����ǻ��5	���ڿ�	6	
	int		dvol5;	//	�Ѹŵ�����5	����	8	
	int		svol5;	//	�Ѹż�����5	����	8	
	int		dcha5;	//	�ŵ�����5	����	8	
	int		scha5;	//	�ż�����5	����	8	
	double	ddiff5;	//	�ŵ�����5	�Ǽ�	6.2	
	double	sdiff5;	//	�ż�����5	�Ǽ�	6.2	
	long	fwdvl;	//	�ܱ���ŵ��հ����	����	12	
	long	ftradmdcha;	//	�ܱ���ŵ��������	����	12	
	double	ftradmddiff;	//	�ܱ���ŵ�����	�Ǽ�	6.2	
	long	fwsvl;	//	�ܱ���ż��հ����	����	12	
	long	ftradmscha;	//	�ܱ���ż��������	����	12	
	double	ftradmsdiff;	//	�ܱ���ż�����	�Ǽ�	6.2	
	double	vol;	//	ȸ����	�Ǽ�	6.2	
	CString	shcode;	//	�����ڵ�	���ڿ�	6	
	long	value;	//	�����ŷ����	����	12	
	long	jvolume;	//	���ϵ��ð��ŷ���	����	12	
	int		highyear;	//	�����ְ�	����	8	
	CString	highyeardate;	//	�����ְ�����	���ڿ�	8	
	int		lowyear;	//	����������	����	8	
	CString	lowyeardate;	//	������������	���ڿ�	8	
	int		target;	//	��ǥ��	����	8	
	long	capital;	//	�ں���	����	12	
	long	abscnt;	//	�����ֽļ�	����	12	
	long	parprice;	//	�׸鰡	����	8	
	CString	gsmm;	//	����	���ڿ�	2	
	int		subprice;	//	��밡	����	8	
	long	total;	//	�ð��Ѿ�	����	12	
	CString	listdate;	//	������	���ڿ�	8	
	CString	name;	//	���б��	���ڿ�	10	
	long	bfsales;	//	���б�����	����	12	
	long	bfoperatingincome;	//	���б⿵������	����	12	
	long	bfordinaryincome;	//	���б�������	����	12	
	long	bfnetincome;	//	���б������	����	12	
	double	bfeps;	//	���б�EPS	�Ǽ�	13.2	
	CString	name2;	//	�����б��	���ڿ�	10	
	long	bfsales2;	//	�����б�����	����	12	
	long	bfoperatingincome2;	//	�����б⿵������	����	12	
	long	bfordinaryincome2;	//	�����б�������	����	12	
	long	bfnetincome2;	//	�����б������	����	12	
	double	bfeps2;	//	�����б�EPS	�Ǽ�	13.2	
	double	salert;	//	����������	�Ǽ�	7.2	
	double	opert;	//	�����񿵾�����	�Ǽ�	7.2	
	double	ordrt;	//	������������	�Ǽ�	7.2	
	double	netrt;	//	�����������	�Ǽ�	7.2	
	double	epsrt;	//	������EPS	�Ǽ�	7.2	
	CString	info1;	//	������	���ڿ�	10	�ǹ��	�Ǹ���	����	�׸����	�׸麴��	�ֽĺ���	�������	����
	CString	info2;	//	����/�޵��	���ڿ�	10	����/���	����/����	����	����	���	����
	CString	info3;	//	����/���屸��	���ڿ�	10	�ŷ�����	�ŷ��ߴ�	�ð�����	��������
	CString	info4;	//	����/�Ҽ��Ǳ���	���ڿ�	12	
	CString	janginfo;	//	�屸��	���ڿ�	10	KOSPI	KOSPI200	KOSPI DR	KOSDAQ50	KOSDAQ	CB
	double	t_per;	//	T.PER	�Ǽ�	6.2	

};

class Packet
{
public:
	static StockSiseResponse MakeStockSiseResponse(LPRECV_PACKET packet);
};

