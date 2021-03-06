// -*- C++ -*- generated by wxGlade 0.6.3

#include "DialogSettings.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogSettings::DialogSettings(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: DialogSettings::DialogSettings
    notebook_settings = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
    notebook_settings_pane_general = new wxPanel(notebook_settings, wxID_ANY);
    sizer_command_staticbox = new wxStaticBox(notebook_settings_pane_general, -1, _("Command"));
    sizer_service_staticbox = new wxStaticBox(notebook_settings_pane_general, -1, _("Service"));
    text_ctrl_service = new wxTextCtrl(notebook_settings_pane_general, wxID_ANY, wxEmptyString);
    text_ctrl_command = new wxTextCtrl(notebook_settings_pane_general, wxID_ANY, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogSettings::set_properties()
{
    // begin wxGlade: DialogSettings::set_properties
    SetTitle(_("Preferences"));
    text_ctrl_service->SetToolTip(_("The service string to look for. E.g. \"_rfb._tcp.local.\" for VNC."));
    text_ctrl_command->SetToolTip(_("The command to be executed. %a will be replaced with the address found, %p with the port, respectively."));
    // end wxGlade
}


void DialogSettings::do_layout()
{
    // begin wxGlade: DialogSettings::do_layout
    wxBoxSizer* sizer_top = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_settings = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* sizer_command = new wxStaticBoxSizer(sizer_command_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* sizer_service = new wxStaticBoxSizer(sizer_service_staticbox, wxHORIZONTAL);
    sizer_service->Add(text_ctrl_service, 1, wxALL|wxEXPAND, 3);
    sizer_settings->Add(sizer_service, 1, wxALL|wxEXPAND, 3);
    sizer_command->Add(text_ctrl_command, 1, wxALL|wxEXPAND, 3);
    sizer_settings->Add(sizer_command, 1, wxALL|wxEXPAND, 3);
    notebook_settings_pane_general->SetSizer(sizer_settings);
    notebook_settings->AddPage(notebook_settings_pane_general, _("General"));
    sizer_top->Add(notebook_settings, 1, wxEXPAND, 0);
    SetSizer(sizer_top);
    sizer_top->Fit(this);
    Layout();
    // end wxGlade
}

