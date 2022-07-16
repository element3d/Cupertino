#include "CuAlertDialogBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuAlertDialogBase::CuAlertDialogBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetPositionType((e3::EPositionType)1);
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
        this->SetVisibility((e3::EVisibility)2);
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContent);
        mContent->SetWidth("320dp");
        mContent->SetHeight("140dp");
        mContent->SetBorderRadius(glm::vec4(e3::Dim("20dp")));
        mContent->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContent->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetBorderRadius(glm::vec4(e3::Dim("20dp"), e3::Dim("20dp"), 0, 0));
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetBackgroundColor(glm::vec4(242.000000, 242.000000, 242.000000, 255.000000));
        pElement1->SetMarginBottom("2dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement1->AddElement(pText1);
        pText1->SetFontSize("20dp");
        pText1->SetTextColor(glm::vec4(0, 0, 0, 255));
        pText1->SetText("Discard draft?");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContent->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("50dp");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("100%");
        pElement3->SetMarginRight("2dp");
        pElement3->SetScaling((e3::EScaling)1);
        pElement3->SetBackgroundColor(glm::vec4(242.000000, 242.000000, 242.000000, 255.000000));
        pElement3->SetBorderRadius(glm::vec4(0, 0, 0, e3::Dim("20dp")));
        e3::Text* pText2 = e3::ViewFactory::CreateText();
        pElement3->AddElement(pText2);
        pText2->SetFontSize("18dp");
        pText2->SetTextColor(glm::vec4(255, 59, 48, 255));
        pText2->SetText("Discard");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement4);
        pElement4->SetWidth("100%");
        pElement4->SetHeight("100%");
        pElement4->SetScaling((e3::EScaling)1);
        pElement4->SetBackgroundColor(glm::vec4(242.000000, 242.000000, 242.000000, 255.000000));
        pElement4->SetBorderRadius(glm::vec4(0, 0, e3::Dim("20dp"), 0));
        e3::Text* pText3 = e3::ViewFactory::CreateText();
        pElement4->AddElement(pText3);
        pText3->SetFontSize("18dp");
        pText3->SetTextColor(glm::vec4(0, 122, 255, 255));
        pText3->SetText("Cancel");

}
