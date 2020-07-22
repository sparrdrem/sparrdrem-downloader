/***************************************************************
 * Name:      sparrdrem_downloaderMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    SparrDrem ()
 * Created:   2020-07-20
 * Copyright: SparrDrem (https://sparrdrem.github.io/)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "sparrdrem_downloaderMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(sparrdrem_downloaderFrame)
#include <wx/string.h>
#include <wx/intl.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(sparrdrem_downloaderFrame)
const long sparrdrem_downloaderFrame::ID_STATICTEXT1 = wxNewId();
const long sparrdrem_downloaderFrame::ID_PROJECTCOMBOBOX = wxNewId();
const long sparrdrem_downloaderFrame::ID_STATICTEXT2 = wxNewId();
const long sparrdrem_downloaderFrame::ID_VERSIONCOMBOBOX = wxNewId();
const long sparrdrem_downloaderFrame::ID_STATICTEXT3 = wxNewId();
const long sparrdrem_downloaderFrame::ID_CHOICE1 = wxNewId();
const long sparrdrem_downloaderFrame::ID_STATICTEXT4 = wxNewId();
const long sparrdrem_downloaderFrame::ID_CHOICE2 = wxNewId();
const long sparrdrem_downloaderFrame::ID_BUTTON2 = wxNewId();
const long sparrdrem_downloaderFrame::ID_BUTTON1 = wxNewId();
const long sparrdrem_downloaderFrame::ID_PANEL1 = wxNewId();
const long sparrdrem_downloaderFrame::ID_MENUITEM1 = wxNewId();
const long sparrdrem_downloaderFrame::idMenuAbout = wxNewId();
//*)

BEGIN_EVENT_TABLE(sparrdrem_downloaderFrame,wxFrame)
    //(*EventTable(sparrdrem_downloaderFrame)
    //*)
END_EVENT_TABLE()

sparrdrem_downloaderFrame::sparrdrem_downloaderFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(sparrdrem_downloaderFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxFlexGridSizer* FlexGridSizer1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("SparrDrem Downloader"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(444,218));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("/usr/share/sparrdrem-downloader/sparrdrem-downloader.ico"))));
    	SetIcon(FrameIcon);
    }
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(64,64), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Project:"), wxDefaultPosition, wxSize(131,17), 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    projectComboBox = new wxChoice(Panel1, ID_PROJECTCOMBOBOX, wxDefaultPosition, wxSize(287,31), 0, 0, 0, wxDefaultValidator, _T("ID_PROJECTCOMBOBOX"));
    projectComboBox->Append(_("casmOS (-= Pre-release =-)"));
    projectComboBox->Append(_("CD-OSK (-= Pre-release =-)"));
    projectComboBox->Append(_("Commodore OS Vision II"));
    projectComboBox->Append(_("DremDOS (-= Pre-release =-)"));
    projectComboBox->Append(_("DremOS"));
    projectComboBox->Append(_("DTools"));
    projectComboBox->Append(_("GBAUnix (-= Pre-release =-)"));
    projectComboBox->Append(_("Gencode (-= Pre-release =-)"));
    projectComboBox->Append(_("Gossamer Launcher (-= Pre-release =-)"));
    projectComboBox->Append(_("HOSTNAME"));
    projectComboBox->Append(_("LALO (-= Archived =-)"));
    projectComboBox->Append(_("OTN"));
    projectComboBox->Append(_("Sam&Yoe Group: The Video Game"));
    projectComboBox->Append(_("SparrOS (-= Pre-release =-)"));
    projectComboBox->Append(_("UPTIME (-= Pre-release =-)"));
    projectComboBox->Append(_("Windows 9 Downloader"));
    projectComboBox->Append(_("Yoe\'s Cheat Database (-= Pre-release =-)"));
    FlexGridSizer1->Add(projectComboBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Version:"), wxDefaultPosition, wxSize(131,17), 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    versionComboBox = new wxChoice(Panel1, ID_VERSIONCOMBOBOX, wxDefaultPosition, wxSize(287,31), 0, 0, 0, wxDefaultValidator, _T("ID_VERSIONCOMBOBOX"));
    versionComboBox->Disable();
    FlexGridSizer1->Add(versionComboBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Architecture Type:"), wxDefaultPosition, wxSize(131,17), 0, _T("ID_STATICTEXT3"));
    FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice1 = new wxChoice(Panel1, ID_CHOICE1, wxDefaultPosition, wxSize(287,31), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    FlexGridSizer1->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Language:"), wxDefaultPosition, wxSize(131,17), 0, _T("ID_STATICTEXT4"));
    FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice2 = new wxChoice(Panel1, ID_CHOICE2, wxDefaultPosition, wxSize(287,31), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    FlexGridSizer1->Add(Choice2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("&Download"), wxDefaultPosition, wxSize(131,29), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("&Manage Files"), wxDefaultPosition, wxSize(287,29), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(Panel1);
    FlexGridSizer1->SetSizeHints(Panel1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("E&xit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("&About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    Center();

    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&sparrdrem_downloaderFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&sparrdrem_downloaderFrame::OnAbout);
    //*)
}

sparrdrem_downloaderFrame::~sparrdrem_downloaderFrame()
{
    //(*Destroy(sparrdrem_downloaderFrame)
    //*)
}

void sparrdrem_downloaderFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void sparrdrem_downloaderFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
