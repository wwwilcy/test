#pragma once


// CDIALOG 对话框

class CDIALOG : public CDialog
{
	DECLARE_DYNAMIC(CDIALOG)

public:
	CDIALOG(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDIALOG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
