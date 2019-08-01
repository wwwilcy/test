#pragma once


// CDABOUT 对话框

class CDABOUT : public CDialog
{
	DECLARE_DYNAMIC(CDABOUT)

public:
	CDABOUT(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDABOUT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DABOUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk3();
};
