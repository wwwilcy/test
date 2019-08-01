// CPARTICAL.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CPARTICAL.h"
#include "afxdialogex.h"


// CPARTICAL 对话框

IMPLEMENT_DYNAMIC(CPARTICAL, CDialog)

CPARTICAL::CPARTICAL(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CPARTICAL, pParent)
{

}

CPARTICAL::~CPARTICAL()
{
}

void CPARTICAL::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPARTICAL, CDialog)
END_MESSAGE_MAP()


// CPARTICAL 消息处理程序
