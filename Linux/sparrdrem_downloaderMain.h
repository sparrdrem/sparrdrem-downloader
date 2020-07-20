/***************************************************************
 * Name:      sparrdrem_downloaderMain.h
 * Purpose:   Defines Application Frame
 * Author:    SparrDrem ()
 * Created:   2020-07-20
 * Copyright: SparrDrem (https://sparrdrem.github.io/)
 * License:
 **************************************************************/

#ifndef SPARRDREM_DOWNLOADERMAIN_H
#define SPARRDREM_DOWNLOADERMAIN_H

//(*Headers(sparrdrem_downloaderFrame)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/choice.h>
//*)

class sparrdrem_downloaderFrame: public wxFrame
{
    public:

        sparrdrem_downloaderFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~sparrdrem_downloaderFrame();

    private:

        //(*Handlers(sparrdrem_downloaderFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(sparrdrem_downloaderFrame)
        static const long ID_STATICTEXT1;
        static const long ID_PROJECTCOMBOBOX;
        static const long ID_STATICTEXT2;
        static const long ID_VERSIONCOMBOBOX;
        static const long ID_STATICTEXT3;
        static const long ID_CHOICE1;
        static const long ID_STATICTEXT4;
        static const long ID_CHOICE2;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        static const long ID_PANEL1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        //*)

        //(*Declarations(sparrdrem_downloaderFrame)
        wxPanel* Panel1;
        wxChoice* versionComboBox;
        wxChoice* projectComboBox;
        wxButton* Button1;
        wxButton* Button2;
        wxChoice* Choice2;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxChoice* Choice1;
        wxStaticText* StaticText4;
        wxStaticText* StaticText2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SPARRDREM_DOWNLOADERMAIN_H
