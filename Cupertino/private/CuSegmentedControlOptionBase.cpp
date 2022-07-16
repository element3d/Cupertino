#include "CuSegmentedControlOptionBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuSegmentedControlOptionBase::CuSegmentedControlOptionBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetScaling((e3::EScaling)1);
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("14dp");
        mTitle->SetTextColor(glm::vec4(0, 0, 0 ,255));

}
