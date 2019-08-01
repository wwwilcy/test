#pragma once


// CPARTICAL 对话框

class CPARTICAL : public CDialog
{
	DECLARE_DYNAMIC(CPARTICAL)

public:
	CPARTICAL(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPARTICAL();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CPATICAL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
