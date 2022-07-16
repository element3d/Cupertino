#include "TabBarPage.h"

TabBarPage::TabBarPage(e3::Element* pParent)
	: TabBarPageBase(pParent)
{
	mTabBar->SetOnChangeCallback([this](int index, CuTabBarItem* pItem){
		mText->SetText(pItem->GetTitle());
	});
}
