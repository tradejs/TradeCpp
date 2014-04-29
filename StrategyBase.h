#pragma once
#include "IXingAPI.h"
#include "Packet.h"

struct STRATEGY_VARIABLE 
{
	double* pVar;
	CString Name;
	CString Description;
};
//typedef std::vector<STRATEGY_VARIABLE>	VarList;


class CStrategyBase : public CWnd
{
public:
	CStrategyBase();
	virtual ~CStrategyBase(void);
	
protected:

	vector<unique_ptr<STRATEGY_VARIABLE> > 	_varList;	

	virtual void OnStart() = 0;
	virtual void OnStop() = 0;
	virtual void OnReceiveData(LPRECV_PACKET packet) = 0;
	virtual void OnRealData(LPRECV_REAL_PACKET realpacket) = 0;
	virtual void OnMessage(int reqId, const CString& msg) = 0;
	virtual void OnTimeout() = 0;
	virtual void OnLoad() = 0;

	int Request(LPCTSTR pszCode, LPVOID lpData, int nDataSize, BOOL bNext, LPCTSTR pszNextKey);
	BOOL AdviseRealData(LPCTSTR pszTrNo, LPCTSTR pszData, int nDataUnitLen);
	BOOL UnadviseRealData(LPCTSTR pszTrNo, LPCTSTR pszData, int nDataUnitLen);

public:
    virtual LPCTSTR GetStrategyName()=0;
	virtual void LoadAllProperty(void)=0;

	void Create();
	
	void MakeVarProperty(double* dVar, const CString& varName, const CString& varDescription )
	{
		unique_ptr<STRATEGY_VARIABLE> sv(new STRATEGY_VARIABLE);
		sv->Name = varName;
		sv->pVar = dVar;
		sv->Description = varDescription;
		_varList.push_back(move(sv));
	}

	int GetVarCount()
	{
		return _varList.size();
	}

	STRATEGY_VARIABLE* GetVarInfo(int nIndex)
	{
		return _varList[nIndex].get();
	}

	void TradeLog(CString log);
	void NormalLog(CString log);
	void SignalLog(CString log);

private:
	afx_msg LRESULT OnMsgReceiveData(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMsgRealData(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMsgTimeout(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()

};
