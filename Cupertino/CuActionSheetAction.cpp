#include "CuActionSheetAction.h"

CuActionSheetAction::CuActionSheetAction(e3::Element* pParent)
	: CuActionSheetActionBase(pParent)
{

}

void CuActionSheetAction::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void CuActionSheetAction::SetDefault(bool def)
{
	mIsDefault = def;
	if (def)
	{
		SetBorderRadius(e3::Dim("10dp"));
		SetMargin("10dp");
		SetBackgroundColor(glm::vec4(255));
		mTitle->SetFontStyle(e3::EFontStyle::Bold);
	}
}
