#pragma once
#include "IXingAPI.h"

struct STRATEGY_VARIABLE 
{
	double* pVar;
	std::string Name;
	std::string Description;
};
typedef std::vector<STRATEGY_VARIABLE>	VarList;


class CStrategyBase : public CWnd
{
public:
	CStrategyBase();
	virtual ~CStrategyBase(void);
	
protected:

	VarList 	_varList;	

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
	
	void MakeVarProperty(double* dVar, const std::string& varName, const std::string& varDescription )
	{
		STRATEGY_VARIABLE sv;
		sv.Name = varName;
		sv.pVar = dVar;
		sv.Description = varDescription;
		_varList.push_back(sv);
	}

	int GetVarCount()
	{
		return _varList.size();
	}

	STRATEGY_VARIABLE& GetVarInfo(int nIndex)
	{
		return _varList[nIndex];
	}

private:
	afx_msg LRESULT OnMsgReceiveData(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMsgRealData(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMsgTimeout(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()

};

typedef std::shared_ptr<CStrategyBase>	CStrategyPtr;