#include "ActionSheetPageBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

ActionSheetPageBase::ActionSheetPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetStopEvents(1);
                CuNavigationBar* pCustomView1 = new CuNavigationBar();
        AddElement(pCustomView1);
        pCustomView1->SetTitle(_s(Action Sheet));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetOrientation((e3::EOrientation)1);
        mShowButton = new CuButton();
        pElement1->AddElement(mShowButton);
        mShowButton->SetMarginTop("20dp");
        mShowButton->SetTitle(_s(Show Action Sheet));
        mActionSheet = new CuActionSheet();
        AddElement(mActionSheet);
                CuActionSheetAction* pCustomView2 = new CuActionSheetAction();
        mActionSheet->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(Cheesecake));
                CuActionSheetAction* pCustomView3 = new CuActionSheetAction();
        mActionSheet->AddElement(pCustomView3);
        pCustomView3->SetTitle(_s(Tiramisu));
                CuActionSheetAction* pCustomView4 = new CuActionSheetAction();
        mActionSheet->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(Apple Pie));
                CuActionSheetAction* pCustomView5 = new CuActionSheetAction();
        mActionSheet->AddElement(pCustomView5);
        pCustomView5->SetTitle(_s(Cancel));
        pCustomView5->SetDefault(1);

}
