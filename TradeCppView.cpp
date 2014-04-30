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

// TradeCppView.cpp : CTradeCppView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "TradeCpp.h"
#endif

#include "MainFrm.h"
#include "TradeCppDoc.h"
#include "TradeCppView.h"
#include "StrategyBase.h"

#include "DataWriteStrategy.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTradeCppView
#define IDC_LIST 4562

IMPLEMENT_DYNCREATE(CTradeCppView, CView)

BEGIN_MESSAGE_MAP(CTradeCppView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_CREATE()
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST, OnItemchangedList2)
	ON_WM_DESTROY()
END_MESSAGE_MAP()

// CTradeCppView 생성/소멸

CTradeCppView::CTradeCppView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CTradeCppView::~CTradeCppView()
{
}

BOOL CTradeCppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CTradeCppView 그리기

void CTradeCppView::OnDraw(CDC* pDC)
{
	CTradeCppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	//CPaintDC dc( this );
	//dc.SetBkMode( TRANSPARENT );
	CFont* pOldFont = (CFont*)pDC->SelectObject(&labelFont);
	pDC->DrawText("트레이딩 전략 리스트", CRect( 10, 20, 500, 50 ), DT_TOP | DT_LEFT );
	pDC->SelectObject(pOldFont);
}

void CTradeCppView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTradeCppView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTradeCppView 진단

#ifdef _DEBUG
void CTradeCppView::AssertValid() const
{
	CView::AssertValid();
}

void CTradeCppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTradeCppDoc* CTradeCppView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTradeCppDoc)));
	return (CTradeCppDoc*)m_pDocument;
}
#endif //_DEBUG


// CTradeCppView 메시지 처리기


int CTradeCppView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	
	listFont.CreateFont(
	14,                        // nHeight
	0,                         // nWidth
	0,                         // nEscapement
	0,                         // nOrientation
	FW_NORMAL,                 // nWeight
	FALSE,                     // bItalic
	FALSE,                     // bUnderline
	0,                         // cStrikeOut
	HANGUL_CHARSET,              // nCharSet
	OUT_DEFAULT_PRECIS,        // nOutPrecision
	CLIP_DEFAULT_PRECIS,       // nClipPrecision
	DEFAULT_QUALITY,           // nQuality
	DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
	_T("Gulim"));

	labelFont.CreateFont(
	18,                        // nHeight
	0,                         // nWidth
	0,                         // nEscapement
	0,                         // nOrientation
	FW_BOLD,			       // nWeight
	FALSE,                     // bItalic
	FALSE,                     // bUnderline
	0,                         // cStrikeOut
	HANGUL_CHARSET,              // nCharSet
	OUT_DEFAULT_PRECIS,        // nOutPrecision
	CLIP_DEFAULT_PRECIS,       // nClipPrecision
	DEFAULT_QUALITY,           // nQuality
	DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
	_T("Gulim"));

	m_list.Create(WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT, CRect(10, 60, 700, 350), this, IDC_LIST);
	// 리스트 초기화 
	m_list.DeleteAllItems();

	// 리스트 스타일 설정
	m_list.SetExtendedStyle(LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT);

	// 타이틀 삽입
	m_list.InsertColumn(0, _T("전략명"), LVCFMT_LEFT, 140, -1);
	m_list.InsertColumn(1, _T("상태"), LVCFMT_CENTER, 159, -1);
	m_list.InsertColumn(2, _T("수익"), LVCFMT_CENTER, 109, -1);
	m_list.InsertColumn(3, _T("포지션"), LVCFMT_CENTER, 109, -1);
	m_list.InsertColumn(4, _T("알림"), LVCFMT_CENTER, 109, -1);


	m_list.SetFont(&listFont, TRUE);

	InitStrategy();

	return 0;
}


// 작성한 전략들은 이곳에 추가하여 주세요.
void CTradeCppView::InitStrategy()
{
	InsertStrategy(new CGoldenCrossStrategy);
	InsertStrategy(new CDataWriteStrategy);
}


void CTradeCppView::OnItemchangedList2(NMHDR* pNMHDR, LRESULT* pResult) 
{
    NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

    if ((pNMListView->uChanged & LVIF_STATE) 
        && (pNMListView->uNewState & LVNI_SELECTED))
    {
		CStrategyBase* pStrategy = (CStrategyBase*)m_list.GetItemData(pNMListView->iItem);
		((CMainFrame*)AfxGetMainWnd())->OnStrategySelected(pStrategy);
    }
}

void CTradeCppView::InsertStrategy(CStrategyBase* pStrategy)
{
	int itemCount = m_list.GetItemCount();
	m_list.InsertItem(itemCount, pStrategy->GetStrategyName());
	m_list.SetItem(itemCount, 1, LVIF_TEXT, "", 0, 0, 0, NULL );
	m_list.SetItemData(itemCount, (DWORD_PTR)pStrategy);

	pStrategy->Create();
	strategies.push_back(pStrategy);
}

void CTradeCppView::OnDestroy()
{
	CView::OnDestroy();

	for (size_t i=0; i < strategies.size(); i++)
	{
		CStrategyBase* p = strategies.at(i);
		delete p;
	}
}


void CTradeCppView::OnStart()
{
	for (int i = 0; i < strategies.size(); i++)
	{
		CStrategyBase* pStrategy = strategies.at(i);
		pStrategy->OnStart();
	}
}

void CTradeCppView::OnStop()
{
	for (int i = 0; i < strategies.size(); i++)
	{
		CStrategyBase* pStrategy = strategies.at(i);
		pStrategy->OnStop();
	}
}