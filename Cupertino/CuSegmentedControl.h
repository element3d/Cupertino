
#ifndef CuSegmentedControl_H_
#define CuSegmentedControl_H_

#include "private/CuSegmentedControlBase.h"
#include "CuSegmentedControlOption.h"
class E3_EXPORT CuSegmentedControl : public CuSegmentedControlBase
{
	typedef std::function<void(int, CuSegmentedControlOption*)> OnChangeCallback;
public:
	CuSegmentedControl(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback c);
	virtual void Render() override;

private:
	bool mFirstFrame = true;
	OnChangeCallback mOnChangeCallback;
};

#endif // CuSegmentedControl_H_

