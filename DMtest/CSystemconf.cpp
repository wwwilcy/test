// CSystemconf.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CSystemconf.h"
#include "afxdialogex.h"


// CSystemconf 对话框

IMPLEMENT_DYNAMIC(CSystemconf, CDialog)

CSystemconf::CSystemconf(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CSystemconf, pParent)
{

}

CSystemconf::~CSystemconf()
{
}

void CSystemconf::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSystemconf, CDialog)
END_MESSAGE_MAP()


// CSystemconf 消息处理程序
