
// testmfcView.h : CtestmfcView ��Ľӿ�
//

#pragma once


class CtestmfcView : public CView
{
protected: // �������л�����
	CtestmfcView();
	DECLARE_DYNCREATE(CtestmfcView)

// ����
public:
	CtestmfcDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CtestmfcView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // testmfcView.cpp �еĵ��԰汾
inline CtestmfcDoc* CtestmfcView::GetDocument() const
   { return reinterpret_cast<CtestmfcDoc*>(m_pDocument); }
#endif

