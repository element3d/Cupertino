
#ifndef __CuSegmentedControlBase_H__
#define __CuSegmentedControlBase_H__

#include <e3/ViewFactory.h>


class CuSegmentedControlBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuSegmentedControlBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mSelect = nullptr;


};

#endif // __CuSegmentedControlBase_H__

