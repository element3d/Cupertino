
#ifndef CuNavigationBar_H_
#define CuNavigationBar_H_

#include "private/CuNavigationBarBase.h"

class E3_EXPORT CuNavigationBar : public CuNavigationBarBase
{
public:
	CuNavigationBar(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
};

#endif // CuNavigationBar_H_

