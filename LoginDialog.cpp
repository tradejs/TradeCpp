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
		SetDlgItemText(IDC_STATIC_MSG, "���̵� �Է��ϼ���");
		this->GetDlgItem(IDC_ID)->SetFocus();
		return;
	}

	if (ssPassword.GetLength() == 0)
	{
		SetDlgItemText(IDC_STATIC_MSG, "��й�ȣ�� �Է��ϼ���");
		this->GetDlgItem(IDC_PASSWORD)->SetFocus();
		return;
	}

	if (ssAuthPass.GetLength() == 0)
	{
		SetDlgItemText(IDC_STATIC_MSG, "������ ��й�ȣ�� �Է��ϼ���");
		this->GetDlgItem(IDC_AUTHPASS)->SetFocus();
		return;
	}
	
	Login();
}

BOOL CLoginDialog::Login()
{
	// ��������
	BOOL bResult = g_iXingAPI.Connect( 
		this->m_hWnd,								// Connect�� �� ���Ŀ� Disconnect �޽����� ���� ������ Handle, Login ������� Login �� ó���ϴ� ������ �̹Ƿ� Disconnect�� ���������쿡�� �޴´�.
		m_chkTestServer ? TEST_SERVER : REAL_SERVER,	// �����ּ�
		m_chkTestServer ? TEST_PORT : REAL_PORT,		// ������Ʈ
		WM_USER,								// XingAPI���� ����ϴ� �޽����� ���۹�ȣ, Windows������ ����ڸ޽����� 0x400(=WM_USER) �̻���
												// ����ؾ� ��. �⺻�����δ� WM_USER�� ����ϸ� ������ ���α׷� ���ο��� �޽��� ID�� ��ġ�� �Ǹ�
												// �� ���� �����Ͽ� �޽��� ID �浹�� ���Ҽ� ����
		10*1000,								// ������ �ð��̻�(1/1000 �� ����)���� �ð��� �ɸ��� �� ��� ������з� ������
		-1										// ���������� Packet Size, -1 �̸� �⺻�� ���
												// ���ͳ� ���������� Ư�� ũ�� �̻��� �����͸� �ѹ��� ������ ������ �������� ��찡 �߻�
												// �̷� ��쿡 �ѹ��� ������ Packet Size�� �����Ͽ� �� �̻� �Ǵ� Packet�� �������� ���� ����
	);

	// ���ӽ��� ó��
	if( bResult == FALSE )
		return FALSE;
		
	// �α���
	bResult = g_iXingAPI.Login( 
		this->m_hWnd,							// Login �������� �޽����� ���� ������
		ssId,						// ����� ID
		ssPassword,				// ����� ��й�ȣ
		ssAuthPass,				// �������� ��й�ȣ
		m_chkTestServer ? 1 : 0,	// 0 : �Ǽ���, 1 : �������ڼ���
		TRUE								// �α��� �߿� �������� ������ �߻��� �����޽��� ǥ�ÿ���
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