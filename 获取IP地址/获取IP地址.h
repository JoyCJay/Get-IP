
// ��ȡIP��ַ.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C��ȡIP��ַApp: 
// �йش����ʵ�֣������ ��ȡIP��ַ.cpp
//

class C��ȡIP��ַApp : public CWinApp
{
public:
	C��ȡIP��ַApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C��ȡIP��ַApp theApp;