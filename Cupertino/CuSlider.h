
#ifndef CuSlider_H_
#define CuSlider_H_

#include "private/CuSliderBase.h"

class E3_EXPORT CuSlider : public CuSliderBase
{
public:
	CuSlider(e3::Element* pParent = nullptr);

	void SetDivisions(int divisiions);
	int GetDivisions();

	bool OnMouseDown(e3::MouseEvent *pEvent);
	void OnMouseMove(e3::MouseEvent *pEvent);

	int mNumDivisions = 0;
	float mSliderWidth = 0.0f;
	int mSliderValue = 0.0f;

};

#endif // CuSlider_H_

