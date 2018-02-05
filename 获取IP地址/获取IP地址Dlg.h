
// 获取IP地址Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// C获取IP地址Dlg 对话框
class C获取IP地址Dlg : public CDialogEx
{
// 构造
public:
	C获取IP地址Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedOk();
	CString m_STR_Name;
	CString m_STR_IP;
	afx_msg void OnBnClickedButton1();
};
