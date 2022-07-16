
#ifndef __CuActionSheetBase_H__
#define __CuActionSheetBase_H__

#include <e3/ViewFactory.h>


class CuActionSheetBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CuActionSheetBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContent = nullptr;
e3::Element* mTitleCont = nullptr;
e3::Text* mTitle = nullptr;
e3::Text* mDesc = nullptr;


};

#endif // __CuActionSheetBase_H__

