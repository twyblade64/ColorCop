// htmlcop.h : main header file for the HTMLCOP application
//

#if !defined(AFX_HTMLCOP_H__EC2A34E4_4FAA_11D3_81A0_A79013DBA62A__INCLUDED_)
#define AFX_HTMLCOP_H__EC2A34E4_4FAA_11D3_81A0_A79013DBA62A__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif


#include "resource.h"		// main symbols
#include "htmlcopDlg.h"	// Added by ClassView

/////////////////////////////////////////////////////////////////////////////
// CHtmlcopApp:
// See htmlcop.cpp for the implementation of this class
//

class CHtmlcopApp : public CWinApp
{
public:
	CHtmlcopDlg dlg;
	CHtmlcopApp();
	~CHtmlcopApp();


protected:
	void CHtmlcopApp::CloseApplication();
	void CHtmlcopApp::LoadDefaultSettings();
	CString CHtmlcopApp::GetTempFolder();
	BOOL CHtmlcopApp::GetShellFolderPath(char * pShellFolder, char * pShellPath);
	void CHtmlcopApp::ClipOrCenterWindowToMonitor(HWND hwnd, UINT flags);

	// multi mon
	void CHtmlcopApp::ClipOrCenterRectToMonitor(LPRECT prc, UINT flags);

	bool InstanceRunning();
    HANDLE m_hMutex;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHtmlcopApp)
	public:
	virtual BOOL InitInstance();
	virtual BOOL InitApplication();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHtmlcopApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HTMLCOP_H__EC2A34E4_4FAA_11D3_81A0_A79013DBA62A__INCLUDED_)
