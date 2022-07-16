
#ifndef __CuTextFieldBase_H__
#define __CuTextFieldBase_H__

#include <e3/ViewFactory.h>


class CuTextFieldBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuTextFieldBase(e3::Element* pParent = nullptr);

 
protected:
	e3::FontIcon* mIcon = nullptr;


};

#endif // __CuTextFieldBase_H__

