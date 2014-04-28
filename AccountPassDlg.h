#pragma once

class CAccountPassDlg : public CDialogEx
{
public:
	enum PassResult
	{
		ok,
		cancel
	};

public:
	CAccountPassDlg(CAccount* _pAccount);
	~CAccountPassDlg(void);

public:
	enum { IDD = IDD_PASS };
    BEGIN_MSG_MAP_EX(CAccountPassDlg)
        MESSAGE_HANDLER_EX(WM_INITDIALOG, OnInitDialog)
		MESSAGE_HANDLER_EX(WM_USER + XM_RECEIVE_DATA, OnReceiveData)
        COMMAND_ID_HANDLER(IDOK, OnOK)
        COMMAND_ID_HANDLER(IDCANCEL, OnCancel)
    //ALT_MSG_MAP(1)
    //    COMMAND_HANDLER(IDC_AUTHONLY, BN_CLICKED, OnAuthClicked)
    //ALT_MSG_MAP(2)
    //    MSG_WM_SETCURSOR(OnSetCursor_Exit)
    END_MSG_MAP()

	BEGIN_DDX_MAP(CAccountPassDlg)
		DDX_TEXT(IDC_EDIT_PASS, ssPassword)
    END_DDX_MAP()

public:
	LRESULT OnInitDialog(UINT msg, WPARAM, LPARAM);
	LRESULT OnOK (UINT uCode, int nID, HWND hWndCtl, BOOL &bHandled );
	LRESULT OnCancel (UINT, WPARAM, HWND, BOOL &bHandled);
	LRESULT OnReceiveData(UINT msg, WPARAM wParam, LPARAM lParam);

	CString ssPassword;
	PassResult passResult;

private:
	IXingAPI* pXingApi;
	CAccount* pAccount;
	void CheckPassStock();
	void CheckPassFuOpt();
	
};


