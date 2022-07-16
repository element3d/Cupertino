#include "CuTabBarItem.h"

CuTabBarItem::CuTabBarItem(e3::Element* pParent)
	: CuTabBarItemBase(pParent)
{
	UnSelect();
}

void CuTabBarItem::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void CuTabBarItem::SetIcon(const std::string& charcode)
{

	mIcon->SetCharcode(charcode);
}

std::string CuTabBarItem::GetTitle()
{
	return mTitle->GetText();
}

void CuTabBarItem::Select()
{
	mIcon->SetColor(glm::vec4(0, 122, 255, 255));
	mTitle->SetTextColor(glm::vec4(0, 122, 255, 255));
}

void CuTabBarItem::UnSelect()
{
	mIcon->SetColor(glm::vec4(174, 174, 178, 255));
	mTitle->SetTextColor(glm::vec4(174, 174, 178, 255));
}

bool CuTabBarItem::OnClick(e3::MouseEvent* pEvent)
{
	pEvent->Stop();
	Select();
	return CuTabBarItemBase::OnClick(pEvent);
}