// CParaseting.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CParaseting.h"
#include "afxdialogex.h"


// CParaseting 对话框

IMPLEMENT_DYNAMIC(CParaseting, CDialog)

CParaseting::CParaseting(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CParaseting, pParent)
{

}

CParaseting::~CParaseting()
{
}

void CParaseting::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CParaseting, CDialog)
END_MESSAGE_MAP()


// CParaseting 消息处理程序
