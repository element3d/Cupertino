
#ifndef __CuNavigationBarBase_H__
#define __CuNavigationBarBase_H__

#include <e3/ViewFactory.h>


class CuNavigationBarBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuNavigationBarBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBack = nullptr;
e3::Element* mBackIcon = nullptr;
e3::FontIcon* mIcon = nullptr;
e3::Text* mLeftTitle = nullptr;
e3::Text* mTitle = nullptr;
e3::Text* mRightTitle = nullptr;


};

#endif // __CuNavigationBarBase_H__

