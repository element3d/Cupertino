
#ifndef CuSegmentedControlOption_H_
#define CuSegmentedControlOption_H_

#include "private/CuSegmentedControlOptionBase.h"

class E3_EXPORT CuSegmentedControlOption : public CuSegmentedControlOptionBase
{
public:
	CuSegmentedControlOption(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	std::string GetTitle();
};

#endif // CuSegmentedControlOption_H_

