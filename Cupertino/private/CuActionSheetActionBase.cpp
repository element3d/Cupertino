#include "CuActionSheetActionBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuActionSheetActionBase::CuActionSheetActionBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("50dp");
        this->SetMargin("1dp");
        this->SetBackgroundColor(glm::vec4(245.000000, 245.000000, 245.000000, 187.000000));
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("20dp");
        mTitle->SetTextColor(glm::vec4(0.000000, 122.000000, 255.000000, 255.000000));

}
