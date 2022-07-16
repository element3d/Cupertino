
#ifndef MainMenuItem_H_
#define MainMenuItem_H_

#include "private/MainMenuItemBase.h"

class E3_EXPORT MainMenuItem : public MainMenuItemBase
{
public:
	MainMenuItem(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	void SetIcon(std::string charcode);
};

#endif // MainMenuItem_H_

