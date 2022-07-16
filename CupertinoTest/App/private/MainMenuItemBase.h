
#ifndef __MainMenuItemBase_H__
#define __MainMenuItemBase_H__

#include <e3/ViewFactory.h>


class MainMenuItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainMenuItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBody = nullptr;
e3::FontIcon* mIcon = nullptr;
e3::Text* mTitle = nullptr;


};

#endif // __MainMenuItemBase_H__

