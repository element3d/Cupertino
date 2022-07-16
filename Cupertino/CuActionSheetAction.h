
#ifndef CuActionSheetAction_H_
#define CuActionSheetAction_H_

#include "private/CuActionSheetActionBase.h"

class E3_EXPORT CuActionSheetAction : public CuActionSheetActionBase
{
public:
	CuActionSheetAction(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	void SetDefault(bool def);
	bool IsDefault() { return mIsDefault; }

private:
	bool mIsDefault = false;
};

#endif // CuActionSheetAction_H_

