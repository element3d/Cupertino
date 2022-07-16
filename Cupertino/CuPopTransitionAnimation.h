#ifndef __CU_POP_TRANSITION_ANIMATION__
#define __CU_POP_TRANSITION_ANIMATION__

#include <e3/Animation.h>

class CuPopTransitionAnimation : public e3::Animation
{
public:
	CuPopTransitionAnimation(e3::Element* pElement) : e3::Animation()
	{

		SetDuration(0.2);
		AddOnValueCallback([pElement](float v) {
			pElement->SetTranslation(glm::vec3((v) * pElement->GetGeometry().width, 0, 0));
		});
		AddOnEndCallback([]() {

		});
	}
};

#endif // !__CU_POP_TRANSITION_ANIMATION__