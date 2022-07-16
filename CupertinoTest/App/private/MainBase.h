
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <MainMenuItem.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	e3::FontIcon* mIcon = nullptr;
e3::Text* mTime = nullptr;
MainMenuItem* mAlerts = nullptr;
MainMenuItem* mButtons = nullptr;
MainMenuItem* mActionSheet = nullptr;
MainMenuItem* mSegControl = nullptr;
MainMenuItem* mSlider = nullptr;
MainMenuItem* mSwitch = nullptr;
MainMenuItem* mTabBar = nullptr;
MainMenuItem* mTextField = nullptr;


};

#endif // __MainBase_H__

