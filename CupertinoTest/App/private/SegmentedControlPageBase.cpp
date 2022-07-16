#include "SegmentedControlPageBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

SegmentedControlPageBase::SegmentedControlPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetStopEvents(1);
                CuNavigationBar* pCustomView1 = new CuNavigationBar();
        AddElement(pCustomView1);
        pCustomView1->SetTitle(_s(Segmented Control));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetOrientation((e3::EOrientation)1);
        pElement1->SetAlignItemsVer((e3::EAlignment)0);
        mControl = new CuSegmentedControl();
        pElement1->AddElement(mControl);
        mControl->SetMarginTop("20dp");
                CuSegmentedControlOption* pCustomView2 = new CuSegmentedControlOption();
        mControl->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(INDIGO));
                CuSegmentedControlOption* pCustomView3 = new CuSegmentedControlOption();
        mControl->AddElement(pCustomView3);
        pCustomView3->SetTitle(_s(TEAL));
                CuSegmentedControlOption* pCustomView4 = new CuSegmentedControlOption();
        mControl->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(CYAN));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetScaling((e3::EScaling)1);
        mText = e3::ViewFactory::CreateText();
        pElement2->AddElement(mText);
        mText->SetText("INDIGO");
        mText->SetFontSize("20dp");

}
