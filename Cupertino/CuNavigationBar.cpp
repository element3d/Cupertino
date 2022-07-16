#include "CuNavigationBar.h"
#include <e3/Application.h>
#include "CuPopTransitionAnimation.h"

CuNavigationBar::CuNavigationBar(e3::Element* pParent)
	: CuNavigationBarBase(pParent)
{
	mBack->SetOnClickCallback([this](e3::MouseEvent*){
		GetApplication()->PopElement(new CuPopTransitionAnimation(GetApplication()->GetElement()));
	});
}

void CuNavigationBar::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}
