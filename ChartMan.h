#pragma once
#include "sltime.h"
#include <set>
#include <deque>

enum CANDLE_UNIT
{
	series_min = 0,
	series_day = -1,
	series_week = -2,
	series_month = -3
};

enum CANDLE_PART
{
	close = 0,
	open,
	high,
	low
};

struct Candle
{
	sltime candle_time;
	double candle_open;
	double candle_high;
	double candle_low;
	double candle_close;
	double candle_vol;
};

struct AROON_VALUE
{
	double up;
	double down;
};

struct BOLLINGER_VALUE
{
	double upper;
	double middle;
	double lower;
};

struct MACD_VALUE
{
	double macd;
	double signal;
	double hist;
};

struct MAMA_VALUE
{
	double mama;
	double fama;
};

struct STOCHASTIC_VALUE
{
	double slowK;
	double slowD;
};

class CChart 
{ 
public: 
	CChart(const CString& code, int period, CANDLE_UNIT unit); 
	~CChart(); 

private: 
	set<int> refSet;

	int _chartId;
	CString _code; 
	int _period; 
	CANDLE_UNIT _unit;

	deque<sltime> _times; 
	deque<double> _opens; 
	deque<double> _highs; 
	deque<double> _lows; 
	deque<double> _closes; 
	deque<double> _vols; 

	//candle
	sltime curUntilTime;
	
	void AppendCandle(const sltime& time, double close, long vol); 
	sltime GetCandleUntileTime(const sltime& tickTime);
	sltime GetCandleBeginTime(const sltime& tickTime);

public: 
	void AddRef(int strategyId)
	{
		refSet.insert(strategyId);
	}

	int DelRef (int strategyId)
	{
		refSet.erase(strategyId);
		return refSet.size();
	}

	CString& GetCode() 
	{ 
		return _code; 
	} 

	int GetPeriod() const 
	{ 
		return _period; 
	} 

	CANDLE_UNIT GetUnit() 
	{
		return _unit;
	}

	int GetChartId() 
	{
		return _chartId;
	}

	unsigned int GetCandleCount() 
	{
		return _closes.size();
	}


	bool isNewCandle(const sltime& tickTime);
	void OnTick(const sltime& time, double price, long volume);

	shared_ptr<Candle> GetCandle(int nth);

	bool GetAD(double* pValue, int nth=0);
	bool GetADOSC(double* pValue, int fast = 3, int slow = 10, int nth=0);
	bool GetADX(double* pValue, int time=14, int nth=0);
	bool GetADXR(double* pValue, int time=14, int nth=0);
	bool GetAPO(double* pValue, int fast = 12, int slow = 26, int nth=0);
	bool GetAROON(AROON_VALUE* pValue, int time=14, int nth=0);
	bool GetAROONOSC(double* pValue, int time=14, int nth=0);
	bool GetATR(double* pValue, int time=14, int nth=0);
	bool GetAVGPRICE(double* pValue, int nth=0);
	bool GetBollingerBand(BOLLINGER_VALUE* pValue, int time=5, double DevUp=2.0, double DevDown=2.0, int nth=0);
	bool GetBOP(double* pValue, int nth=0);
	bool GetCCI(double* pValue, int time=14, int nth=0);
	bool GetCMO(double* pValue, int time=14, int nth=0);
	bool GetDEMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetDMI(double* pValue, int time=14, int nth=0);
	bool GetEMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetKAMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetLINEARREG(double* pValue, CANDLE_PART part=close, int time=14, int nth=0);
	bool GetLINEARREGANGLE(double* pValue, CANDLE_PART part=close, int time=14, int nth=0);
	bool GetLINEARREGINTERCEPT(double* pValue, CANDLE_PART part=close, int time=14, int nth=0);
	bool GetLINEARREGSLOPE(double* pValue, CANDLE_PART part=close, int time=14, int nth=0);
	bool GetMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetMACD(MACD_VALUE* pValue, int fast = 12, int slow = 26, int signal = 9, CANDLE_PART part=close, int nth=0);
	bool GetSimpleMACD(MACD_VALUE* pValue, int fast = 12, int slow = 26, int signal = 9, CANDLE_PART part=close, int nth=0);
	bool GetMAMA(MAMA_VALUE* pValue, CANDLE_PART part=close, double fast = 0.5, double slow = 0.05, int nth=0);
	bool GetMedPrice(double* pValue, int nth=0);
	bool GetMFI(double* pValue, int time=14, int nth=0);
	bool GetMIDPoint(double* pValue, CANDLE_PART part=close, int time=14, int nth=0);
	bool GetMIDPrice(double* pValue, int time=14, int nth=0);
	bool GetDiMinus(double* pValue, int time=14, int nth=0);
	bool GetDmMinus(double* pValue, int time=14, int nth=0);
	bool GetMomentum(double* pValue, int time=10, int nth=0);
	bool GetNATR(double* pValue, int time=14, int nth=0);
	bool GetOBV(double* pValue, int nth=0);
	bool GetDiPlus(double* pValue, int time=14, int nth=0);
	bool GetDmPlus(double* pValue, int time=14, int nth=0);
	bool GetPPO(double* pValue, int fast = 12, int slow = 26, int nth=0);
	bool GetROC(double* pValue, int time = 10, int nth=0);
	bool GetROCP(double* pValue, int time = 10, int nth=0);
	bool GetROCR(double* pValue, int time = 10, int nth=0);
	bool GetRSI(double* pValue, int time = 14, int nth=0);
	bool GetSAR(double* pValue, double af = 0.02, double maxAF = 0.2, int nth=0);
	bool GetSTDDEV(double* pValue, int time = 5, double dev = 1, int nth=0);
	bool GetStochastic(STOCHASTIC_VALUE* pValue, int fastK = 5, int slowK = 3, int slowD=3, int nth=0);
	bool GetStochasticFast(STOCHASTIC_VALUE* pValue, int fastK = 5, int fastD=3, int nth=0);
	bool GetStochasticRSI(STOCHASTIC_VALUE* pValue, int time=14, int fastK = 5, int fastD=3, int nth=0);
	bool GetTEMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetTrueRange(double* pValue, int nth=0);
	bool GetTRIMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetTRIX(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetTSF(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
	bool GetTypicalPrice(double* pValue, int nth=0);
	bool GetUltimateOsc(double* pValue, int time1=7, int time2=14, int time3=28, int nth=0);
	bool GetVAR(double* pValue, int time=5, double dev=1, int nth=0);
	bool GetWC(double* pValue, int nth=0);
	bool GetWILLR(double* pValue, int time = 14, int nth=0);
	bool GetWMA(double* pValue, CANDLE_PART part=close, int time=20, int nth=0);
}; 

class CChartMan
{
public:
	CChartMan(void);
	~CChartMan(void);

private: 
	list<unique_ptr<CChart> > chartList; 
	list<unique_ptr<CChart> > customChartList; 

public: 
	int AddChart(const CString& code, int period, CANDLE_UNIT unit, int strategyId); 
	void DelChart(int chartId, int strategyId);
	CChart* GetChart(int chartId);
	CChart* GetChart(const CString& code, int period, CANDLE_UNIT unit);
	int AddCustomChart(const CString& chartName, int period, CANDLE_UNIT unit, int strategyId);
	void DelCustomChart(const CString& chartName, int strategyId);
	CChart* GetCustomChart(const CString& chartName);
	CChart* GetCustomChart(int chartId);

	void OnTick(const CString code, const sltime& time, double price, long volume); 
};

