// CDMES.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CDMES.h"
#include "afxdialogex.h"


// CDMES 对话框

IMPLEMENT_DYNAMIC(CDMES, CDialog)

CDMES::CDMES(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CDMES, pParent)
{

}

CDMES::~CDMES()
{
}

void CDMES::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDMES, CDialog)
	ON_BN_CLICKED(IDCANCEL, &CDMES::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &CDMES::OnBnClickedOk)
END_MESSAGE_MAP()


// CDMES 消息处理程序


void CDMES::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
}


void CDMES::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnOK();
}
