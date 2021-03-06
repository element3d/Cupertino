#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBackgroundColor(glm::vec4(255));
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetBackgroundImage("CupertinoTest/images/Wallpaper.png");
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetOrientation((e3::EOrientation)1);
        mIcon = e3::ViewFactory::CreateFontIcon();
        pElement1->AddElement(mIcon);
        mIcon->SetFont(_s(CupertinoTest/icons.ttf));
        mIcon->SetCharcode(59396);
        mIcon->SetWidth("40dp");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(glm::vec4(255));
        mTime = e3::ViewFactory::CreateText();
        pElement1->AddElement(mTime);
        mTime->SetMarginTop("10dp");
        mTime->SetText("9:41");
        mTime->SetFontSize("60dp");
        mTime->SetTextColor(glm::vec4(255));
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement1->AddElement(pText1);
        pText1->SetText("Friday, July 15");
        pText1->SetFontSize("18dp");
        pText1->SetTextColor(glm::vec4(255));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetMarginTop("50dp");
        pElement2->SetWidth("100%");
        pElement2->SetAlignItemsHor((e3::EAlignment)4);
        mAlerts = new MainMenuItem();
        pElement2->AddElement(mAlerts);
        mAlerts->SetTitle(_s(Alerts));
        mButtons = new MainMenuItem();
        pElement2->AddElement(mButtons);
        mButtons->SetIcon(_s(F2D1));
        mButtons->SetTitle(_s(Buttons));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetAlignItemsHor((e3::EAlignment)4);
        mActionSheet = new MainMenuItem();
        pElement3->AddElement(mActionSheet);
        mActionSheet->SetIcon(_s(E800));
        mActionSheet->SetTitle(_s(Action Sheet));
        mSegControl = new MainMenuItem();
        pElement3->AddElement(mSegControl);
        mSegControl->SetIcon(_s(E801));
        mSegControl->SetTitle(_s(Segmented Control));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement4);
        pElement4->SetWidth("100%");
        pElement4->SetAlignItemsHor((e3::EAlignment)4);
        mSlider = new MainMenuItem();
        pElement4->AddElement(mSlider);
        mSlider->SetIcon(_s(F1DE));
        mSlider->SetTitle(_s(Slider));
        mSwitch = new MainMenuItem();
        pElement4->AddElement(mSwitch);
        mSwitch->SetIcon(_s(F205));
        mSwitch->SetTitle(_s(Switch));
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement5);
        pElement5->SetWidth("100%");
        pElement5->SetAlignItemsHor((e3::EAlignment)4);
        mTabBar = new MainMenuItem();
        pElement5->AddElement(mTabBar);
        mTabBar->SetIcon(_s(F2D0));
        mTabBar->SetTitle(_s(Tab Bar));
        mTextField = new MainMenuItem();
        pElement5->AddElement(mTextField);
        mTextField->SetIcon(_s(F2D1));
        mTextField->SetTitle(_s(Text Field));
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement6);
        pElement6->SetMarginTop("50dp");
        pElement6->SetWidth("80%");
        pElement6->SetAlignItemsHor((e3::EAlignment)3);
    e3::Element* pElement7 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement6->AddElement(pElement7);
        pElement7->SetWidth("50dp");
        pElement7->SetAspectRatio(1.000000);
        pElement7->SetBackgroundColor(glm::vec4(245, 245, 245, 0.15 * 255));
        pElement7->SetShapeType((e3::EShapeType)1);
        e3::FontIcon* pFontIcon1 = e3::ViewFactory::CreateFontIcon();
        pElement7->AddElement(pFontIcon1);
        pFontIcon1->SetFont(_s(CupertinoTest/icons.ttf));
        pFontIcon1->SetCharcode(59397);
        pFontIcon1->SetWidth("30dp");
        pFontIcon1->SetAspectRatio(1.000000);
        pFontIcon1->SetColor(glm::vec4(255));
    e3::Element* pElement8 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement6->AddElement(pElement8);
        pElement8->SetWidth("50dp");
        pElement8->SetAspectRatio(1.000000);
        pElement8->SetBackgroundColor(glm::vec4(245, 245, 245, 0.15 * 255));
        pElement8->SetShapeType((e3::EShapeType)1);
        e3::FontIcon* pFontIcon2 = e3::ViewFactory::CreateFontIcon();
        pElement8->AddElement(pFontIcon2);
        pFontIcon2->SetFont(_s(CupertinoTest/icons.ttf));
        pFontIcon2->SetCharcode(59394);
        pFontIcon2->SetWidth("30dp");
        pFontIcon2->SetAspectRatio(1.000000);
        pFontIcon2->SetColor(glm::vec4(255));

}
