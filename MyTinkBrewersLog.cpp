#include "MyTinkBrewersLog.h"

MyTinkBrewersLog::MyTinkBrewersLog( wxWindow* parent )
:
TinkBrewersLog( parent )
{
    m_createDB->Bind(wxEVT_BUTTON, &MyTinkBrewersLog::OnCreateDB, this);
}

void MyTinkBrewersLog::OnCreateDB(wxCommandEvent &event)
{
    std::cout << "Creating a new SQLite database." << std::endl;
    m_db = new SQLite::Database("brewersLog.db3", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);

}
