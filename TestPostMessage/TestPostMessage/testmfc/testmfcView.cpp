
// testmfcView.cpp : CtestmfcView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CtestmfcView 构造/析构

CtestmfcView::CtestmfcView()
{
	// TODO: 在此处添加构造代码

}

CtestmfcView::~CtestmfcView()
{
}

BOOL CtestmfcView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CtestmfcView 绘制

void CtestmfcView::OnDraw(CDC* /*pDC*/)
{
	CtestmfcDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CtestmfcView 打印

BOOL CtestmfcView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CtestmfcView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CtestmfcView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CtestmfcView 诊断

#ifdef _DEBUG
void CtestmfcView::AssertValid() const
{
	CView::AssertValid();
}

void CtestmfcView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestmfcDoc* CtestmfcView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestmfcDoc)));
	return (CtestmfcDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestmfcView 消息处理程序
