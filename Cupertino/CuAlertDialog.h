
#ifndef CuAlertDialog_H_
#define CuAlertDialog_H_

#include "private/CuAlertDialogBase.h"

class E3_EXPORT CuAlertDialog : public CuAlertDialogBase
{
public:
	CuAlertDialog(e3::Element* pParent = nullptr);

	void Show();
	void Hide();
};

#endif // CuAlertDialog_H_

