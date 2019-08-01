#pragma once


// CSystemconf 对话框

class CSystemconf : public CDialog
{
	DECLARE_DYNAMIC(CSystemconf)

public:
	CSystemconf(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSystemconf();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CSystemconf };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
