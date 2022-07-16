#include "CuNavigationBarBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuNavigationBarBase::CuNavigationBarBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("50dp");
        this->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetBackgroundColor(glm::vec4(249.000000, 249.000000, 249.000000, 255.000000));
        pElement1->SetAlignItemsHor((e3::EAlignment)3);
    mBack = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mBack);
        mBack->SetWidth("100%");
        mBack->SetScaling((e3::EScaling)1);
        mBack->SetAlignItemsHor((e3::EAlignment)0);
    mBackIcon = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBack->AddElement(mBackIcon);
        mBackIcon->SetWidth("20dp");
        mBackIcon->SetHeight("20dp");
        mBackIcon->SetMarginLeft("15dp");
        mBackIcon->SetMarginRight("5dp");
        mIcon = e3::ViewFactory::CreateFontIcon();
        mBackIcon->AddElement(mIcon);
        mIcon->SetWidth("20dp");
        mIcon->SetHeight("20dp");
        mIcon->SetFont(_s(Cupertino/icons.ttf));
        mIcon->SetCharcode(59395);
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(glm::vec4(0.000000, 122.000000, 255.000000, 255.000000));
        mLeftTitle = e3::ViewFactory::CreateText();
        mBack->AddElement(mLeftTitle);
        mLeftTitle->SetText("Back");
        mLeftTitle->SetFontSize("20dp");
        mLeftTitle->SetTextColor(glm::vec4(0.000000, 122.000000, 255.000000, 255.000000));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetScaling((e3::EScaling)1);
        mTitle = e3::ViewFactory::CreateText();
        pElement2->AddElement(mTitle);
        mTitle->SetText("Title");
        mTitle->SetFontSize("20dp");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetScaling((e3::EScaling)1);
        mRightTitle = e3::ViewFactory::CreateText();
        pElement3->AddElement(mRightTitle);
        mRightTitle->SetVisibility((e3::EVisibility)2);
        mRightTitle->SetText("Right Title");
        mRightTitle->SetFontSize("20dp");
        mRightTitle->SetTextColor(glm::vec4(0.000000, 122.000000, 255.000000, 255.000000));
        mRightTitle->SetMarginRight("10dp");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement4);
        pElement4->SetWidth("100%");
        pElement4->SetHeight("1dp");
        pElement4->SetBackgroundColor(glm::vec4(151.000000, 151.000000, 151.000000, 255.000000));

}
