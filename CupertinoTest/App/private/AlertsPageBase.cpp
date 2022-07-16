#include "AlertsPageBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

AlertsPageBase::AlertsPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetStopEvents(1);
                CuNavigationBar* pCustomView1 = new CuNavigationBar();
        AddElement(pCustomView1);
        pCustomView1->SetTitle(_s(Alerts));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetOrientation((e3::EOrientation)1);
        mShowButton = new CuButton();
        pElement1->AddElement(mShowButton);
        mShowButton->SetMarginTop("20dp");
        mShowButton->SetTitle(_s(Show Alert));
        mAlert = new CuAlertDialog();
        AddElement(mAlert);

}
