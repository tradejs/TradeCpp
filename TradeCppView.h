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

// TradeCppView.h : CTradeCppView Ŭ������ �������̽�
//

#pragma once

class CStrategyBase;
class CTradeCppView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTradeCppView();
	DECLARE_DYNCREATE(CTradeCppView)

// Ư���Դϴ�.
public:
	CTradeCppDoc* GetDocument() const;

	vector<CStrategyBase*> strategies;
	void OnStart();
	void OnStop();

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	CFont labelFont, listFont;
	CListCtrl m_list;
	CStatic m_label;

// �����Դϴ�.
public:
	virtual ~CTradeCppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	void InsertStrategy(CStrategyBase* pStrategy);

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnItemchangedList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDestroy();
	DECLARE_MESSAGE_MAP()

public:
	void InitStrategy();
	
};

#ifndef _DEBUG  // TradeCppView.cpp�� ����� ����
inline CTradeCppDoc* CTradeCppView::GetDocument() const
   { return reinterpret_cast<CTradeCppDoc*>(m_pDocument); }
#endif

