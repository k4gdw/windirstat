// DeleteWarningDlg.cpp - implementation of CDeleteWarningDlg
//
// WinDirStat - Directory Statistics
// Copyright (C) 2003-2005 Bernhard Seifert
// Copyright (C) 2004-2006 Oliver Schneider (assarbad.net)
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// Author(s): - bseifert -> bseifert@users.sourceforge.net, bseifert@daccord.net
//            - assarbad -> http://assarbad.net/en/contact
//
// $Header$

#include "stdafx.h"
#include "windirstat.h"
#include "DeleteWarningDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNAMIC(CDeleteWarningDlg, CDialog)

CDeleteWarningDlg::CDeleteWarningDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDeleteWarningDlg::IDD, pParent)
	, m_fileName(strEmpty)
	, m_dontShowAgain(false)
{
}

CDeleteWarningDlg::~CDeleteWarningDlg()
{
}

void CDeleteWarningDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_DONTSHOWAGAIN, m_dontShowAgain);
	DDX_Text(pDX, IDC_FILENAME, m_fileName);
}


BEGIN_MESSAGE_MAP(CDeleteWarningDlg, CDialog)
	ON_BN_CLICKED(IDNO, OnBnClickedNo)
	ON_BN_CLICKED(IDYES, OnBnClickedYes)
END_MESSAGE_MAP()


void CDeleteWarningDlg::OnBnClickedNo()
{
	UpdateData();
	EndDialog(IDNO);
}

void CDeleteWarningDlg::OnBnClickedYes()
{
	UpdateData();
	EndDialog(IDYES);
}

// $Log$
// Revision 1.8  2006/07/04 23:37:39  assarbad
// - Added my email address in the header, adjusted "Author" -> "Author(s)"
// - Added CVS Log keyword to those files not having it
// - Added the files which I forgot during last commit
//
// Revision 1.7  2006/07/04 22:49:20  assarbad
// - Replaced CVS keyword "Date" by "Header" in the file headers
//
// Revision 1.6  2006/07/04 20:45:22  assarbad
// - See changelog for the changes of todays previous check-ins as well as this one!
//
// Revision 1.5  2004/11/13 08:17:06  bseifert
// Remove blanks in Unicode Configuration names.
//
// Revision 1.4  2004/11/12 22:14:16  bseifert
// Eliminated CLR_NONE. Minor corrections.
//
// Revision 1.3  2004/11/05 16:53:06  assarbad
// Added Date and History tag where appropriate.
//
