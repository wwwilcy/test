
// DMtestDlg.h: 头文件
//

#pragma once


// CDMtestDlg 对话框
class CDMtestDlg : public CDialogEx
{
// 构造
public:
	CDMtestDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DMTEST_DIALOG };
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
	afx_msg void OnIdrMenu1();
	afx_msg void OnBnClickedOk2();
	afx_msg void OnStnClickedBitmapBackground();
	bool ShowWindows;
	afx_msg void OnBnClickedOk6();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedOk8();
	afx_msg void OnBnClickedOk10();
	afx_msg void OnBnClickedButtonconfig();
	afx_msg void OnBnClickedOk5();
	afx_msg void On32783();
	afx_msg void On32780();
	afx_msg void On32782();
	afx_msg void OnMesMes32775();
	afx_msg void On32779();
	afx_msg void OnEnChangeEdit2();
//	CString H;
	CEdit m_editH;
	CString H;
	afx_msg void OnBnClickedOk7();
	afx_msg void On32784();
	// 增加bitmap效果
	CButton m_btn;
	afx_msg void OnBnClickedOk4();
};
