
#ifndef CuTabBarItem_H_
#define CuTabBarItem_H_

#include "private/CuTabBarItemBase.h"

class E3_EXPORT CuTabBarItem : public CuTabBarItemBase
{
public:
	CuTabBarItem(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	void SetIcon(const std::string& charcode);
	std::string GetTitle();
	void Select();
	void UnSelect();

	virtual bool OnClick(e3::MouseEvent* pEvent) override;
};

#endif // CuTabBarItem_H_

