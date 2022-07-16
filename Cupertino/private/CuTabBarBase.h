
#ifndef __CuTabBarBase_H__
#define __CuTabBarBase_H__

#include <e3/ViewFactory.h>


class CuTabBarBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuTabBarBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContent = nullptr;


};

#endif // __CuTabBarBase_H__

