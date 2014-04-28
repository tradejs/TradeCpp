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

#include "TradeCppDoc.h"
#include "TradeCppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTradeCppView

IMPLEMENT_DYNCREATE(CTradeCppView, CView)

BEGIN_MESSAGE_MAP(CTradeCppView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
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

void CTradeCppView::OnDraw(CDC* /*pDC*/)
{
	CTradeCppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
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
