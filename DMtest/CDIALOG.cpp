// CDIALOG.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CDIALOG.h"
#include "afxdialogex.h"


// CDIALOG 对话框

IMPLEMENT_DYNAMIC(CDIALOG, CDialog)

//CDIALOG::CDIALOG(CWnd* pParent /*=nullptr*/)
//	: CDialog(IDD_CDIALOG, pParent)
//{
//
//}

CDIALOG::~CDIALOG()
{
}

void CDIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDIALOG, CDialog)
END_MESSAGE_MAP()


// CDIALOG 消息处理程序
