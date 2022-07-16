#include "CuSliderBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuSliderBase::CuSliderBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("30dp");
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("3dp");
        pElement1->SetBackgroundColor(glm::vec4(199 ,199, 204, 255));
    mValue = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mValue);
        mValue->SetPositionType((e3::EPositionType)1);
        mValue->SetWidth(0);
        mValue->SetLeft(0);
        mValue->SetHeight("3dp");
        mValue->SetBackgroundColor(glm::vec4(0, 122, 255, 255));
    mDivisions = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mDivisions);
        mDivisions->SetPositionType((e3::EPositionType)1);
        mDivisions->SetAlignItemsHor((e3::EAlignment)3);
        mDivisions->SetLeft(0);
        mDivisions->SetWidth("100%");
        mDivisions->SetHeight("6dp");
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetPositionType((e3::EPositionType)1);
        mCircle->SetHeight("100%");
        mCircle->SetLeft(0);
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        mCircle->SetBackgroundColor(glm::vec4(255));
        e3::ShadowParams mCircleShadowParams;
        mCircleShadowParams.Color = glm::vec4(50, 50, 50, 255);
        mCircleShadowParams.BlurSize = e3::Dim("25");
        mCircleShadowParams.Opacity = 0.5;
        mCircleShadowParams.Scale = 1;
        mCircleShadowParams.Offset = glm::ivec2(0, 5);
        mCircle->SetShadow(mCircleShadowParams);

}
