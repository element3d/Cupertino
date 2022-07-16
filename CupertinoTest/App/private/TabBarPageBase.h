
#ifndef __TabBarPageBase_H__
#define __TabBarPageBase_H__

#include <e3/ViewFactory.h>
#include <CuNavigationBar.h>
#include <CuTabBar.h>
#include <CuTabBarItem.h>


class TabBarPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TabBarPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mText = nullptr;
CuTabBar* mTabBar = nullptr;


};

#endif // __TabBarPageBase_H__

