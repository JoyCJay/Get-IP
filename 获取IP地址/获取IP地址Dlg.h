
// ��ȡIP��ַDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C��ȡIP��ַDlg �Ի���
class C��ȡIP��ַDlg : public CDialogEx
{
// ����
public:
	C��ȡIP��ַDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
