#include "MainMenuItemBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

MainMenuItemBase::MainMenuItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetMarginBottom("10dp");
    mBody = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBody);
        mBody->SetWidth("80dp");
        mBody->SetAspectRatio(1.000000);
        mBody->SetBorderRadius(glm::vec4(e3::Dim("20dp")));
        mBody->SetBackgroundColor(glm::vec4(255));
        mIcon = e3::ViewFactory::CreateFontIcon();
        mBody->AddElement(mIcon);
        mIcon->SetFont(_s(CupertinoTest/icons.ttf));
        mIcon->SetCharcode(62160);
        mIcon->SetWidth("40dp");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(glm::vec4(0, 122, 255, 255));
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetWidth("100dp");
        mTitle->SetMaxNumLines(2);
        mTitle->SetMarginTop("5dp");
        mTitle->SetText("Buttons");
        mTitle->SetFontSize("16dp");
        mTitle->SetTextColor(glm::vec4(255));

}
