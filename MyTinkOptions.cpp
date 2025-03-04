#include "MyTinkOptions.h"

MyTinkOptions::MyTinkOptions( wxWindow* parent )
:
TinkOptions( parent )
{
    // dev-note: Options Notebook pages should be defined in wxFB so we don't need to do it at runtime in here
}

wxString MyTinkOptions::GetValue(const wxString &key)
{
    wxString returnValue = wxEmptyString;
    if (key == "SettingMode")
    {
        returnValue = m_OPTSettingMode->GetStringSelection();
    }
    else
    {
        std::cout << "Unhandled key: '" << key << "' in MyTinkOptions::GetValue" << std::endl;
    }
    return returnValue;
}
