
#ifndef __CuButtonBase_H__
#define __CuButtonBase_H__

#include <e3/ViewFactory.h>


class CuButtonBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuButtonBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;


};

#endif // __CuButtonBase_H__

