#include "CuAlertDialog.h"

CuAlertDialog::CuAlertDialog(e3::Element* pParent)
	: CuAlertDialogBase(pParent)
{
	mContent->SetOnClickCallback([](e3::MouseEvent* pEvent){
		pEvent->Stop();
	});

	SetOnClickCallback([this](e3::MouseEvent* pEvent){
		pEvent->Stop();
		Hide();
	});
}

void CuAlertDialog::Hide()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this](float v){
		SetBackgroundColor(glm::vec4(0, 0, 0, (1 - v) * 60));
		mContent->SetOpacity(1 - v);
	}, [this](){
		SetVisibility(e3::EVisibility::Hidden);
	});
}

void CuAlertDialog::Show()
{
	SetVisibility(e3::EVisibility::Visible);
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this](float v){
		SetBackgroundColor(glm::vec4(0, 0, 0, v * 60));
		mContent->SetScale(glm::vec3(1 + (1-v) * 0.1), e3::ETransformAlignment::Center);
		mContent->SetOpacity(v);
	}, [](){

	});
}