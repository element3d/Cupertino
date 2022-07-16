#include "ButtonsPageBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

ButtonsPageBase::ButtonsPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetStopEvents(1);
                CuNavigationBar* pCustomView1 = new CuNavigationBar();
        AddElement(pCustomView1);
        pCustomView1->SetTitle(_s(Buttons));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetOrientation((e3::EOrientation)1);
                CuButton* pCustomView2 = new CuButton();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetMarginTop("20dp");
        pCustomView2->SetTitle(_s(Filled));
                CuButton* pCustomView3 = new CuButton();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetMarginTop("20dp");
        pCustomView3->SetType(ECuButtonType::Tinted);
        pCustomView3->SetTitle(_s(Tinted));
                CuButton* pCustomView4 = new CuButton();
        pElement1->AddElement(pCustomView4);
        pCustomView4->SetMarginTop("20dp");
        pCustomView4->SetType(ECuButtonType::Gray);
        pCustomView4->SetTitle(_s(Gray));
                CuButton* pCustomView5 = new CuButton();
        pElement1->AddElement(pCustomView5);
        pCustomView5->SetType(ECuButtonType::Plain);
        pCustomView5->SetMarginTop("20dp");
        pCustomView5->SetTitle(_s(Plain));

}
