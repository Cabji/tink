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
	m_ABVTarget->Bind(wxEVT_TEXT, &MyTinkCalculators::OnCombinationCalcTextChanged, this);
	m_CalculatorType->Bind(wxEVT_CHOICE, &MyTinkCalculators::OnCalcTypeChanged, this);
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
		tripperWidget->SetBackgroundColour(wxColour(255, 0, 0));
		tripperWidget->SetForegroundColour(wxColour(255, 255, 255));
		return;
	}
	else
	{
		tripperWidget->SetBackgroundColour(wxColour(255, 255, 255));
		tripperWidget->SetForegroundColour(wxColour(0, 0, 0));
	}

	double abvA = 0.0;
	double abvB = 0.0;
	double volumeA = 0.0;
	double volumeB = 0.0;
	double targetABV = 0.0;
	double totalVolume = 0.0;
	double totalABV = 0.0;
	wxString sTotalABV = wxEmptyString;
	wxString sTotalVol = wxEmptyString;

	abvA = wxAtof(m_ABVFluidA->GetValue());
	abvB = wxAtof(m_ABVFluidB->GetValue());
	volumeA = wxAtof(m_VolumeFluidA->GetValue());
	volumeB = wxAtof(m_VolumeFluidB->GetValue());

	if (m_CalculatorType->GetStringSelection() == "Fluid Combination")
	{
		totalVolume = volumeA + volumeB;
		totalABV = ((abvA * volumeA) + (abvB * volumeB)) / totalVolume;
		sTotalABV = wxString::Format(wxT("%.2f"), totalABV);
		sTotalVol = wxString::Format(wxT("%.2f"), totalVolume);

		std::cout << "Total Volume: '" << sTotalVol << "' @ '" << sTotalABV << "' ABV" << std::endl;
		m_FluidCombinationResult->SetLabelText("=\nResult: " + sTotalVol + " @ " + sTotalABV + " ABV");	
	}
	else if (m_CalculatorType->GetStringSelection() == "Target ABV")
	if (abvB <= abvA)
        {
            std::cout << "Impossible to reach the target ABV with the given Fluid B ABV." << std::endl;
            m_FluidCombinationResult->SetLabelText("=\nResult: Impossible to reach the target ABV with the given Fluid B ABV.");
        }
        else
        {
            // Calculate the required volume of Fluid B to get Target ABV with Fluid A @ ABV
            volumeB = (volumeA * (targetABV - abvA)) / (abvB - targetABV);
            totalVolume = volumeA + volumeB;
            sTotalABV = wxString::Format(wxT("%.2f"), targetABV);
            sTotalVol = wxString::Format(wxT("%.2f"), totalVolume);

            std::cout << "Required Volume of Fluid B: '" << volumeB << "' to achieve '" << sTotalVol << "' @ '" << sTotalABV << "' ABV" << std::endl;
            m_FluidCombinationResult->SetLabelText("=\nResult: " + sTotalVol + " @ " + sTotalABV + " ABV\nRequired Volume of Fluid B: " + wxString::Format(wxT("%.2f"), volumeB));
        }
	Layout();
}

void MyTinkCalculators::OnCalcTypeChanged(wxCommandEvent &event)
{
	wxChoice *choice = dynamic_cast<wxChoice *>(event.GetEventObject());
	if (!choice)
	{
		std::cout << "We don't know which widget tripped this event handler, so returning." << std::endl;
		return;
	}

	// de/activate the appropriate calculator widgets
	wxString calcType = choice->GetStringSelection();
	if (calcType == "Fluid Combination")
	{
		m_ABVFluidA->Enable();
		m_ABVFluidB->Enable();
		m_VolumeFluidA->Enable();
		m_VolumeFluidB->Enable();
		m_lblVolFluidB->Enable();

		m_ABVTarget->Disable();
		m_lblABVTarget->Disable();

		m_lblABVFluidA->SetLabelText("Fluid A ABV");
		m_lblABVFluidB->SetLabelText("Fluid B ABV");
		m_lblVolFluidA->SetLabelText("Fluid A Volume");
		m_lblVolFluidB->SetLabelText("+\nFluid B Volume");
	}
	if (calcType == "Target ABV")
	{
		m_VolumeFluidA->Enable();
		m_ABVFluidA->Enable();
		m_ABVFluidB->Enable();
		m_ABVTarget->Enable();
		m_lblABVTarget->Enable();
		
		m_VolumeFluidB->Disable();
		m_VolumeFluidB->SetValue("");
		m_lblVolFluidB->Disable();
		
		m_lblVolFluidA->SetLabelText("Fluid A Volume");
		m_lblABVFluidB->SetLabelText("Fluid B ABV");
		m_lblABVTarget->SetLabelText("Target ABV");
	}
	Layout();
}
