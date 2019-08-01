#pragma once


// CParaseting 对话框

class CParaseting : public CDialog
{
	DECLARE_DYNAMIC(CParaseting)

public:
	CParaseting(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CParaseting();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CParaseting };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
