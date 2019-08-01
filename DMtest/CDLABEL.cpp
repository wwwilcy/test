// CDLABEL.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CDLABEL.h"
#include "afxdialogex.h"


// CDLABEL 对话框

IMPLEMENT_DYNAMIC(CDLABEL, CDialog)

CDLABEL::CDLABEL(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CDLABEL, pParent)
{

}

CDLABEL::~CDLABEL()
{
}

void CDLABEL::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDLABEL, CDialog)
END_MESSAGE_MAP()


// CDLABEL 消息处理程序
