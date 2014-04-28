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
		SetDlgItemText(IDC_STATIC_MSG, "��й�ȣ�� �Է��ϼ���");
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

	SetPacketData( pckInBlock.RecCnt  , sizeof( pckInBlock.RecCnt  ), "1"   , DATA_TYPE_LONG );		// ���¹�ȣ                 
	SetPacketData( pckInBlock.MgmtBrnNo, sizeof( pckInBlock.MgmtBrnNo ), "0"      , DATA_TYPE_STRING );      
	SetPacketData( pckInBlock.AcntNo  , sizeof( pckInBlock.AcntNo  ), pAccount->GetAccountCode().c_str()   , DATA_TYPE_STRING );		// ���¹�ȣ                 
	SetPacketData( pckInBlock.Pwd     , sizeof( pckInBlock.Pwd     ), (LPCTSTR)ssPassword        , DATA_TYPE_STRING );		// �����ȣ                 
	SetPacketData( pckInBlock.BalCreTp, sizeof( pckInBlock.BalCreTp), "0", DATA_TYPE_STRING);		// �ֹ�����                 

	pXingApi->Request( 
		this->m_hWnd,				// �����͸� ���� ������, XM_RECEIVE_DATA ���� �´�.
		NAME_CSPAQ02200,			// TR ��ȣ
		&pckInBlock,				// InBlock ������
		sizeof( pckInBlock ),		// InBlock ������ ũ��
		FALSE,						// ������ȸ ���� : ������ȸ�� ��쿡 �����Ѵ�.
		"",							// ������ȸ Key : Header Type�� B �� ��쿣 ���� ��ȸ�� ���� Next Key�� �־��ش�.
		30							// Timeout(��) : �ش� �ð�(��)���� �����Ͱ� ���� ������ Timeout�� �߻��Ѵ�. XM_TIMEOUT_DATA �޽����� �߻��Ѵ�.
	);

}

void CAccountPassDlg::CheckPassFuOpt()
{
	CFOBQ10500InBlock1	pckInBlock;
	FillMemory( &pckInBlock, sizeof( pckInBlock ), ' ' );

	SetPacketData( pckInBlock.RecCnt  , sizeof( pckInBlock.RecCnt  ), "1"   , DATA_TYPE_STRING );		// ���¹�ȣ                 
	SetPacketData( pckInBlock.AcntNo  , sizeof( pckInBlock.AcntNo  ), pAccount->GetAccountCode().c_str()   , DATA_TYPE_STRING );		// ���¹�ȣ                 
	SetPacketData( pckInBlock.Pwd     , sizeof( pckInBlock.Pwd     ), (LPCTSTR)ssPassword        , DATA_TYPE_STRING );		// �����ȣ                 

	pXingApi->Request( 
		this->m_hWnd,				// �����͸� ���� ������, XM_RECEIVE_DATA ���� �´�.
		NAME_CFOBQ10500,			// TR ��ȣ
		&pckInBlock,				// InBlock ������
		sizeof( pckInBlock ),		// InBlock ������ ũ��
		FALSE,						// ������ȸ ���� : ������ȸ�� ��쿡 �����Ѵ�.
		"",							// ������ȸ Key : Header Type�� B �� ��쿣 ���� ��ȸ�� ���� Next Key�� �־��ش�.
		30							// Timeout(��) : �ش� �ð�(��)���� �����Ͱ� ���� ������ Timeout�� �߻��Ѵ�. XM_TIMEOUT_DATA �޽����� �߻��Ѵ�.
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
