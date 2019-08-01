#pragma once


// CLOGIN 对话框

class CLOGIN : public CDialog
{
	DECLARE_DYNAMIC(CLOGIN)

public:
	CLOGIN(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CLOGIN();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CLOGIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	CString m_user;
	CString m_password;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeEdit5();
};
