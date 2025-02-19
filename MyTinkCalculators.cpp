#include "MyTinkCalculators.h"
#include "cabji/sanitizeInput.h"

MyTinkCalculators::MyTinkCalculators(wxWindow *parent)
	: TinkCalculators(parent)
{
	// Bind event handlers
	m_ABVFluidA->Bind(wxEVT_TEXT, &MyTinkCalculators::OnCombinationCalcTextChanged, this);
	m_ABVFluidB->Bind(wxEVT_TEXT, &MyTinkCalculators::OnCombinationCalcTextChanged, this);
	m_VolumeFluidA->Bind(wxEVT_TEXT, &MyTinkCalculators::OnCombinationCalcTextChanged, this);
	m_VolumeFluidB->Bind(wxEVT_TEXT, &MyTinkCalculators::OnCombinationCalcTextChanged, this);
}

void MyTinkCalculators::OnCombinationCalcTextChanged(wxCommandEvent &event)
{
	// on textChange, can we identify which widget changed and only sanitize that value?
	// if a value is not valid, we should not calculate the total volume and total ABV

	wxTextCtrl *tripperWidget = dynamic_cast<wxTextCtrl *>(event.GetEventObject());
	if (!tripperWidget)
	{
		std::cout << "We don't know which widget tripped this event handler, so returning." << std::endl;
		return;
	}

	wxString value = tripperWidget->GetValue();
	double sanitizedValue;
	if (!value.ToDouble(&sanitizedValue))
	{
		std::cout << "Invalid value detected, so returning." << std::endl;
		return;
	}

	int id = tripperWidget->GetId();
	switch (id)
	{
	case ID_CALC_INPUT_FAVOL:
		std::cout << "ABV Fluid A changed." << std::endl;
		break;
	case ID_CALC_INPUT_FBVOL:
		std::cout << "ABV Fluid B changed." << std::endl;
		break;
	case ID_CALC_INPUT_FAABV:
		std::cout << "Volume Fluid A changed." << std::endl;
		break;
	case ID_CALC_INPUT_FBABV:
		std::cout << "Volume Fluid B changed." << std::endl;
		break;
	default:
		std::cout << "Unhandled widget tripped this event handler." << std::endl;
		break;
	}

	double abvA = 0.0;
	double abvB = 0.0;
	double volumeA = 0.0;
	double volumeB = 0.0;
	double totalVolume = 0.0;
	double totalABV = 0.0;
	wxString sTotalABV = wxEmptyString;
	wxString sTotalVol = wxEmptyString;

	abvA = wxAtof(m_ABVFluidA->GetValue());
	abvB = wxAtof(m_ABVFluidB->GetValue());
	volumeA = wxAtof(m_VolumeFluidA->GetValue());
	volumeB = wxAtof(m_VolumeFluidB->GetValue());

	totalVolume = volumeA + volumeB;
	totalABV = ((abvA * volumeA) + (abvB * volumeB)) / totalVolume;
	sTotalABV = wxString::Format(wxT("%.2f"), totalABV);
	sTotalVol = wxString::Format(wxT("%.2f"), totalVolume);

	m_FluidCombinationResult->SetLabelText("=\nResult: " + sTotalVol + " @ " + sTotalABV + " ABV");
	Layout();
}
