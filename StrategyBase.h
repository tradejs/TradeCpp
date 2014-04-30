#pragma once
#include "IXingAPI.h"
#include "Packet.h"
#include "ChartMan.h"

struct STRATEGY_VARIABLE 
{
	double* pVar;
	CString Name;
	CString Description;
};

class CStrategyBase : public CWnd
{
public:
	CStrategyBase();
	virtual ~CStrategyBase(void);
	
	//프로퍼티 윈도우에 변수를 노출 하기 위한 코드
	vector<unique_ptr<STRATEGY_VARIABLE> > 	_varList;	
	void MakeVarProperty(double* dVar, const CString& varName, const CString& varDescription )
	{
		unique_ptr<STRATEGY_VARIABLE> sv(new STRATEGY_VARIABLE);
		sv->Name = varName;
		sv->pVar = dVar;
		sv->Description = varDescription;
		_varList.push_back(move(sv));
	}
	int GetVarCount() { return _varList.size(); }
	STRATEGY_VARIABLE* GetVarInfo(int nIndex) { return _varList[nIndex].get(); 	}
	virtual LPCTSTR GetStrategyName() = 0;
	virtual void LoadAllProperty(void) = 0;



	//실제 전략에서 Overriding 하여 구현할 함수들
	virtual void OnStart() = 0;
	virtual void OnStop() = 0;
	virtual void OnReceiveData(LPRECV_PACKET packet) = 0;
	virtual void OnRealData(LPRECV_REAL_PACKET realpacket) = 0;
	virtual void OnMessage(int reqId, const CString& msg) = 0;
	virtual void OnTimeout() = 0;
	virtual void OnLoad() = 0;
	virtual void OnTimer(int timerId) = 0;


	//실시간/조회 데이터 요청 함수
	int Request(LPCTSTR pszCode, LPVOID lpData, int nDataSize, BOOL bNext, LPCTSTR pszNextKey);
	BOOL AdviseRealData(CRequest* request);
	BOOL UnadviseRealData(CRequest* request);

	//객체간 데이터 공유 기능
	void SetGlobal(string key, const CString data);
	void SetGlobal(string key, long data);
	void SetGlobal(string key, double data);
	CString GetGlobalString(const string& key);
	long GetGlobalLong(const string& key);
	double GetGlobalDouble(const string& key);

	//파일 저장을 위한 기능
	void WriteToStorage(const CString& key, const CString& data);
	CString ReadFromStorage(const CString& key);

	//로그 기능
	void TradeLog(const CString& log);
	void NormalLog(const CString& log);
	void SignalLog(const CString& log);

	    
	void Create();
	
private:
	afx_msg LRESULT OnMsgReceiveData(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMsgRealData(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMsgTimeout(WPARAM wParam, LPARAM lParam);
	afx_msg void OnTimer(UINT nIDEvent);
	DECLARE_MESSAGE_MAP()

};
