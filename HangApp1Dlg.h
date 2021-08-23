
// HangApp1Dlg.h : header file
//

#pragma once


// CHangApp1Dlg dialog
class CHangApp1Dlg : public CDialogEx
{
// Construction
public:
	CHangApp1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HANGAPP1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnHangClicked();
	CSemaphore m_Lock;
	afx_msg void OnLockClicked();
};
