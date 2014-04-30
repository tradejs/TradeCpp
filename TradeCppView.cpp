// �� MFC ���� �ҽ� �ڵ�� MFC Microsoft Office Fluent ����� �������̽�("Fluent UI")�� 
// ����ϴ� ����� ���� �ָ�, MFC C++ ���̺귯�� ����Ʈ��� ���Ե� 
// Microsoft Foundation Classes Reference �� ���� ���� ������ ���� 
// �߰������� �����Ǵ� �����Դϴ�.  
// Fluent UI�� ����, ��� �Ǵ� �����ϴ� �� ���� ��� ����� ������ �����˴ϴ�.  
// Fluent UI ���̼��� ���α׷��� ���� �ڼ��� ������ 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// TradeCppView.cpp : CTradeCppView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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

// CTradeCppView ����/�Ҹ�

CTradeCppView::CTradeCppView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTradeCppView::~CTradeCppView()
{
}

BOOL CTradeCppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTradeCppView �׸���

void CTradeCppView::OnDraw(CDC* pDC)
{
	CTradeCppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	//CPaintDC dc( this );
	//dc.SetBkMode( TRANSPARENT );
	CFont* pOldFont = (CFont*)pDC->SelectObject(&labelFont);
	pDC->DrawText("Ʈ���̵� ���� ����Ʈ", CRect( 10, 20, 500, 50 ), DT_TOP | DT_LEFT );
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


// CTradeCppView ����

#ifdef _DEBUG
void CTradeCppView::AssertValid() const
{
	CView::AssertValid();
}

void CTradeCppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTradeCppDoc* CTradeCppView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTradeCppDoc)));
	return (CTradeCppDoc*)m_pDocument;
}
#endif //_DEBUG


// CTradeCppView �޽��� ó����


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
	// ����Ʈ �ʱ�ȭ 
	m_list.DeleteAllItems();

	// ����Ʈ ��Ÿ�� ����
	m_list.SetExtendedStyle(LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT);

	// Ÿ��Ʋ ����
	m_list.InsertColumn(0, _T("������"), LVCFMT_LEFT, 140, -1);
	m_list.InsertColumn(1, _T("����"), LVCFMT_CENTER, 159, -1);
	m_list.InsertColumn(2, _T("����"), LVCFMT_CENTER, 109, -1);
	m_list.InsertColumn(3, _T("������"), LVCFMT_CENTER, 109, -1);
	m_list.InsertColumn(4, _T("�˸�"), LVCFMT_CENTER, 109, -1);


	m_list.SetFont(&listFont, TRUE);

	InitStrategy();

	return 0;
}


// �ۼ��� �������� �̰��� �߰��Ͽ� �ּ���.
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