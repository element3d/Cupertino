#include "MainMenuItem.h"

MainMenuItem::MainMenuItem(e3::Element* pParent)
	: MainMenuItemBase(pParent)
{
	mBody->SetBackgroundLinearGradient(0, glm::vec4(255), glm::vec4(200, 200, 200, 255));
}

void MainMenuItem::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void MainMenuItem::SetIcon(std::string charcode)
{
	mIcon->SetCharcode(charcode);
}
