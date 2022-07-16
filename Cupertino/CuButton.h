
#ifndef CuButton_H_
#define CuButton_H_

#include "private/CuButtonBase.h"

enum class E3_EXPORT ECuButtonType
{
	Filled,
	Tinted,
	Gray,
	Plain
};

class E3_EXPORT CuButton : public CuButtonBase
{
public:
	CuButton(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);

	void SetType(ECuButtonType type);
	ECuButtonType GetType();

	virtual bool OnMouseDown(e3::MouseEvent*) override;
	virtual bool OnMouseUp(e3::MouseEvent*) override;

private:
	ECuButtonType mType;
};

#endif // CuButton_H_

