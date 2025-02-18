#include <wx/wx.h>
#include <wx/numformatter.h>
#include <iostream>

bool ValidateValue(wxString &value)
{
	// sanitize value to ensure it can be converted to double type
	// We need to deal with the locale-specific decimal separator and thousands separator so use wxNumberFormatter for that
	double num;
	wxString sanitizedInput;

	// Get the locale-specific decimal and thousand separators
	wxChar localeDecimal = wxNumberFormatter::GetDecimalSeparator();
	wxChar *localeThousand;
	wxNumberFormatter::GetThousandsSeparatorIfUsed(localeThousand);

	// Remove all non-numeric characters except the decimal separator
	for (wxChar ch : value)
	{
		if (wxIsdigit(ch) || ch == localeDecimal)
		{
			sanitizedInput += ch;
		}
	}

	// Remove the locale-specific thousand separator
	sanitizedInput.Replace(wxString(localeThousand), wxEmptyString);

	// Allow empty cell values
	if (sanitizedInput.IsEmpty())
	{
		value = sanitizedInput; // Assign the empty value back to the reference
		return true;
	}

	// Convert the sanitized string to double
	bool isValid = sanitizedInput.ToDouble(&num);
	if (isValid)
	{
		value = sanitizedInput; // Assign the sanitized value back to the reference
	}
	std::cout << "Sanitized value: " << sanitizedInput.ToStdString() << ", isValid: " << isValid << std::endl;
	return isValid;
}
