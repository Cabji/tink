#include "MyApp.h"
#include "TinkMain.h"
// #include <wx/wx.h>
// #include <wx/image.h>
#include <iostream>

#ifdef __WXMSW__
#include <windows.h> // Required for AttachConsole
#endif

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	// Allocate a console for debugging output
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);

	std::cout << "Console allocated for debugging output." << std::endl;
	// data initialization
	TinkMain *frame = new TinkMain(nullptr, wxID_ANY, _("Tink"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE);
	frame->Show(true);

	return true;
}