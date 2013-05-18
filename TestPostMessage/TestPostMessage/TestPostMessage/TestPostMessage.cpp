// TestPostMessage.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "TestPostMessage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 唯一的应用程序对象

#define WM_CONTROLPRINT WM_USER+1001

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	HMODULE hModule = ::GetModuleHandle(NULL);

	if (hModule != NULL)
	{
		// 初始化 MFC 并在失败时显示错误
		if (!AfxWinInit(hModule, NULL, ::GetCommandLine(), 0))
		{
			// TODO: 更改错误代码以符合您的需要
			_tprintf(_T("错误: MFC 初始化失败\n"));
			nRetCode = 1;
		}
		else
		{
			// TODO: 在此处为应用程序的行为编写代码。
		}
	}
	else
	{
		// TODO: 更改错误代码以符合您的需要
		_tprintf(_T("错误: GetModuleHandle 失败\n"));
		nRetCode = 1;
	}

	char buf;

	//CWnd *pWnd=CWnd::FindWindow(NULL,_T("testmfc"));
	while (std::cin>>buf)
	{
		//SendNotifyMessage(HWND_BROADCAST,WM_CONTROLPRINT,NULL,NULL);
		UINT lMYMESSAGE = RegisterWindowMessage(L"PrintFile");
		PostMessage(HWND_BROADCAST,lMYMESSAGE,NULL,NULL);
	}	
	

	return nRetCode;
}
