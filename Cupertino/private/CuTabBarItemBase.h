
#ifndef __CuTabBarItemBase_H__
#define __CuTabBarItemBase_H__

#include <e3/ViewFactory.h>


class CuTabBarItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuTabBarItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::FontIcon* mIcon = nullptr;
e3::Text* mTitle = nullptr;


};

#endif // __CuTabBarItemBase_H__

