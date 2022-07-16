#include "Main.h"
#include "ButtonsPage.h"
#include "AlertsPage.h"
#include "ActionSheetPage.h"
#include "SegmentedControlPage.h"
#include "SliderPage.h"
#include "SwitchPage.h"
#include "TabBarPage.h"
#include "TextFieldPage.h"
#include <e3/Application.h>
#include "CuPushTransitionAnimation.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	mAlerts->SetOnClickCallback([this](e3::MouseEvent*){
		AlertsPage* pPage = new AlertsPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});

	mButtons->SetOnClickCallback([this](e3::MouseEvent*){
		ButtonsPage* pPage = new ButtonsPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});

    mActionSheet->SetOnClickCallback([this](e3::MouseEvent*){
		ActionSheetPage* pPage = new ActionSheetPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
    });

	mSegControl->SetOnClickCallback([this](e3::MouseEvent*){
		SegmentedControlPage* pPage = new SegmentedControlPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});

	mSlider->SetOnClickCallback([this](e3::MouseEvent*){
		SliderPage* pPage = new SliderPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});

	mSwitch->SetOnClickCallback([this](e3::MouseEvent*){
		SwitchPage* pPage = new SwitchPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});

	mTabBar->SetOnClickCallback([this](e3::MouseEvent*){
		TabBarPage* pPage = new TabBarPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});


	mTextField->SetOnClickCallback([this](e3::MouseEvent*){
		TextFieldPage* pPage = new TextFieldPage();
		GetApplication()->PushElement(pPage, false, new CuPushTransitionAnimation(pPage));
	});

//	auto end = std::chrono::system_clock::now();
//	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
//	std::string t = std::ctime(&end_time);
//	mTime->SetText(t);


}

void Main::Render()
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,80,"%H:%M:%S",timeinfo);
	mTime->SetText(buffer);
	MainBase::Render();
}
