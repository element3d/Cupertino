#include "CuTextFieldBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuTextFieldBase::CuTextFieldBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("50dp");
        this->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        e3::Input* pInput1 = e3::ViewFactory::CreateInput();
        pElement1->AddElement(pInput1);
        pInput1->SetWidth("100%");
        pInput1->SetHeight("100%");
        pInput1->SetScaling((e3::EScaling)1);
        pInput1->SetFontSize(e3::Dim("16dp"));
        pInput1->SetHint("Placeholder");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("24dp");
        pElement2->SetAspectRatio(1.000000);
        pElement2->SetMarginRight("10dp");
        pElement2->SetBackgroundColor(glm::vec4(142.000000, 142.000000, 147.000000, 255.000000));
        pElement2->SetShapeType((e3::EShapeType)1);
        mIcon = e3::ViewFactory::CreateFontIcon();
        pElement2->AddElement(mIcon);
        mIcon->SetFont(_s(Cupertino/icons.ttf));
        mIcon->SetCharcode(59401);
        mIcon->SetWidth("10dp");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(glm::vec4(255));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("2dp");
        pElement3->SetBackgroundColor(glm::vec4(198.000000, 198.000000, 200.000000, 255.000000));

}
