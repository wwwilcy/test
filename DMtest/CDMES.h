#pragma once


// CDMES 对话框

class CDMES : public CDialog
{
	DECLARE_DYNAMIC(CDMES)

public:
	CDMES(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDMES();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CDMES };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
