
#ifndef __CuSwitchBase_H__
#define __CuSwitchBase_H__

#include <e3/ViewFactory.h>


class CuSwitchBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuSwitchBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mCircle = nullptr;


};

#endif // __CuSwitchBase_H__

