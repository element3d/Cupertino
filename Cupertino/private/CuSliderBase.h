
#ifndef __CuSliderBase_H__
#define __CuSliderBase_H__

#include <e3/ViewFactory.h>


class CuSliderBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuSliderBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mValue = nullptr;
e3::Element* mDivisions = nullptr;
e3::Element* mCircle = nullptr;


};

#endif // __CuSliderBase_H__

