// TestPostMessage.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "TestPostMessage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ψһ��Ӧ�ó������

#define WM_CONTROLPRINT WM_USER+1001

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	HMODULE hModule = ::GetModuleHandle(NULL);

	if (hModule != NULL)
	{
		// ��ʼ�� MFC ����ʧ��ʱ��ʾ����
		if (!AfxWinInit(hModule, NULL, ::GetCommandLine(), 0))
		{
			// TODO: ���Ĵ�������Է���������Ҫ
			_tprintf(_T("����: MFC ��ʼ��ʧ��\n"));
			nRetCode = 1;
		}
		else
		{
			// TODO: �ڴ˴�ΪӦ�ó������Ϊ��д���롣
		}
	}
	else
	{
		// TODO: ���Ĵ�������Է���������Ҫ
		_tprintf(_T("����: GetModuleHandle ʧ��\n"));
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
