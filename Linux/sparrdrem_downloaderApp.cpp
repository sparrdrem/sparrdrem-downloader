/***************************************************************
 * Name:      sparrdrem_downloaderApp.cpp
 * Purpose:   Code for Application Class
 * Author:    SparrDrem ()
 * Created:   2020-07-20
 * Copyright: SparrDrem (https://sparrdrem.github.io/)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "sparrdrem_downloaderApp.h"

//(*AppHeaders
#include "sparrdrem_downloaderMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(sparrdrem_downloaderApp);

bool sparrdrem_downloaderApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	sparrdrem_downloaderFrame* Frame = new sparrdrem_downloaderFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
        