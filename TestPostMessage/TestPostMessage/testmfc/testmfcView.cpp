
// testmfcView.cpp : CtestmfcView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "testmfc.h"
#endif

#include "testmfcDoc.h"
#include "testmfcView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestmfcView

IMPLEMENT_DYNCREATE(CtestmfcView, CView)

BEGIN_MESSAGE_MAP(CtestmfcView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CtestmfcView ����/����

CtestmfcView::CtestmfcView()
{
	// TODO: �ڴ˴���ӹ������

}

CtestmfcView::~CtestmfcView()
{
}

BOOL CtestmfcView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CtestmfcView ����

void CtestmfcView::OnDraw(CDC* /*pDC*/)
{
	CtestmfcDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CtestmfcView ��ӡ

BOOL CtestmfcView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CtestmfcView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CtestmfcView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CtestmfcView ���

#ifdef _DEBUG
void CtestmfcView::AssertValid() const
{
	CView::AssertValid();
}

void CtestmfcView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestmfcDoc* CtestmfcView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestmfcDoc)));
	return (CtestmfcDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestmfcView ��Ϣ�������
