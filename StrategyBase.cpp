#include "StdAfx.h"
#include "StrategyBase.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CStrategyBase, CWnd)
	ON_MESSAGE(WM_USER + XM_RECEIVE_DATA, &CStrategyBase::OnMsgReceiveData)
	ON_MESSAGE(WM_USER + XM_RECEIVE_REAL_DATA, &CStrategyBase::OnMsgRealData)
	ON_MESSAGE(WM_USER + XM_TIMEOUT_DATA, &CStrategyBase::OnMsgTimeout)
END_MESSAGE_MAP()

CStrategyBase::CStrategyBase()
{
	
}


CStrategyBase::~CStrategyBase(void)
{	

}

void CStrategyBase::Create()
{
	CString wnd_class_name = ::AfxRegisterWndClass(NULL);
	BOOL created = this->CreateEx(0,wnd_class_name, 
		"CStrategyBaseClass",0 ,0 ,0 ,0 ,0 ,HWND_MESSAGE,0);

	LoadAllProperty();
}

void CStrategyBase::TradeLog(CString log)
{
	((CMainFrame*)AfxGetMainWnd())->TradeLog(log);
}

void CStrategyBase::NormalLog(CString log)
{
	((CMainFrame*)AfxGetMainWnd())->NormalLog(log);
}

void CStrategyBase::SignalLog(CString log)
{
	((CMainFrame*)AfxGetMainWnd())->SignalLog(log);
}

LRESULT CStrategyBase::OnMsgReceiveData(WPARAM wParam, LPARAM lParam)
{
	if( wParam == MESSAGE_DATA )
	{
		LPMSG_PACKET pMsg = (LPMSG_PACKET)lParam;
		
		CString strMsg( (char*)pMsg->lpszMessageData, pMsg->nMsgLength );
		strMsg.TrimRight();
		OnMessage(pMsg->nRqID, strMsg);

		g_iXingAPI.ReleaseMessageData(lParam);
	}
	else if( wParam == SYSTEM_ERROR_DATA )
	{
		LPMSG_PACKET pMsg = (LPMSG_PACKET)lParam;
		CString strMsg( (char*)pMsg->lpszMessageData, pMsg->nMsgLength );
		OnMessage(pMsg->nRqID, strMsg);

		g_iXingAPI.ReleaseMessageData(lParam);
	}
	else if( wParam == RELEASE_DATA )
	{
		g_iXingAPI.ReleaseRequestData(lParam);
	}
	else if( wParam == REQUEST_DATA )
	{		
		LPRECV_PACKET pRpData = (LPRECV_PACKET)lParam;
		OnReceiveData(pRpData);
	}

	
	return 0;
}

LRESULT CStrategyBase::OnMsgRealData(WPARAM wParam, LPARAM lParam)
{
	return 0;
}


LRESULT CStrategyBase::OnMsgTimeout(WPARAM wParam, LPARAM lParam)
{
	return 0;
}

int CStrategyBase::Request(LPCTSTR pszCode, LPVOID lpData, int nDataSize, BOOL bNext, LPCTSTR pszNextKey)
{
	return g_iXingAPI.Request(m_hWnd, pszCode, lpData, nDataSize, bNext, pszNextKey);
}

BOOL CStrategyBase::AdviseRealData(LPCTSTR pszTrNo, LPCTSTR pszData, int nDataUnitLen)
{
	return g_iXingAPI.AdviseRealData(m_hWnd, pszTrNo, pszData, nDataUnitLen);
}

BOOL CStrategyBase::UnadviseRealData(LPCTSTR pszTrNo, LPCTSTR pszData, int nDataUnitLen)
{
	return g_iXingAPI.UnadviseRealData(m_hWnd, pszTrNo, pszData, nDataUnitLen);
}

//void CStrategyBase::AddStop(CStopTradeBase* s)
//{
//	_stopTradeList.push_back(s);
//}

/*BOOL CStrategyBase::EnterBasket(CBasketPtr basket)
{
	if ( _selectedAccount != NULL )
		basket->pSelectedAccount = _selectedAccount;
	else
		basket->pSelectedAccount = CJumunManager::GetInstance()->GetDefaultAccount(itemtype_option);

	ASSERT( basket->size() > 0);
	if ( basket->size() > 0)
	{
		CJumunManager::GetInstance()->EnterBasket(basket);
	}

	basketList.push_back(basket);
    return TRUE;
}

BOOL CStrategyBase::ExitBasket(CBasketPtr basket, LPCTSTR Memo)
{
    CJumunManager::GetInstance()->ExitBasket(basket, Memo);
	basketList.remove(basket);
    return TRUE;
}

BOOL CStrategyBase::Add2Basket(CBasketPtr basket, COption* month, int nCount)
{
    CJumunManager::GetInstance()->AddtoBasket(basket, month, nCount);
    return TRUE;
}

BOOL CStrategyBase::Del2Basket(CBasketPtr basket, COption* month, int nCount)
{
    CJumunManager::GetInstance()->DelfromBasket(basket, month, nCount);
    return TRUE;
}

//double CStrategyBase::GetCurrentProfit(CBasketPtr basket, BOOL bCalcBrokerage)
//{
 //   return CJumunManager::GetInstance()->GetCurrentProfit(basket, bCalcBrokerage);
//}

BOOL CStrategyBase::IsExistSameBasket(CBasket* pBasket)
{
	for(auto i=basketList.begin(); i!=basketList.end(); i++)
    {
		if (pBasket->IsExistEntry(pBasket))
            return TRUE;
    }

    return FALSE;
}*/

