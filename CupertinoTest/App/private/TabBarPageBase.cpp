#include "TabBarPageBase.h"

#include <e3/ViewFactory.h>
#include "./CupertinoTestValues.h"

TabBarPageBase::TabBarPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetStopEvents(1);
                CuNavigationBar* pCustomView1 = new CuNavigationBar();
        AddElement(pCustomView1);
        pCustomView1->SetTitle(_s(Tab bar));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetScaling((e3::EScaling)1);
        mText = e3::ViewFactory::CreateText();
        pElement2->AddElement(mText);
        mText->SetFontSize("20dp");
        mText->SetText("Home");
        mTabBar = new CuTabBar();
        pElement1->AddElement(mTabBar);
                CuTabBarItem* pCustomView2 = new CuTabBarItem();
        mTabBar->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(Home));
        pCustomView2->SetIcon(_s(E806));
                CuTabBarItem* pCustomView3 = new CuTabBarItem();
        mTabBar->AddElement(pCustomView3);
        pCustomView3->SetTitle(_s(Chat));
        pCustomView3->SetIcon(_s(E807));
                CuTabBarItem* pCustomView4 = new CuTabBarItem();
        mTabBar->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(Profile));
        pCustomView4->SetIcon(_s(E808));

}
