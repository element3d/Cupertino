#include "CuSwitch.h"

CuSwitch::CuSwitch(e3::Element* pParent)
	: CuSwitchBase(pParent)
{

}

bool CuSwitch::OnClick(e3::MouseEvent* pEvent)
{
	if (!mChecked) Check();
	else Uncheck();

	return CuSwitchBase::OnClick(pEvent);
}

void CuSwitch::Check()
{
	mChecked = true;
	if (mAnimation) return;
	mAnimation = new e3::Animation();
	/*	const MDTheme* pTheme = mTheme ? mTheme : Material::GetTheme();
	switch (pTheme->ColorScheme)
	{
	case EMDColorScheme::Red:
	bgColor = MDColors::Red::Get("200");
	break;
	case EMDColorScheme::DeepPurple:
	{
	bgColor = MDColors::DeepPurple::Get("200");
	break;
	}
	case EMDColorScheme::Grey:
	bgColor = MDColors::Grey::Get("200");
	break;
	default:
	break;
	}*/
	//if (mOnChangeCallback) mOnChangeCallback(true);

	mAnimation->Start(0.2, e3::EAnimation::EaseInOutQuart,[this](float v) {
		e3::Rect2f geo = GetGeometry();
//		mCircle->SetBackgroundColor(glm::mix(glm::vec4(255), *pColor, v));
		mCircle->SetTranslation(glm::vec3(v * (geo.width - mCircle->GetGeometry().width  - 2* e3::Dim("2dp")), 0, 0));
//		glm::vec4 bgColor = glm::mix(MDColors::Red::Get("100"), *pColor, 0.36);
		SetBackgroundColor(glm::mix(glm::vec4(199 ,199, 204, 255), glm::vec4 (52, 199, 89 ,255), v));
	}, [this]() {
		mAnimation = nullptr;
	});
}

void CuSwitch::Uncheck()
{
	mChecked = false;
	if (mAnimation) return;
	mAnimation = new e3::Animation();

	//const MDTheme* pTheme = mTheme ? mTheme : Material::GetTheme();


	/*switch (pTheme->ColorScheme)
	{
	case EMDColorScheme::Red:
	bgColor = MDColors::Red::Get("200");
	break;
	case EMDColorScheme::DeepPurple:
	{
	bgColor = MDColors::DeepPurple::Get("200");
	break;
	}
	case EMDColorScheme::Grey:
	bgColor = MDColors::Grey::Get("200");
	break;
	default:
	break;
	}*/
	//if (mOnChangeCallback) mOnChangeCallback(false);

	mAnimation->Start(0.2, e3::EAnimation::EaseInOutQuart, [this](float v) {
		e3::Rect2f geo = GetGeometry();
		//mCircle->SetBackgroundColor(glm::mix(glm::vec4(255), *pColor, 1 - v));
		mCircle->SetTranslation(glm::vec3((1 - v) * (geo.width - mCircle->GetGeometry().width - 2*e3::Dim("2dp")), 0, 0));

		SetBackgroundColor(glm::mix(glm::vec4 (52, 199, 89 ,255), glm::vec4(199 ,199, 204, 255), v));
	}, [this]() {
		mAnimation = nullptr;
	});
}
