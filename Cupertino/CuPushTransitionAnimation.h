#ifndef __CU_PUSH_TRANSITION_ANIMATION__
#define __CU_PUSH_TRANSITION_ANIMATION__
#include <e3/Animation.h>
class CuPushTransitionAnimation : public e3::Animation
{
public:
	CuPushTransitionAnimation(e3::Element* pElement) : e3::Animation()
	{
		Start(0.5, e3::EAnimation::EaseOutQuart, [this, pElement](float v) {
			pElement->SetTranslation(glm::vec3( (1 - v) * pElement->GetGeometry().width, 0, 0));
		}, []() {

		});
	}
};

#endif // !__CU_PUSH_TRANSITION_ANIMATION__