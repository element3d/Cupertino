
#ifndef CuTabBar_H_
#define CuTabBar_H_

#include "private/CuTabBarBase.h"
#include "CuTabBarItem.h"

class E3_EXPORT CuTabBar : public CuTabBarBase
{
	typedef std::function<void(int, CuTabBarItem*)> OnChangeCallback;
public:
	CuTabBar(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback c);
	virtual void AddElement(e3::Element* pElement) override;

private:
	OnChangeCallback mOnChangeCallback;
};

#endif // CuTabBar_H_

