
#ifndef __ActionSheetPageBase_H__
#define __ActionSheetPageBase_H__

#include <e3/ViewFactory.h>
#include <CuNavigationBar.h>
#include <CuButton.h>
#include <CuActionSheet.h>
#include <CuActionSheetAction.h>


class ActionSheetPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    ActionSheetPageBase(e3::Element* pParent = nullptr);

 
protected:
	CuButton* mShowButton = nullptr;
CuActionSheet* mActionSheet = nullptr;


};

#endif // __ActionSheetPageBase_H__

