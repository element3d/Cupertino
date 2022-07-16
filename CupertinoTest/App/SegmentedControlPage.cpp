#include "SegmentedControlPage.h"

SegmentedControlPage::SegmentedControlPage(e3::Element* pParent)
	: SegmentedControlPageBase(pParent)
{
	mControl->SetOnChangeCallback([this](int index, CuSegmentedControlOption* pOption){
		mText->SetText(pOption->GetTitle());
	});
}
