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

	bool result = ValidateValue(tripperWidget->GetValue());
	if (!result)
	{
		std::cout << "Invalid value detected, so returning." << std::endl;
		return;
	}

	double abvA = 0.0;
	double abvB = 0.0;
	double volumeA = 0.0;
	double volumeB = 0.0;
	double totalVolume = 0.0;
	double totalABV = 0.0;

	abvA = wxAtof(m_ABVFluidA->GetValue());
	abvB = wxAtof(m_ABVFluidB->GetValue());
	volumeA = wxAtof(m_VolumeFluidA->GetValue());
	volumeB = wxAtof(m_VolumeFluidB->GetValue());

	totalVolume = volumeA + volumeB;
	totalABV = ((abvA * volumeA) + (abvB * volumeB)) / totalVolume;

	m_TotalVolume->SetValue(wxString::Format(wxT("%.2f"), totalVolume));
	m_TotalABV->SetValue(wxString::Format(wxT("%.2f"), totalABV));
}
