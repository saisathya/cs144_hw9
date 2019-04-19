/***************************************************************
 * Name:      cs144_hw9App.cpp
 * Purpose:   Code for Application Class
 * Author:    Sai Sathyanantha Rajandiran (saisathyanantha@gmail.com)
 * Created:   2019-04-17
 * Copyright: Sai Sathyanantha Rajandiran (www.sathya-rajan.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "cs144_hw9App.h"
#include "cs144_hw9Main.h"

IMPLEMENT_APP(cs144_hw9App);

bool cs144_hw9App::OnInit()
{
    cs144_hw9Frame* frame = new cs144_hw9Frame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
