#include "CuTabBar.h"
#include "CuTabBarItem.h"
CuTabBar::CuTabBar(e3::Element* pParent)
	: CuTabBarBase(pParent)
{

}

void CuTabBar::AddElement(e3::Element* pElement)
{
	mContent->AddElement(pElement);
	CuTabBarItem* pItem = (CuTabBarItem*)pElement;
	if (mContent->GetNumChildren() == 1) pItem->Select();

	int index = mContent->GetNumChildren() - 1;
	pItem->SetOnClickCallback([this, index, pItem](e3::MouseEvent*){
		pItem->Select();
		for (int i = 0; i < mContent->GetNumChildren(); ++i)
		{
			if (mContent->GetChildren()[i] != pItem) {
				CuTabBarItem* pChild = (CuTabBarItem*)mContent->GetChildren()[i];
				pChild->UnSelect();
			}
		}
		if (mOnChangeCallback) mOnChangeCallback(index, pItem);
	});
}

void CuTabBar::SetOnChangeCallback(OnChangeCallback c)
{
	mOnChangeCallback = c;
}
