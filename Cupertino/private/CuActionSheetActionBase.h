
#ifndef __CuActionSheetActionBase_H__
#define __CuActionSheetActionBase_H__

#include <e3/ViewFactory.h>


class CuActionSheetActionBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuActionSheetActionBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;


};

#endif // __CuActionSheetActionBase_H__

