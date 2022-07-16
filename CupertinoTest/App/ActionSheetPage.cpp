#include "ActionSheetPage.h"

ActionSheetPage::ActionSheetPage(e3::Element* pParent)
	: ActionSheetPageBase(pParent)
{
	mShowButton->SetOnClickCallback([this](e3::MouseEvent*){
		mActionSheet->Show();
	});
}
