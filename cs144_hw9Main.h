/***************************************************************
 * Name:      cs144_hw9Main.h
 * Purpose:   Defines Application Frame
 * Author:    Sai Sathyanantha Rajandiran (saisathyanantha@gmail.com)
 * Created:   2019-04-17
 * Copyright: Sai Sathyanantha Rajandiran (www.sathya-rajan.com)
 * License:
 **************************************************************/

#ifndef CS144_HW9MAIN_H
#define CS144_HW9MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "cs144_hw9App.h"

class cs144_hw9Frame: public wxFrame
{
    public:
        cs144_hw9Frame(wxFrame *frame, const wxString& title);
        ~cs144_hw9Frame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // CS144_HW9MAIN_H
