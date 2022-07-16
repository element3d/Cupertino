#include "CuSwitchBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuSwitchBase::CuSwitchBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("50dp");
        this->SetHeight("30dp");
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        this->SetBackgroundColor(glm::vec4(199 ,199, 204, 255));
        this->SetPadding("2dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)0);
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetHeight("100%");
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetBackgroundColor(glm::vec4(255));
        mCircle->SetShapeType((e3::EShapeType)1);
        e3::ShadowParams mCircleShadowParams;
        mCircleShadowParams.Color = glm::vec4(100, 100, 100, 255);
        mCircleShadowParams.BlurSize = 4;
        mCircleShadowParams.Opacity = 1;
        mCircleShadowParams.Scale = 1.0;
        mCircleShadowParams.Offset = glm::ivec2(1, 1);
        mCircle->SetShadow(mCircleShadowParams);

}
