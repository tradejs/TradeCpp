#include "stdafx.h"
#include "ChartMan.h"
#include "sltime.h"
#include "talib\ta_func.h"


int chartIdEncrease = 0;
CChart::CChart(const CString& code, int period, CANDLE_UNIT unit) 
{ 
	_code = code; 
	_period = period; 
	_unit = unit;

	chartIdEncrease++;
	_chartId = chartIdEncrease;
} 

CChart::~CChart() 
{ 
} 

void CChart::AppendCandle(const sltime& time, double close, long vol) 
{ 
	if (_times.size() > 5000) 
	{ 
		_times.pop_front(); 
		_opens.pop_front(); 
		_highs.pop_front(); 
		_lows.pop_front(); 
		_closes.pop_front(); 
		_vols.pop_front(); 
	} 

	_times.push_back(time);	 
	_opens.push_back(open); 
	_highs.push_back(high); 
	_lows.push_back(low); 
	_closes.push_back(close); 
	_vols.push_back(vol); 

} 

bool CChart::isNewCandle(const sltime& tickTime)
{
	return (curUntilTime <= tickTime);
}

sltime CChart::GetCandleUntileTime(const sltime& tickTime)
{
	struct tm stTime;
	tickTime.GetLocalTm(&stTime);


	if (_unit == CANDLE_UNIT::series_min)
	{
		sltime startTime(stTime.tm_year+1900, stTime.tm_mon+1, stTime.tm_mday, 9, 0, 0);
		int candleCount = (tickTime.GetTime() - startTime.GetTime()) / (_period * 60) + 1;	//+1해야 한다.
		return sltime(startTime.GetTime() + (candleCount * _period * 60));
	}
	else  if (_unit == CANDLE_UNIT::series_day)
	{
		return sltime(stTime.tm_year+1900, stTime.tm_mon+1, stTime.tm_mday, 0, 0, 0) + sltimespan(1, 0, 0, 0);
	}
	else  if (_unit == CANDLE_UNIT::series_week)
	{
		return sltime(stTime.tm_year+1900, stTime.tm_mon+1, stTime.tm_mday, 0, 0, 0) + sltimespan(6-stTime.tm_wday, 0, 0, 0);
	}
	else  if (_unit == CANDLE_UNIT::series_month)
	{
		if (stTime.tm_mon + 1 == 12)
			return sltime(stTime.tm_year+1900+1, 1, 1, 0, 0, 0);
		else
			return sltime(stTime.tm_year+1900, stTime.tm_mon+2, 1, 0, 0, 0);
	}
	
}

sltime CChart::GetCandleBeginTime(const sltime& tickTime)
{
	struct tm stTime;
	tickTime.GetLocalTm(&stTime);

	sltime startTime(stTime.tm_year+1900, stTime.tm_mon+1, stTime.tm_mday, 9, 0, 0);
	if (_period == series_day)
	{
		return sltime(stTime.tm_year+1900, stTime.tm_mon+1, stTime.tm_mday, 0, 0, 0);
	}
	else// if (_period < 0)
	{
		int candleCount = (tickTime.GetTime() - startTime.GetTime()) / (_period * 60);	//+1해야 한다.
		return sltime(startTime.GetTime() + (candleCount * _period * 60));
	}
}

shared_ptr<Candle> CChart::GetCandle(int nth)
{
	if (_closes.size()-1-nth < 0)
		return shared_ptr<Candle>();

	if (_closes.size() <= (unsigned int)nth)
		return shared_ptr<Candle>();

	shared_ptr<Candle> pCandle(new Candle);
	pCandle->candle_time = _times[_times.size()-1-nth];
	pCandle->candle_close = _closes[_closes.size()-1-nth];
	pCandle->candle_open = _opens[_opens.size()-1-nth];
	pCandle->candle_high = _highs[_highs.size()-1-nth];
	pCandle->candle_low = _lows[_lows.size()-1-nth];
	pCandle->candle_vol = _vols[_vols.size()-1-nth];

	return pCandle;
}

void CChart::OnTick(const sltime& time, double price, long volume)
{
	if (isNewCandle(time))
	{
		sltime beginTime = GetCandleBeginTime(time);

		AppendCandle(beginTime, price, volume);

		curUntilTime = GetCandleUntileTime(time);
	}	

	_closes[_closes.size()-1] = price;

	double& high = _highs[_highs.size()-1];
	if (close > high)
		high = close;

	double& low = _lows[_lows.size()-1];
	if (close < low)
		low = close;

	if (volume)
		_vols[_vols.size()-1] = volume;

}


static double chartbuf[5000];
bool CChart::GetAD(double* pValue, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _vols.size())
		return false;

	if (_highs.size() == 0 || _lows.size() == 0 || _closes.size() == 0 || _vols.size() == 0)
		return false;
	
	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> vVol; vVol.resize(_vols.size());
	std::copy(_vols.begin(), _vols.end(), vVol.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_AD(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], &vVol[0], &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetADOSC(double* pValue, int fast, int slow, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _vols.size())
		return false;

	if (_highs.size() == 0 || _lows.size() == 0 || _closes.size() == 0 || _vols.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> vVol; vVol.resize(_vols.size());
	std::copy(_vols.begin(), _vols.end(), vVol.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ADOSC(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], &vVol[0], fast, slow, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetADX(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_highs.size() == 0 || _lows.size() == 0 || _closes.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ADX(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetADXR(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_highs.size() == 0 || _lows.size() == 0 || _closes.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ADXR(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetAPO(double* pValue, int fast, int slow, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_highs.begin(), _highs.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_APO(0, _closes.size()-1, &vClose[0], fast, slow, TA_MAType_SMA, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetAROON(AROON_VALUE* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size())
		return false;

	if (_lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	int outNB;
	int outIndex;
	vector<double> outTemp; outTemp.resize(_highs.size());

	TA_RetCode ret = TA_AROON(0, _highs.size()-1, &vHigh[0], &vLow[0], time, &outIndex, &outNB, chartbuf, &outTemp[0]);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	pValue->down = chartbuf[outNB-1-nth];
	pValue->up = outTemp[outNB-1-nth];
	return true;
}

bool CChart::GetAROONOSC(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size())
		return false;

	if (_lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	int outNB;
	int outIndex;
	vector<double> outTemp; outTemp.resize(_highs.size());

	TA_RetCode ret = TA_AROONOSC(0, _highs.size()-1, &vHigh[0], &vLow[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetATR(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ATR(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetAVGPRICE(double* pValue, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _opens.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> vOpen; vOpen.resize(_opens.size());
	std::copy(_opens.begin(), _opens.end(), vOpen.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_AVGPRICE(0, _highs.size()-1, &vOpen[0], &vHigh[0], &vLow[0], &vClose[0], &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetBollingerBand(BOLLINGER_VALUE* pValue, int time, double DevUp, double DevDown, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> outTemp1; outTemp1.resize(_closes.size());
	vector<double> outTemp2; outTemp2.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_BBANDS(0, _closes.size()-1, &vClose[0], time, DevUp, DevDown, TA_MAType_SMA, &outIndex, &outNB, chartbuf, &outTemp1[0], &outTemp2[0]);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	pValue->upper = chartbuf[outNB-1-nth];
	pValue->middle = outTemp1[outNB-1-nth];
	pValue->lower = outTemp2[outNB-1-nth];
	return true;
}

bool CChart::GetBOP(double* pValue, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _opens.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_highs.begin(), _highs.end(), vClose.begin());

	vector<double> vOpen; vOpen.resize(_opens.size());
	std::copy(_opens.begin(), _opens.end(), vOpen.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_BOP(_highs.size()-1-nth, _highs.size()-1-nth, &vOpen[0], &vHigh[0], &vLow[0], &vClose[0], &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB != 1)
		return false;

	*pValue = chartbuf[0];
	return true;
}

bool CChart::GetCCI(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _opens.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_highs.begin(), _highs.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_CCI(_highs.size()-1-nth, _highs.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB != 1)
		return false;

	*pValue = chartbuf[0];
	return true;
}

bool CChart::GetCMO(double* pValue, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_CMO(0, _closes.size()-1, &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}


bool CChart::GetDEMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_DEMA(0, _closes.size()-1, &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetDMI(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _opens.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_highs.begin(), _highs.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_DX(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetEMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_EMA(0, _closes.size()-1, &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetKAMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_KAMA(0, _closes.size()-1, &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetLINEARREG(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_LINEARREG(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}


bool CChart::GetLINEARREGANGLE(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_LINEARREG_ANGLE(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}


bool CChart::GetLINEARREGINTERCEPT(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_LINEARREG_INTERCEPT(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}


bool CChart::GetLINEARREGSLOPE(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_LINEARREG_SLOPE(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_SMA(vValues.size()-1-nth, vValues.size()-1-nth, &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetMACD(MACD_VALUE* pValue, int fast, int slow, int signal, CANDLE_PART part, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	vector<double> outTemp1; outTemp1.resize(_closes.size());
	vector<double> outTemp2; outTemp2.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MACD(0, vValues.size()-1, &vValues[0], fast, slow, signal, &outIndex, &outNB, chartbuf, &outTemp1[0], &outTemp2[0]);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	pValue->macd = chartbuf[outNB-1-nth];
	pValue->signal = outTemp1[outNB-1-nth];
	pValue->hist = outTemp2[outNB-1-nth];
	return true;
}


bool CChart::GetSimpleMACD(MACD_VALUE* pValue, int fast, int slow, int signal,CANDLE_PART part, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	vector<double> outTemp1; outTemp1.resize(_closes.size());
	vector<double> outTemp2; outTemp2.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MACDEXT(vValues.size()-1-nth, vValues.size()-1-nth, &vValues[0], fast, TA_MAType_SMA, slow, TA_MAType_SMA, signal, TA_MAType_SMA, &outIndex, &outNB, chartbuf, &outTemp1[1], &outTemp2[0]);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	pValue->macd = chartbuf[outNB-1];
	pValue->signal = outTemp1[outNB-1];
	pValue->hist = outTemp2[outNB-1];
	return true;
}

bool CChart::GetMAMA(MAMA_VALUE* pValue, CANDLE_PART part, double fast, double slow, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	vector<double> outTemp1; outTemp1.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MAMA(0, vValues.size()-1, &vValues[0], fast, slow, &outIndex, &outNB, chartbuf, &outTemp1[1]);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	pValue->mama = chartbuf[outNB-1-nth];
	pValue->fama = outTemp1[outNB-1-nth];
	return true;
}

bool CChart::GetMedPrice(double* pValue, int nth)
{
	int candleSize = _highs.size();
	if (candleSize < nth + 1)
		return false;

	*pValue = (_highs[candleSize-nth]+_lows[candleSize-nth]) / 2;
	return true;
}

bool CChart::GetMFI(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size() || _highs.size() != _vols.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0 || _vols.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> vVol; vVol.resize(_vols.size());
	std::copy(_vols.begin(), _vols.end(), vVol.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MFI(vHigh.size()-1-nth, vHigh.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], &vVol[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetMIDPoint(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MIDPOINT(vValues.size()-1-nth, vValues.size()-1-nth, &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}


bool CChart::GetMIDPrice(double* pValue, int time, int nth)
{
	if (_lows.size() == 0 || _highs.size() == 0)
			return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MIDPRICE(vHigh.size()-1-nth, vHigh.size()-1-nth, &vHigh[0], &vLow[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetDiMinus(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());
		
	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MINUS_DI(0, vHigh.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetDmMinus(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MINUS_DM(0, vHigh.size()-1, &vHigh[0], &vLow[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetMomentum(double* pValue, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_MOM(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetNATR(double* pValue, int time/* =10 */, int nth/* =0 */)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_NATR(0, _highs.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetOBV(double* pValue, int nth/* =0 */)
{
	if (_closes.size() == 0 || _vols.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> vVol; vVol.resize(_vols.size());
	std::copy(_vols.begin(), _vols.end(), vVol.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_OBV(0, vClose.size()-1, &vClose[0], &vVol[0], &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetDiPlus(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_PLUS_DI(0, vHigh.size()-1, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetDmPlus(double* pValue, int time, int nth)
{
	if (_highs.size() != _lows.size() ||_highs.size() != _closes.size())
		return false;

	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_PLUS_DM(0, vHigh.size()-1, &vHigh[0], &vLow[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetPPO(double* pValue, int fast /* = 12 */, int slow /* = 26 */, int nth/* =0 */)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_PPO(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], fast, slow, TA_MAType_SMA, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetROC(double* pValue, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ROC(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetROCP(double* pValue, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ROCP(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetROCR(double* pValue, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ROCR(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetRSI(double* pValue, int time /* = 14 */, int nth/* =0 */)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_RSI(0, vClose.size()-1-nth, &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetSAR(double* pValue, double af /* = 0.02 */, double maxAF /* = 0.2 */, int nth/* =0 */)
{
	if (_lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_SAR(0, vHigh.size()-1-nth, &vHigh[0], &vLow[0], af, maxAF, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetSTDDEV(double* pValue, int time, double dev, int nth)
{
	if (_closes.size() == 0)
			return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_STDDEV(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, dev, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetStochastic(STOCHASTIC_VALUE* pValue, int fastK, int slowK, int slowD, int nth)
{
	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> outTemp1; outTemp1.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_STOCH(vClose.size()-1-nth, vClose.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], fastK, slowK, TA_MAType_SMA, slowD, TA_MAType_SMA, &outIndex, &outNB, chartbuf, &outTemp1[0]);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	pValue->slowK = chartbuf[outNB-1];
	pValue->slowD = outTemp1[outNB-1];
	return true;
}

bool CChart::GetStochasticFast(STOCHASTIC_VALUE* pValue, int fastK, int fastD, int nth)
{
	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> outTemp1; outTemp1.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_STOCHF(vClose.size()-1-nth, vClose.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], fastK, fastD, TA_MAType_SMA, &outIndex, &outNB, chartbuf, &outTemp1[0]);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	pValue->slowK = chartbuf[outNB-1];
	pValue->slowD = outTemp1[outNB-1];
	return true;
}

bool CChart::GetStochasticRSI(STOCHASTIC_VALUE* pValue, int time, int fastK, int fastD, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	vector<double> outTemp1; outTemp1.resize(_closes.size());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_STOCHRSI(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, fastK, fastD, TA_MAType_SMA, &outIndex, &outNB, chartbuf, &outTemp1[0]);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	pValue->slowK = chartbuf[outNB-1];
	pValue->slowD = outTemp1[outNB-1];
	return true;
}

bool CChart::GetTEMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_TEMA(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetTrueRange(double* pValue, int nth)
{
	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_TRANGE(vClose.size()-1-nth, vClose.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetTRIMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_TRIMA(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetTRIX(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_TRIX(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetTSF(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_TSF(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}

bool CChart::GetTypicalPrice(double* pValue, int nth)
{
	int candleSize = _highs.size();
	if (candleSize < nth + 1)
		return false;

	*pValue = (_highs[candleSize-1-nth]+_lows[candleSize-1-nth]+_closes[candleSize-1-nth]) / 3;
	return true;
}

bool CChart::GetUltimateOsc(double* pValue, int time1, int time2, int time3, int nth)
{
	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_ULTOSC(vClose.size()-1-nth, vClose.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], time1, time2, time3, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetVAR(double* pValue, int time, double dev, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_VAR(vClose.size()-1-nth, vClose.size()-1-nth, &vClose[0], time, dev, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetWC(double* pValue, int nth)
{
	int candleSize = _highs.size();
	if (candleSize < nth + 1)
		return false;

	*pValue = (_highs[candleSize-1-nth]+_lows[candleSize-1-nth]+_closes[candleSize-1-nth]*2) / 4;
	return true;
}

bool CChart::GetWILLR(double* pValue, int time, int nth)
{
	if (_closes.size() == 0 || _lows.size() == 0 || _highs.size() == 0)
		return false;

	vector<double> vHigh; vHigh.resize(_highs.size());
	std::copy(_highs.begin(), _highs.end(), vHigh.begin());

	vector<double> vLow; vLow.resize(_lows.size());
	std::copy(_lows.begin(), _lows.end(), vLow.begin());

	vector<double> vClose; vClose.resize(_closes.size());
	std::copy(_closes.begin(), _closes.end(), vClose.begin());

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_WILLR(vClose.size()-1-nth, vClose.size()-1-nth, &vHigh[0], &vLow[0], &vClose[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1)
		return false;

	*pValue = chartbuf[outNB-1];
	return true;
}

bool CChart::GetWMA(double* pValue, CANDLE_PART part, int time, int nth)
{
	if (_closes.size() == 0)
		return false;

	vector<double> vValues; vValues.resize(_closes.size());
	if (part == close)
		std::copy(_closes.begin(), _closes.end(), vValues.begin());
	else if (part == high)
		std::copy(_highs.begin(), _highs.end(), vValues.begin());
	else if (part == low)
		std::copy(_lows.begin(), _lows.end(), vValues.begin());
	else if (part == close)
		std::copy(_opens.begin(), _opens.end(), vValues.begin());
	else
		return false;

	int outNB;
	int outIndex;
	TA_RetCode ret = TA_WMA(0, _closes.size(), &vValues[0], time, &outIndex, &outNB, chartbuf);
	if (ret != TA_SUCCESS || outNB < 1 || outNB <= nth)
		return false;

	*pValue = chartbuf[outNB-1-nth];
	return true;
}


CChartMan::CChartMan(void)
{
}


CChartMan::~CChartMan(void)
{
}

int CChartMan::AddChart(const CString& code, int period, CANDLE_UNIT unit, int strategyId) 
{ 
	CChart* pChart = GetChart(code, period, unit);
	if (pChart != nullptr)
	{
		pChart->AddRef(strategyId);
		return pChart->GetChartId();
	}

	unique_ptr<CChart> chart(new CChart(code, period, unit)); 
	int chartId = chart->GetChartId();
	chart->AddRef(strategyId);

	chartList.push_back(move(chart)); 
	return chartId; 
} 

CChart* CChartMan::GetChart(int chartId)
{
	for (auto i=chartList.begin(); i!=chartList.end(); ++i) 
	{ 
		if ((*i)->GetChartId() == chartId) 
			return (*i).get(); 
	} 

	return nullptr;
}

CChart* CChartMan::GetChart(const CString& code, int period, CANDLE_UNIT unit)
{
	for (auto i=chartList.begin(); i!=chartList.end(); ++i) 
	{ 
		if ((*i)->GetCode() == code && (*i)->GetPeriod() == period && (*i)->GetUnit() == unit) 
			return (*i).get(); 
	} 

	return nullptr;
}

void CChartMan::DelChart(int chartId, int strategyId) 
{
	for (auto i=chartList.begin(); i!=chartList.end(); ++i) 
	{ 
		if ((*i)->GetChartId() == chartId) 
		{
			int refCount = (*i)->DelRef(strategyId);
			if (refCount == 0)
				i = chartList.erase(i);
			
			break;
		}
	} 

}


int CChartMan::AddCustomChart(const CString& chartName, int period, CANDLE_UNIT unit, int strategyId) 
{ 
	CChart* pChart = GetCustomChart(chartName);
	if (pChart != nullptr)
	{
		pChart->AddRef(strategyId);
		return pChart->GetChartId();
	}

	unique_ptr<CChart> chart(new CChart(chartName, period, unit)); 
	int chartId = chart->GetChartId();
	chart->AddRef(strategyId);

	customChartList.push_back(move(chart)); 
	return chartId; 
} 

CChart* CChartMan::GetCustomChart(int chartId)
{
	for (auto i=customChartList.begin(); i!=customChartList.end(); ++i)
	{ 
		if ((*i)->GetChartId() == chartId) 
			return (*i).get(); 
	} 

	return nullptr;
}

CChart* CChartMan::GetCustomChart(const CString& chartName)
{
	for (auto i=customChartList.begin(); i!=customChartList.end(); ++i)
	{ 
		if ((*i)->GetCode() == chartName) 
			return (*i).get(); 
	} 

	return nullptr;
}

void CChartMan::DelCustomChart(const CString& chartName, int strategyId) 
{
	for (auto i=customChartList.begin(); i!=customChartList.end(); ++i) 
	{ 
		if ((*i)->GetCode() == chartName) 
		{
			int refCount = (*i)->DelRef(strategyId);
			if (refCount == 0)
				i = customChartList.erase(i);

			break;
		}
	} 

}

void CChartMan::OnTick(const CString code, const sltime& time, double price, long volume) 
{ 
	for (auto i=chartList.begin(); i!=chartList.end(); ++i) 
	{
		if ((*i)->GetCode() == code)
			(*i)->OnTick(time, price, volume);

	}
} 

