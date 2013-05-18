
// ReceiveMFCView.cpp : CReceiveMFCView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ReceiveMFC.h"
#endif

#include "ReceiveMFCDoc.h"
#include "ReceiveMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CReceiveMFCView

IMPLEMENT_DYNCREATE(CReceiveMFCView, CView)

BEGIN_MESSAGE_MAP(CReceiveMFCView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CReceiveMFCView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CReceiveMFCView ����/����

CReceiveMFCView::CReceiveMFCView()
{
	// TODO: �ڴ˴���ӹ������

}

CReceiveMFCView::~CReceiveMFCView()
{
}

BOOL CReceiveMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CReceiveMFCView ����

void CReceiveMFCView::OnDraw(CDC* /*pDC*/)
{
	CReceiveMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CReceiveMFCView ��ӡ


void CReceiveMFCView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CReceiveMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CReceiveMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CReceiveMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CReceiveMFCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CReceiveMFCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CReceiveMFCView ���

#ifdef _DEBUG
void CReceiveMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CReceiveMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CReceiveMFCDoc* CReceiveMFCView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CReceiveMFCDoc)));
	return (CReceiveMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CReceiveMFCView ��Ϣ�������
