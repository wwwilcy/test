
// DMtestDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "DMtest.h"
#include "DMtestDlg.h"
#include "afxdialogex.h"
#include "Resource.h"
#include "CLOGIN.h"
#include "CPARTICAL.h"
#include "CDMES.h"
#include "CDLABEL.h"
#include "CDABOUT.h"
#include "CParaseting.h"
#include "CSystemconf.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMenu m_Menu;

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32782();
	afx_msg void On32784();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	
	
END_MESSAGE_MAP()


// CDMtestDlg 对话框



CDMtestDlg::CDMtestDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DMTEST_DIALOG, pParent)
	, H(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDMtestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT2, H);
	DDX_Control(pDX, IDC_EDIT2, m_editH);
	DDX_Text(pDX, IDC_EDIT2, H);
	DDX_Control(pDX, IDC_BUTTON1, m_btn);
}

BEGIN_MESSAGE_MAP(CDMtestDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK2, &CDMtestDlg::OnBnClickedOk2)
	ON_BN_CLICKED(IDOK6, &CDMtestDlg::OnBnClickedOk6)
	ON_BN_CLICKED(IDC_BUTTON4, &CDMtestDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDOK8, &CDMtestDlg::OnBnClickedOk8)
	ON_BN_CLICKED(IDOK10, &CDMtestDlg::OnBnClickedOk10)
	ON_BN_CLICKED(IDOK5, &CDMtestDlg::OnBnClickedOk5)
	ON_COMMAND(ID_32783, &CDMtestDlg::On32783)
	ON_COMMAND(ID_32780, &CDMtestDlg::On32780)
	ON_COMMAND(ID_MES_MES32775, &CDMtestDlg::OnMesMes32775)
	ON_COMMAND(ID_32779, &CDMtestDlg::On32779)
	ON_EN_CHANGE(IDC_EDIT2, &CDMtestDlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK7, &CDMtestDlg::OnBnClickedOk7)
	ON_COMMAND(ID_32784, &CDMtestDlg::On32784)
	//ON_BN_CLICKED(IDOK4, &CDMtestDlg::OnBnClickedOk4)
END_MESSAGE_MAP()


// CDMtestDlg 消息处理程序

BOOL CDMtestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CString str_H = _T("22");

	m_Menu.LoadMenu(IDR_MENU1);//标题栏增加
	SetMenu(&m_Menu);	//标题栏增加

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	//开始按钮增加bitmap效果-----2019/7/7
	//HBITMAP hBmp = ::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP1));
	//m_btn.SetBitmap(hBmp);
	//开始按钮增加bitmap效果-----2019/7/7

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CDMtestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CDMtestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CDMtestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void CDMtestDlg::OnBnClickedOk2()
{
	// TODO: 在此添加控件通知处理程序代码
	CLOGIN dlg;
	dlg.DoModal();
}


void CDMtestDlg::OnStnClickedBitmapBackground()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CDMtestDlg::OnBnClickedOk6()
{
	// TODO: 在此添加控件通知处理程序代码
	CPARTICAL dlg;
	dlg.DoModal();
}


void CDMtestDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CDMES dlg;
	dlg.DoModal();
}


void CDMtestDlg::OnBnClickedOk8()
{
	// TODO: 在此添加控件通知处理程序代码
	CString LOGPATH = _T("D:/Projects/DMtest/Config.ini");	//log or 配置 存放地址
	ShellExecute(NULL,_T("open"), LOGPATH, NULL, NULL, SW_SHOWNORMAL);				//打开日志 or 配置 
}


void CDMtestDlg::OnBnClickedOk10()
{
	// TODO: 在此添加控件通知处理程序代码
	//ini文件删除
	DeleteFile (_T("D:/Projects/DMtest/Config.ini"));
	//Sleep(5000);	//延时5s
	//ini文件参数保存
	//VAS
	BOOL Result1 = WritePrivateProfileString(_T("VAS CHECK"), _T("Enable"), _T("1"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result2 = WritePrivateProfileString(_T("VAS CHECK"), _T("H"), _T("22"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result3 = WritePrivateProfileString(_T("VAS CHECK"), _T("V"), _T("16"), _T("D:/Projects/DMtest/Config.ini"));
	//异物检测
	BOOL Result4 = WritePrivateProfileString(_T("PARTICAL CHECK"), _T("Enable"), _T("1"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result5 = WritePrivateProfileString(_T("PARTICAL CHECK"), _T("MIN"), _T("5"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result6 = WritePrivateProfileString(_T("PARTICAL CHECK"), _T("MAX"), _T("5"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result7 = WritePrivateProfileString(_T("PARTICAL CHECK"), _T("NUM"), _T("5"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result8 = WritePrivateProfileString(_T("PARTICAL CHECK"), _T("TH"), _T("5"), _T("D:/Projects/DMtest/Config.ini"));
	//Label坐标位置
	BOOL Result9 = WritePrivateProfileString(_T("Label"), _T("X"), _T("1380"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result10 = WritePrivateProfileString(_T("Label"), _T("Y"), _T("800"), _T("D:/Projects/DMtest/Config.ini"));
	//MES设置
	BOOL Result11 = WritePrivateProfileString(_T("MES"), _T("Enable"), _T("1"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result12 = WritePrivateProfileString(_T("MES"), _T("main"), _T("XXX PCBA"), _T("D:/Projects/DMtest/Config.ini"));
	BOOL Result13 = WritePrivateProfileString(_T("MES"), _T("站点"), _T("1500"), _T("D:/Projects/DMtest/Config.ini"));
}

void CDMtestDlg::OnBnClickedOk5()
{
	// TODO: 在此添加控件通知处理程序代码
	CDLABEL dlg;
	dlg.DoModal();
}



void CDMtestDlg::On32783()
{
	// TODO: 在此添加命令处理程序代码
	CDABOUT dlg;
	dlg.DoModal();
}


void CDMtestDlg::On32780()
{
	// TODO: 在此添加命令处理程序代码
	CLOGIN dlg;
	dlg.DoModal();
}


void CDMtestDlg::On32782()
{
	// TODO: 在此添加命令处理程序代码
	CString LOGPATH = _T("D:/Projects/DMtest/Config.ini");	//log or 配置 存放地址
	ShellExecute(NULL, _T("read"), LOGPATH, NULL, NULL, SW_SHOWNORMAL);				//打开日志 or 配置 
}


void CDMtestDlg::OnMesMes32775()
{
	// TODO: 在此添加命令处理程序代码
	CDMES dlg;
	dlg.DoModal();
}


void CDMtestDlg::On32779()
{
	//// TODO: 在此添加命令处理程序代码
	//CString LOGPATH = _T("D:/Projects/DMtest/Config.ini");	//log or 配置 存放地址
	//ShellExecute(NULL, _T("open"), LOGPATH, NULL, NULL, SW_SHOWNORMAL);				//打开日志 or 配置 
	CParaseting dlg;
	dlg.DoModal();
}


void CDMtestDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	//6.5*********************
	UpdateData(TRUE);
	CString str_H;
	//m_editH.GetWindowText(str_H);
	GetDlgItem(IDC_EDIT2)->SetWindowText(str_H);
	UpdateData(FALSE);
	//6.5*********************
}


void CDMtestDlg::OnBnClickedOk7()
{
	// TODO: 在此添加控件通知处理程序代码
	CString LOGPATH = _T("D:/Projects/DMtest/无标题.bmp");	//地址
	ShellExecute(NULL, _T("open"), LOGPATH, NULL, NULL, SW_SHOWMAXIMIZED);				//打开  
}




void CDMtestDlg::On32784()
{
	// TODO: 在此添加命令处理程序代码
	CSystemconf dlg;
	dlg.DoModal();
}


