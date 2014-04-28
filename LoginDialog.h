#pragma once

class CLoginDialog : public CDialogEx
{
public:
	CLoginDialog();
	~CLoginDialog(void);

public:
	enum { IDD = IDD_LOGIN };

	protected:
	DECLARE_MESSAGE_MAP()

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


public:
	virtual BOOL OnInitDialog();
	afx_msg void OnOK ();
	afx_msg void OnCancel ();
	//LRESULT OnAuthClicked(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
	LRESULT OnLogin(WPARAM wParam, LPARAM lParam);

	CString ssId;
	CString ssPassword;
	CString ssAuthPass;

	BOOL m_chkTestServer;

private:
	BOOL Login();
	
};


