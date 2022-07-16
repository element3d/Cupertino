
#ifndef __AlertsPageBase_H__
#define __AlertsPageBase_H__

#include <e3/ViewFactory.h>
#include <CuNavigationBar.h>
#include <CuButton.h>
#include <CuAlertDialog.h>


class AlertsPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    AlertsPageBase(e3::Element* pParent = nullptr);

 
protected:
	CuButton* mShowButton = nullptr;
CuAlertDialog* mAlert = nullptr;


};

#endif // __AlertsPageBase_H__

