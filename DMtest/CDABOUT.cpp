// CDABOUT.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CDABOUT.h"
#include "afxdialogex.h"


// CDABOUT 对话框

IMPLEMENT_DYNAMIC(CDABOUT, CDialog)

CDABOUT::CDABOUT(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DABOUT, pParent)
{

}

CDABOUT::~CDABOUT()
{
}

void CDABOUT::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDABOUT, CDialog)
	ON_BN_CLICKED(IDOK3, &CDABOUT::OnBnClickedOk3)
END_MESSAGE_MAP()


// CDABOUT 消息处理程序


void CDABOUT::OnBnClickedOk3()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnOK();
}
