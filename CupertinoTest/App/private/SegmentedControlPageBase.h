
#ifndef __SegmentedControlPageBase_H__
#define __SegmentedControlPageBase_H__

#include <e3/ViewFactory.h>
#include <CuNavigationBar.h>
#include <CuSegmentedControl.h>
#include <CuSegmentedControlOption.h>


class SegmentedControlPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    SegmentedControlPageBase(e3::Element* pParent = nullptr);

 
protected:
	CuSegmentedControl* mControl = nullptr;
e3::Text* mText = nullptr;


};

#endif // __SegmentedControlPageBase_H__

