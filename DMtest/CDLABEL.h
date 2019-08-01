#pragma once


// CDLABEL 对话框

class CDLABEL : public CDialog
{
	DECLARE_DYNAMIC(CDLABEL)

public:
	CDLABEL(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDLABEL();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CDLABEL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
