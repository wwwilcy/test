// CLOGIN.cpp: 实现文件
//

#include "pch.h"
#include "DMtest.h"
#include "CLOGIN.h"
#include "afxdialogex.h"


// CLOGIN 对话框

IMPLEMENT_DYNAMIC(CLOGIN, CDialog)

CLOGIN::CLOGIN(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CLOGIN, pParent)
	, m_user(_T(""))
	, m_password(_T(""))
{

}

CLOGIN::~CLOGIN()
{
}

void CLOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_user);
	DDX_Text(pDX, IDC_EDIT5, m_password);
}


BEGIN_MESSAGE_MAP(CLOGIN, CDialog)
	ON_BN_CLICKED(IDOK, &CLOGIN::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CLOGIN::OnBnClickedCancel)
END_MESSAGE_MAP()


// CLOGIN 消息处理程序


void CLOGIN::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CWnd* pWnd = NULL;
	// 验证用户名、密码是否正确
	if (this->m_user != "test")
	{
		MessageBox(_T("用户名错误！","提示",NULL));
		m_user = "";
		m_password = "";				//弹窗后清空已填信息
		pWnd = GetDlgItem(IDC_STATIC); // 获取IDC_USER的控件指针
		pWnd->SetFocus(); // 设置焦点
		UpdateData(false);
	}
	else if (this->m_password != "1234")
	{
		MessageBox(_T("密码错误！", "提示", NULL));
		m_user = "";
		m_password = "";				//弹窗后清空已填信息
		pWnd = GetDlgItem(IDC_STATIC);
		pWnd->SetFocus();
		UpdateData(false);
	}
	else
	{
		CDialog::OnOK();
	}
}

void CLOGIN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();				//退出当前窗口
}
