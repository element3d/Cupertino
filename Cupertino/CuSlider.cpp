#include "CuSlider.h"

CuSlider::CuSlider(e3::Element* pParent)
	: CuSliderBase(pParent)
{

}

bool CuSlider::OnMouseDown(e3::MouseEvent *pEvent)
{
	if (mNumDivisions > 0)
	{
		float sliderWidth = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2.0f + mCircle->GetGeometry().width / 2.0f;
		int i = 0;
		for (e3::Element *pDivisions : mDivisions->GetChildren())
		{
			if (pDivisions->GetGeometry().x >= pEvent->GetX())
			{
				--i;
				break;
			}
			++i;
		}

		i = std::max(0, i);
		i = std::min(mNumDivisions - 2, i);
		float d1 = pEvent->GetX() - mDivisions->GetChildren()[i]->GetGeometry().x;
		float d2 = mDivisions->GetChildren()[i + 1]->GetGeometry().x - pEvent->GetX();

		if (d1 < d2)
			mSliderWidth = mDivisions->GetChildren()[i]->GetGeometry().x - GetGeometry().x - mCircle->GetGeometry().width / 2.0f;
		else
		{
			mSliderWidth = mDivisions->GetChildren()[i + 1]->GetGeometry().x - GetGeometry().x - mCircle->GetGeometry().width / 2.0f;
			i = i + 1;
		}

	}
	else
	{
		mSliderWidth = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2.0f;
	}
	mValue->SetWidth(mSliderWidth + mCircle->GetGeometry().width / 2.0f);
	mCircle->SetTranslation(glm::vec3(mSliderWidth, 0, 0));
	auto geo = mCircle->GetGeometry();

	mSliderValue = ((mSliderWidth + mCircle->GetGeometry().width / 2.0f) / GetGeometry().width) * 100;



	return CuSliderBase::OnMouseDown(pEvent);
}

void CuSlider::OnMouseMove(e3::MouseEvent *pEvent)
{
	if (mNumDivisions > 0)
	{
		float sliderWidth = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2.0f + mCircle->GetGeometry().width / 2.0f;
		int i = 0;
		for (e3::Element *pDivisions : mDivisions->GetChildren())
		{
			if (pDivisions->GetGeometry().x >= pEvent->GetX())
			{
				--i;
				break;
			}
			++i;
		}
		i = std::min(i, mNumDivisions - 2);
		i = std::max(0, i);
		float d1 = pEvent->GetX() - mDivisions->GetChildren()[i]->GetGeometry().x;
		float d2 = mDivisions->GetChildren()[i + 1]->GetGeometry().x - pEvent->GetX();

		if (d1 < d2)
			mSliderWidth = mDivisions->GetChildren()[i]->GetGeometry().x - GetGeometry().x - mCircle->GetGeometry().width / 2.0f;
		else
		{
			mSliderWidth = mDivisions->GetChildren()[i + 1]->GetGeometry().x - GetGeometry().x - mCircle->GetGeometry().width / 2.0f;
			i = i + 1;
		}
//		for (int j = 0; j < i; ++j)
//			mDivisions->GetChildren()[j]->SetBackgroundColor(glm::vec4(255));
//		for (int j = i; j < mDivisions->GetNumChildren(); ++j)
//			mDivisions->GetChildren()[j]->SetBackgroundColor(/*GetTheme()->ColorPrimary*/ MDColors::Primary::Get());
	}
	else
	{
		mSliderWidth = pEvent->GetX() - GetGeometry().x - mCircle->GetGeometry().width / 2.0f;
	}
	mValue->SetWidth(mSliderWidth + mCircle->GetGeometry().width / 2.0f);
	mCircle->SetTranslation(glm::vec3(mSliderWidth, 0, 0));
	auto geo = mCircle->GetGeometry();
	// info
	mSliderValue = ((mSliderWidth + mCircle->GetGeometry().width / 2.0f) / GetGeometry().width) * 100;


//	if (mOnChangeCallback)
//		mOnChangeCallback(mSliderValue);
}


void CuSlider::SetDivisions(int divisiions)
{
	mNumDivisions = divisiions;

	mDivisions->Clear();
	for (int i = 0; i < divisiions; ++i)
	{
		e3::Element *pD = new e3::Element();
		pD->SetHeight("3dp");
		pD->SetAspectRatio(1);
		mDivisions->AddElement(pD);
	}
}

int CuSlider::GetDivisions()
{
	return mNumDivisions;
}