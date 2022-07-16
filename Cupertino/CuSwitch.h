
#ifndef CuSwitch_H_
#define CuSwitch_H_

#include "private/CuSwitchBase.h"

class E3_EXPORT CuSwitch : public CuSwitchBase
{
public:
	CuSwitch(e3::Element* pParent = nullptr);

	bool OnClick(e3::MouseEvent* pEvent);
	void Check();
	void Uncheck();

	bool mChecked = false;
	e3::Animation* mAnimation = nullptr;
};

#endif // CuSwitch_H_

