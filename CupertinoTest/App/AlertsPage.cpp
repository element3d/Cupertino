#include "AlertsPage.h"

AlertsPage::AlertsPage(e3::Element* pParent)
	: AlertsPageBase(pParent)
{
	mShowButton->SetOnClickCallback([this](e3::MouseEvent*){
		mAlert->Show();
	});
}
