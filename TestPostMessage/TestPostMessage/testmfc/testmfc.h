
// testmfc.h : testmfc Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CtestmfcApp:
// �йش����ʵ�֣������ testmfc.cpp
//

class CtestmfcApp : public CWinAppEx
{
public:
	CtestmfcApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()


};

extern CtestmfcApp theApp;
