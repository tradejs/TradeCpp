// 이 MFC 샘플 소스 코드는 MFC Microsoft Office Fluent 사용자 인터페이스("Fluent UI")를 
// 사용하는 방법을 보여 주며, MFC C++ 라이브러리 소프트웨어에 포함된 
// Microsoft Foundation Classes Reference 및 관련 전자 문서에 대해 
// 추가적으로 제공되는 내용입니다.  
// Fluent UI를 복사, 사용 또는 배포하는 데 대한 사용 약관은 별도로 제공됩니다.  
// Fluent UI 라이선싱 프로그램에 대한 자세한 내용은 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

#include "stdafx.h"

#include "OutputWnd.h"
#include "Resource.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COutputBar

COutputWnd::COutputWnd()
{
}

COutputWnd::~COutputWnd()
{
}

BEGIN_MESSAGE_MAP(COutputWnd, CDockablePane)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

int COutputWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	CRect rectDummy;
	rectDummy.SetRectEmpty();

	// 탭 창을 만듭니다.
	if (!m_wndTabs.Create(CMFCTabCtrl::STYLE_FLAT, rectDummy, this, 1))
	{
		TRACE0("출력 탭 창을 만들지 못했습니다.\n");
		return -1;      // 만들지 못했습니다.
	}

	// 출력 창을 만듭니다.
	const DWORD dwStyle = LBS_NOINTEGRALHEIGHT | WS_CHILD | WS_VISIBLE | WS_HSCROLL | WS_VSCROLL;

	if (!m_wndOutputNormal.Create(dwStyle, rectDummy, &m_wndTabs, 2) ||
		!m_wndOutputTrade.Create(dwStyle, rectDummy, &m_wndTabs, 3) ||
		!m_wndOutputSignal.Create(dwStyle, rectDummy, &m_wndTabs, 4))
	{
		TRACE0("출력 창을 만들지 못했습니다.\n");
		return -1;      // 만들지 못했습니다.
	}

	UpdateFonts();

	CString strTabName;
	//BOOL bNameValid;

	// 탭에 목록 창을 연결합니다.
	//bNameValid = strTabName.LoadString(IDS_BUILD_TAB);
	//ASSERT(bNameValid);
	m_wndTabs.AddTab(&m_wndOutputNormal, "일반", (UINT)0);
	//bNameValid = strTabName.LoadString(IDS_DEBUG_TAB);
	//ASSERT(bNameValid);
	m_wndTabs.AddTab(&m_wndOutputTrade, "거래로그", (UINT)1);
	//bNameValid = strTabName.LoadString(IDS_FIND_TAB);
	//ASSERT(bNameValid);
	m_wndTabs.AddTab(&m_wndOutputSignal, "시그널", (UINT)2);

	// 출력 탭을 더미 텍스트로 채웁니다.
	FillBuildWindow();
	FillDebugWindow();
	FillFindWindow();

	return 0;
}

void COutputWnd::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);

	// Tab 컨트롤은 전체 클라이언트 영역을 처리해야 합니다.
	m_wndTabs.SetWindowPos (NULL, -1, -1, cx, cy, SWP_NOMOVE | SWP_NOACTIVATE | SWP_NOZORDER);
}

void COutputWnd::AdjustHorzScroll(CListBox& wndListBox)
{
	CClientDC dc(this);
	CFont* pOldFont = dc.SelectObject(&afxGlobalData.fontRegular);

	int cxExtentMax = 0;

	for (int i = 0; i < wndListBox.GetCount(); i ++)
	{
		CString strItem;
		wndListBox.GetText(i, strItem);

		cxExtentMax = max(cxExtentMax, (int)dc.GetTextExtent(strItem).cx);
	}

	wndListBox.SetHorizontalExtent(cxExtentMax);
	dc.SelectObject(pOldFont);
}

void COutputWnd::FillBuildWindow()
{
	m_wndOutputNormal.AddString(_T("여기에 일반 로그가 표시됩니다."));
}

void COutputWnd::FillDebugWindow()
{
	m_wndOutputTrade.AddString(_T("여기에 트레이딩 로그가 출력 됩니다."));
}

void COutputWnd::FillFindWindow()
{
	m_wndOutputSignal.AddString(_T("시그널이 발생할 경우 여기에 출력됩니다."));
}

void COutputWnd::UpdateFonts()
{
	m_wndOutputNormal.SetFont(&afxGlobalData.fontRegular);
	m_wndOutputTrade.SetFont(&afxGlobalData.fontRegular);
	m_wndOutputSignal.SetFont(&afxGlobalData.fontRegular);
}

void COutputWnd::NormalLog(CString log)
{
	m_wndOutputNormal.AddString(log);

	if (m_wndOutputNormal.GetCount() > 100000)
		m_wndOutputNormal.DeleteString(0);

}


void COutputWnd::TradeLog(CString log)
{
	m_wndOutputTrade.AddString(log);

	if (m_wndOutputTrade.GetCount() > 100000)
		m_wndOutputTrade.DeleteString(0);
}

void COutputWnd::SignalLog(CString log)
{
	m_wndOutputSignal.AddString(log);

	if (m_wndOutputSignal.GetCount() > 100000)
		m_wndOutputSignal.DeleteString(0);
}

/////////////////////////////////////////////////////////////////////////////
// COutputList1

COutputList::COutputList()
{
}

COutputList::~COutputList()
{
}

BEGIN_MESSAGE_MAP(COutputList, CListBox)
	ON_WM_CONTEXTMENU()
	ON_COMMAND(ID_EDIT_COPY, OnEditCopy)
	ON_COMMAND(ID_EDIT_CLEAR, OnEditClear)
	ON_COMMAND(ID_VIEW_OUTPUTWND, OnViewOutput)
	ON_WM_WINDOWPOSCHANGING()
END_MESSAGE_MAP()
/////////////////////////////////////////////////////////////////////////////
// COutputList 메시지 처리기

void COutputList::OnContextMenu(CWnd* /*pWnd*/, CPoint point)
{
	CMenu menu;
	menu.LoadMenu(IDR_OUTPUT_POPUP);

	CMenu* pSumMenu = menu.GetSubMenu(0);

	if (AfxGetMainWnd()->IsKindOf(RUNTIME_CLASS(CMDIFrameWndEx)))
	{
		CMFCPopupMenu* pPopupMenu = new CMFCPopupMenu;

		if (!pPopupMenu->Create(this, point.x, point.y, (HMENU)pSumMenu->m_hMenu, FALSE, TRUE))
			return;

		((CMDIFrameWndEx*)AfxGetMainWnd())->OnShowPopupMenu(pPopupMenu);
		UpdateDialogControls(this, FALSE);
	}

	SetFocus();
}

void COutputList::OnEditCopy()
{
	MessageBox(_T("출력 복사"));
}

void COutputList::OnEditClear()
{
	MessageBox(_T("출력 지우기"));
}

void COutputList::OnViewOutput()
{
	CDockablePane* pParentBar = DYNAMIC_DOWNCAST(CDockablePane, GetOwner());
	CMDIFrameWndEx* pMainFrame = DYNAMIC_DOWNCAST(CMDIFrameWndEx, GetTopLevelFrame());

	if (pMainFrame != NULL && pParentBar != NULL)
	{
		pMainFrame->SetFocus();
		pMainFrame->ShowPane(pParentBar, FALSE, FALSE, FALSE);
		pMainFrame->RecalcLayout();

	}
}
