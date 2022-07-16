
#ifndef __CuAlertDialogBase_H__
#define __CuAlertDialogBase_H__

#include <e3/ViewFactory.h>


class CuAlertDialogBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuAlertDialogBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContent = nullptr;


};

#endif // __CuAlertDialogBase_H__

