#include "stdafx.h"
#include "resource.h"
#include "IXingAPI.h"
#include "LoginDialog.h"

const char* REAL_SERVER = "Hts.etrade.co.kr";
const int REAL_PORT = 80;

const char* TEST_SERVER = "demo.etrade.co.kr";
const int TEST_PORT = 80;

BEGIN_MESSAGE_MAP(CLoginDialog, CDialogEx)
	ON_MESSAGE(WM_USER + XM_LOGIN, OnLogin)
	ON_BN_CLICKED(IDOK, &CLoginDialog::OnOK)
	ON_BN_CLICKED(IDCANCEL, &CLoginDialog::OnCancel)
END_MESSAGE_MAP()


CLoginDialog::CLoginDialog() : CDialogEx(CLoginDialog::IDD)
{
}


CLoginDialog::~CLoginDialog(void)
{
}


BOOL CLoginDialog::OnInitDialog()
{
	this->SetDlgItemTextA(IDC_ID, "");
	this->SetDlgItemTextA(IDC_PASSWORD, "");
	this->SetDlgItemTextA(IDC_AUTHPASS, "");
	return 0;
}

void CLoginDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Check(pDX, IDC_TEST_SERVER, m_chkTestServer);
	DDX_Text(pDX, IDC_ID, ssId);
	DDX_Text(pDX, IDC_PASSWORD, ssPassword);
	DDX_Text(pDX, IDC_AUTHPASS, ssAuthPass);
}

void CLoginDialog::OnOK()
{
	UpdateData();

	if (ssId.GetLength() == 0)
	{
		SetDlgItemText(IDC_STATIC_MSG, "아이디를 입력하세요");
		this->GetDlgItem(IDC_ID)->SetFocus();
		return;
	}

	if (ssPassword.GetLength() == 0)
	{
		SetDlgItemText(IDC_STATIC_MSG, "비밀번호를 입력하세요");
		this->GetDlgItem(IDC_PASSWORD)->SetFocus();
		return;
	}

	if (ssAuthPass.GetLength() == 0)
	{
		SetDlgItemText(IDC_STATIC_MSG, "인증서 비밀번호를 입력하세요");
		this->GetDlgItem(IDC_AUTHPASS)->SetFocus();
		return;
	}
	
	Login();
}

BOOL CLoginDialog::Login()
{
	// 서버접속
	BOOL bResult = g_iXingAPI.Connect( 
		this->m_hWnd,								// Connect가 된 이후에 Disconnect 메시지를 받을 윈도우 Handle, Login 윈도우는 Login 만 처리하는 윈도우 이므로 Disconnect는 메인윈도우에서 받는다.
		m_chkTestServer ? TEST_SERVER : REAL_SERVER,	// 서버주소
		m_chkTestServer ? TEST_PORT : REAL_PORT,		// 서버포트
		WM_USER,								// XingAPI에서 사용하는 메시지의 시작번호, Windows에서는 사용자메시지를 0x400(=WM_USER) 이상을
												// 사용해야 함. 기본적으로는 WM_USER를 사용하면 되지만 프로그램 내부에서 메시지 ID가 겹치게 되면
												// 이 값을 조정하여 메시지 ID 충돌을 피할수 있음
		10*1000,								// 지정한 시간이상(1/1000 초 단위)으로 시간이 걸리게 될 경우 연결실패로 간주함
		-1										// 보내어지는 Packet Size, -1 이면 기본값 사용
												// 인터넷 공유기등에서는 특정 크기 이상의 데이터를 한번에 보내면 에러가 떨어지는 경우가 발생
												// 이럴 경우에 한번에 보내는 Packet Size를 지정하여 그 이상 되는 Packet은 여러번에 걸쳐 전송
	);

	// 접속실패 처리
	if( bResult == FALSE )
		return FALSE;
		
	// 로그인
	bResult = g_iXingAPI.Login( 
		this->m_hWnd,							// Login 성공여부 메시지를 받을 윈도우
		ssId,						// 사용자 ID
		ssPassword,				// 사용자 비밀번호
		ssAuthPass,				// 공인인증 비밀번호
		m_chkTestServer ? 1 : 0,	// 0 : 실서버, 1 : 모의투자서버
		TRUE								// 로그인 중에 공인인증 에러가 발생시 에러메시지 표시여부
	);

	return bResult;
}

LRESULT CLoginDialog::OnLogin(WPARAM wParam, LPARAM lParam)
{
	LPCSTR pszCode = (LPCSTR)wParam;
	LPCSTR pszMsg  = (LPCSTR)lParam;

	if (strncmp(pszCode, "0000", 4) == 0)
	{
		::OutputDebugString("Login OK");
		EndDialog(0);
	} else {
		CString strMsg;
		strMsg.Format( "[%s] %s", pszCode, pszMsg );
		::OutputDebugString((LPCTSTR)strMsg);
		SetDlgItemText(IDC_STATIC_MSG, strMsg);
	}

	return 0;
}


void CLoginDialog::OnCancel()
{
	this->EndDialog(0);
}

/*LRESULT CLoginDialog::OnAuthClicked(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
{
	BOOL enable = !this->IsDlgButtonChecked(IDC_AUTHONLY);
	this->GetDlgItem(IDC_PASSWORD).EnableWindow(enable);
	if (enable == FALSE)
	{
		this->SetDlgItemText(IDC_PASSWORD, "");
	}
	return 0;
}*/