#include "CuButtonBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuButtonBase::CuButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("60dp");
        this->SetBorderRadius(glm::vec4(e3::Dim("10dp")));
        this->SetBackgroundColor(glm::vec4(0, 122, 255, 255));
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("20dp");
        mTitle->SetTextColor(glm::vec4(255));

}
