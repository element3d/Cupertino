#include "CuTabBarBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuTabBarBase::CuTabBarBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("80dp");
        this->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("1dp");
        pElement1->SetBackgroundColor(glm::vec4(151.000000, 151.000000, 151.000000, 255.000000));
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContent);
        mContent->SetWidth("100%");
        mContent->SetHeight("100%");
        mContent->SetScaling((e3::EScaling)1);
        mContent->SetAlignItemsHor((e3::EAlignment)4);
        mContent->SetBackgroundColor(glm::vec4(249.000000, 249.000000, 249.000000, 255.000000));

}
