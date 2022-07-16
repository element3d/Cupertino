#include "CuSegmentedControlBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuSegmentedControlBase::CuSegmentedControlBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("400dp");
        this->SetHeight("35dp");
        this->SetBorderRadius(glm::vec4(e3::Dim("6dp")));
        this->SetBackgroundColor(glm::vec4(118.000000, 118.000000, 128.000000, 32.000000));
        this->SetPadding("2dp");
    mSelect = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelect);
        mSelect->SetHeight("100%");
        mSelect->SetScaling((e3::EScaling)1);
        mSelect->SetPositionType((e3::EPositionType)1);
        mSelect->SetBorderRadius(glm::vec4(e3::Dim("6dp")));
        mSelect->SetLeft(0);
        mSelect->SetBackgroundColor(glm::vec4(255));
        e3::ShadowParams mSelectShadowParams;
        mSelectShadowParams.Color = glm::vec4(100, 100, 100, 155);
        mSelectShadowParams.BlurSize = 17;
        mSelectShadowParams.Opacity = 1;
        mSelectShadowParams.Scale = 1.0;
        mSelectShadowParams.Offset = glm::ivec2(0, 5);
        mSelect->SetShadow(mSelectShadowParams);

}
