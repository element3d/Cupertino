#include "CuActionSheetBase.h"

#include <e3/ViewFactory.h>
#include "CupertinoValues.h"

CuActionSheetBase::CuActionSheetBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetPositionType((e3::EPositionType)1);
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
        this->SetVisibility((e3::EVisibility)2);
        this->SetAlignItemsVer((e3::EAlignment)1);
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContent);
        mContent->SetWidth("96%");
        mContent->SetBorderRadius(glm::vec4(e3::Dim("20dp")));
        mContent->SetOrientation((e3::EOrientation)1);
    mTitleCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContent->AddElement(mTitleCont);
        mTitleCont->SetOrientation((e3::EOrientation)1);
        mTitleCont->SetPadding("15dp");
        mTitleCont->SetWidth("100%");
        mTitleCont->SetBorderRadius(glm::vec4(e3::Dim("10dp"), e3::Dim("10dp"), 0, 0));
        mTitleCont->SetBackgroundColor(glm::vec4(245.000000, 245.000000, 245.000000, 187.000000));
        mTitle = e3::ViewFactory::CreateText();
        mTitleCont->AddElement(mTitle);
        mTitle->SetText("Select Favorite Dessert");
        mTitle->SetFontSize("16dp");
        mTitle->SetTextColor(glm::vec4(60.000000, 60.000000, 67.000000, 153.000000));
        mTitle->SetFontStyle((e3::EFontStyle)2);
        mDesc = e3::ViewFactory::CreateText();
        mTitleCont->AddElement(mDesc);
        mDesc->SetWidth("100%");
        mDesc->SetMaxNumLines(5);
        mDesc->SetMarginTop("20dp");
        mDesc->SetText("Please select your favorite type of dessert from the list below. Your selection will be used to customize the suggested list of eateries in your area.");
        mDesc->SetFontSize("16dp");
        mDesc->SetTextColor(glm::vec4(60.000000, 60.000000, 67.000000, 153.000000));

}
