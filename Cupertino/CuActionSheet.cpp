#include "CuActionSheet.h"
#include "CuActionSheetAction.h"

CuActionSheet::CuActionSheet(e3::Element* pParent)
	: CuActionSheetBase(pParent)
{
	mContent->SetOnClickCallback([](e3::MouseEvent* pEvent){
		pEvent->Stop();
	});

	SetOnClickCallback([this](e3::MouseEvent* pEvent){
		pEvent->Stop();
		Hide();
	});
}

void CuActionSheet::Hide()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this](float v){
		SetBackgroundColor(glm::vec4(0, 0, 0, (1 - v) * 60));
		mContent->SetOpacity(1 - v);
		mContent->SetTranslation(glm::vec3(0,  (v) * mContent->GetGeometry().height, 0));
	}, [this](){
		SetVisibility(e3::EVisibility::Hidden);
	});
}

void CuActionSheet::Show()
{

	SetVisibility(e3::EVisibility::Visible);
	mContent->SetTranslation(glm::vec3(0, mContent->GetGeometry().height, 0));
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.5, e3::EAnimation::EaseOutQuart, [this](float v){
		SetBackgroundColor(glm::vec4(0, 0, 0, v * 60));
//		mContent->SetScale(glm::vec3(1 + (1-v) * 0.1), e3::ETransformAlignment::Center);
		mContent->SetOpacity(v);
		mContent->SetTranslation(glm::vec3(0,  (1 - v) * mContent->GetGeometry().height, 0));
	}, [](){

	});
}

void CuActionSheet::AddElement(e3::Element* pElement)
{


	mContent->AddElement(pElement);
	/*CuActionSheetAction* pAction = dynamic_cast<CuActionSheetAction*>(pElement);
	if (pAction && !pAction->IsDefault())
	{
		if (mContent->GetNumChildren() > 1)
			mContent->GetChildren()[mContent->GetNumChildren() - 2]->SetBorderRadius(0);
		pElement->SetBorderRadius(glm::vec4(0, 0, e3::Dim("10dp"), e3::Dim("10dp")));
	}*/
}