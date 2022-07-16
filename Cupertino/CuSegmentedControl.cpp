#include "CuSegmentedControl.h"

CuSegmentedControl::CuSegmentedControl(e3::Element* pParent)
	: CuSegmentedControlBase(pParent)
{

}

void CuSegmentedControl::SetOnChangeCallback(OnChangeCallback c)
{
    mOnChangeCallback = c;
}

void CuSegmentedControl::Render()
{
	if (mFirstFrame)
	{
		e3::Element* pItem = GetChildren()[GetNumChildren() - 1];
		pItem->SetOnLoadCallback([this, pItem](){
			mSelect->SetWidth(pItem->GetGeometry().width);
		});
		mFirstFrame = false;

		for (int i = 1; i < GetNumChildren(); ++i)
		{
			e3::Element* pItem = GetChildren()[i];
			pItem->SetOnClickCallback([this, pItem, i](e3::MouseEvent*){
			    if (mOnChangeCallback) mOnChangeCallback(i, (CuSegmentedControlOption*)pItem);
				e3::Rect2f selectGeo = mSelect->GetGeometry();
				e3::Rect2f itemGeo = pItem->GetGeometry();
				float def = selectGeo.x - GetGeometry().x - e3::Dim("2dp");
				float diff = itemGeo.x - selectGeo.x;
				e3::Animation* pA = new e3::Animation();
				pA->Start(0.5, def, itemGeo.x - e3::Dim("2dp"), e3::EAnimation::EaseOutQuart,  [this, pItem](float v){
					mSelect->SetTranslation(glm::vec3(v - e3::Dim("2dp"), 0, 0));
				}, [](){

				});
			});
		}
	}
	CuSegmentedControlBase::Render();
}