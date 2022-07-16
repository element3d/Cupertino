
#ifndef __CuSegmentedControlOptionBase_H__
#define __CuSegmentedControlOptionBase_H__

#include <e3/ViewFactory.h>


class CuSegmentedControlOptionBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuSegmentedControlOptionBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;


};

#endif // __CuSegmentedControlOptionBase_H__

