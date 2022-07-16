#include "CuButton.h"

CuButton::CuButton(e3::Element* pParent)
	: CuButtonBase(pParent)
{
	mType = ECuButtonType::Filled;
}

void CuButton::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void CuButton::SetType(ECuButtonType type)
{
	mType = type;
	mTitle->SetTextColor(glm::vec4(255));
	switch (mType) {
		case ECuButtonType::Filled:
			SetBackgroundColor(glm::vec4(0, 122, 255, 255));
			return;
		case ECuButtonType::Tinted:
			SetBackgroundColor(glm::vec4(0, 122, 255, 0.15 * 255));
			return;
		case ECuButtonType::Gray:
			SetBackgroundColor(glm::vec4(225, 226, 226, 255));
			return;
		case ECuButtonType::Plain:
		{
			SetBackgroundColor(glm::vec4(0));
			mTitle->SetTextColor(glm::vec4(0, 122, 255, 255));
			return;
		}
	}
}

ECuButtonType CuButton::GetType()
{
	return mType;
}

bool CuButton::OnMouseDown(e3::MouseEvent* e)
{
	CuButtonBase::OnMouseDown(e);
	SetOpacity(0.5);
	return true;
}

bool CuButton::OnMouseUp(e3::MouseEvent* e)
{
	CuButtonBase::OnMouseUp(e);
	ALOGE("ONMOUSE UP**************");
	SetOpacity(1);
	return true;
}