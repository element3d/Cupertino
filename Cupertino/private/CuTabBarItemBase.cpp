#include "CuTabBarItemBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuTabBarItemBase::CuTabBarItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetHeight("100%");
        this->SetOrientation((e3::EOrientation)1);
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetFont(_s(CupertinoTest/icons.ttf));
        mIcon->SetCharcode(59396);
        mIcon->SetHeight("40%");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(glm::vec4(0.000000, 122.000000, 255.000000, 255.000000));
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetMarginTop("4dp");
        mTitle->SetTextColor(glm::vec4(0.000000, 122.000000, 255.000000, 255.000000));
        mTitle->SetFontSize("16dp");

}
