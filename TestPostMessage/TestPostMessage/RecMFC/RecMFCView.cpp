
// RecMFCView.cpp : CRecMFCView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "RecMFC.h"
#endif

#include "RecMFCDoc.h"
#include "RecMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRecMFCView

IMPLEMENT_DYNCREATE(CRecMFCView, CView)

BEGIN_MESSAGE_MAP(CRecMFCView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecMFCView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CRecMFCView ����/����

CRecMFCView::CRecMFCView()
{
	// TODO: �ڴ˴���ӹ������

}

CRecMFCView::~CRecMFCView()
{
}

BOOL CRecMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CRecMFCView ����

void CRecMFCView::OnDraw(CDC* /*pDC*/)
{
	CRecMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CRecMFCView ��ӡ


void CRecMFCView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CRecMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CRecMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CRecMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CRecMFCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CRecMFCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CRecMFCView ���

#ifdef _DEBUG
void CRecMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CRecMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRecMFCDoc* CRecMFCView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRecMFCDoc)));
	return (CRecMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CRecMFCView ��Ϣ�������
