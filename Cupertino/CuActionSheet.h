
#ifndef CuActionSheet_H_
#define CuActionSheet_H_

#include "private/CuActionSheetBase.h"

class E3_EXPORT CuActionSheet : public CuActionSheetBase
{
public:
	CuActionSheet(e3::Element* pParent = nullptr);

	void Show();
	void Hide();

	virtual void AddElement(e3::Element* pElement) override;
};

#endif // CuActionSheet_H_

