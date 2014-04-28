#include "stdafx.h"
#include "resource.h"
#include "IXingAPI.h"
#include "AccountPassDlg.h"
#include "xing_define.h"
#include "xingutil.h"
#include "packet\CSPAQ02200.h"
#include "packet\CFOBQ10500.h"
#include "trade.h"


CAccountPassDlg::CAccountPassDlg(IXingAPI* _pXingApi, CAccount* _pAccount)
{
	pXingApi = _pXingApi;
	pAccount = _pAccount;
}


CAccountPassDlg::~CAccountPassDlg(void)
{
}


LRESULT CAccountPassDlg::OnInitDialog(UINT, WPARAM, LPARAM)
{
	SetDlgItemText(IDC_STATIC_ACCOUNT, pAccount->GetAccountCode().c_str());
	return 0;
}

LRESULT CAccountPassDlg::OnOK (UINT uCode, int nID, HWND hWndCtl , BOOL &bHandled)
{
	DoDataExchange(TRUE);

	if (ssPassword.GetLength() == 0)
	{
		SetDlgItemText(IDC_STATIC_MSG, "비밀번호를 입력하세요");
		this->GetDlgItem(IDC_EDIT_PASS).SetFocus();
		return 0;
	}

	CheckPassStock();
	return 0;
}

void CAccountPassDlg::CheckPassStock()
{
	CSPAQ02200InBlock1	pckInBlock;
	FillMemory( &pckInBlock, sizeof( pckInBlock ), ' ' );

	SetPacketData( pckInBlock.RecCnt  , sizeof( pckInBlock.RecCnt  ), "1"   , DATA_TYPE_LONG );		// 계좌번호                 
	SetPacketData( pckInBlock.MgmtBrnNo, sizeof( pckInBlock.MgmtBrnNo ), "0"      , DATA_TYPE_STRING );      
	SetPacketData( pckInBlock.AcntNo  , sizeof( pckInBlock.AcntNo  ), pAccount->GetAccountCode().c_str()   , DATA_TYPE_STRING );		// 계좌번호                 
	SetPacketData( pckInBlock.Pwd     , sizeof( pckInBlock.Pwd     ), (LPCTSTR)ssPassword        , DATA_TYPE_STRING );		// 종목번호                 
	SetPacketData( pckInBlock.BalCreTp, sizeof( pckInBlock.BalCreTp), "0", DATA_TYPE_STRING);		// 주문수량                 

	pXingApi->Request( 
		this->m_hWnd,				// 데이터를 받을 윈도우, XM_RECEIVE_DATA 으로 온다.
		NAME_CSPAQ02200,			// TR 번호
		&pckInBlock,				// InBlock 데이터
		sizeof( pckInBlock ),		// InBlock 데이터 크기
		FALSE,						// 다음조회 여부 : 다음조회일 경우에 세팅한다.
		"",							// 다음조회 Key : Header Type이 B 일 경우엔 이전 조회때 받은 Next Key를 넣어준다.
		30							// Timeout(초) : 해당 시간(초)동안 데이터가 오지 않으면 Timeout에 발생한다. XM_TIMEOUT_DATA 메시지가 발생한다.
	);

}

void CAccountPassDlg::CheckPassFuOpt()
{
	CFOBQ10500InBlock1	pckInBlock;
	FillMemory( &pckInBlock, sizeof( pckInBlock ), ' ' );

	SetPacketData( pckInBlock.RecCnt  , sizeof( pckInBlock.RecCnt  ), "1"   , DATA_TYPE_STRING );		// 계좌번호                 
	SetPacketData( pckInBlock.AcntNo  , sizeof( pckInBlock.AcntNo  ), pAccount->GetAccountCode().c_str()   , DATA_TYPE_STRING );		// 계좌번호                 
	SetPacketData( pckInBlock.Pwd     , sizeof( pckInBlock.Pwd     ), (LPCTSTR)ssPassword        , DATA_TYPE_STRING );		// 종목번호                 

	pXingApi->Request( 
		this->m_hWnd,				// 데이터를 받을 윈도우, XM_RECEIVE_DATA 으로 온다.
		NAME_CFOBQ10500,			// TR 번호
		&pckInBlock,				// InBlock 데이터
		sizeof( pckInBlock ),		// InBlock 데이터 크기
		FALSE,						// 다음조회 여부 : 다음조회일 경우에 세팅한다.
		"",							// 다음조회 Key : Header Type이 B 일 경우엔 이전 조회때 받은 Next Key를 넣어준다.
		30							// Timeout(초) : 해당 시간(초)동안 데이터가 오지 않으면 Timeout에 발생한다. XM_TIMEOUT_DATA 메시지가 발생한다.
	);

}

LRESULT CAccountPassDlg::OnReceiveData(UINT msg, WPARAM wParam, LPARAM lParam)
{
	if( wParam == MESSAGE_DATA )
	{
		LPMSG_PACKET pMsg = (LPMSG_PACKET)lParam;
		if (strncmp(pMsg->szMsgCode, "03669", 5) == 0)
			SetDlgItemText(IDC_STATIC_MSG, (LPCTSTR)pMsg->lpszMessageData);
		else if (strncmp(pMsg->szMsgCode, "01741", 5) == 0)
			CheckPassFuOpt();
		else 
			SetDlgItemText(IDC_STATIC_MSG, (LPCTSTR)pMsg->lpszMessageData);

		pXingApi->ReleaseMessageData(lParam);
		return 0;
	}
	else if( wParam == SYSTEM_ERROR_DATA )
	{
		pXingApi->ReleaseMessageData(lParam);
		return 0;
	}
	else if( wParam == RELEASE_DATA )
	{
		pXingApi->ReleaseRequestData(lParam);
		return 0;
	}

	if( wParam != REQUEST_DATA )
	{			
		return 0;
	}

	LPRECV_PACKET pRpData = (LPRECV_PACKET)lParam;
	//int nDataLength = pRpData->nDataLength;

	if (strcmp(pRpData->szTrCode, NAME_CSPAQ02200) == 0)
	{
		LPCSPAQ02200OutBlock1 pOutBlock = (LPCSPAQ02200OutBlock1)pRpData->lpData;
		if (pOutBlock->RecCnt[0] != 0)
		{
			pAccount->SetEnableMarket(CAccount::Type::STOCK);
			passResult = PassResult::ok;
			EndDialog(0);
		}
	}
	if (strcmp(pRpData->szTrCode, NAME_CFOBQ10500) == 0)
	{
		LPCFOBQ10500OutBlock1 pOutBlock = (LPCFOBQ10500OutBlock1)pRpData->lpData;
		if (pOutBlock->RecCnt[0] != 0)
		{
			pAccount->SetEnableMarket(CAccount::Type::FUOPT);
			passResult = PassResult::ok;
			EndDialog(0);
		}
	}

	return 0;
}


LRESULT CAccountPassDlg::OnCancel (UINT, WPARAM, HWND hWndCtl, BOOL &bHandled)
{
	passResult = PassResult::cancel;
	this->EndDialog(0);
	return 0;
}
