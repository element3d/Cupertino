#include "CuSegmentedControlOption.h"

CuSegmentedControlOption::CuSegmentedControlOption(e3::Element* pParent)
	: CuSegmentedControlOptionBase(pParent)
{

}

void CuSegmentedControlOption::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

std::string CuSegmentedControlOption::GetTitle()
{
	return mTitle->GetText();
}