#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaEdge; }

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaEdge_TypeDefinitionIndex = 37352;

	class YogaEdge : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Yoga::YogaEdge* Left; // 0x0
		::UnityEngine::Yoga::YogaEdge* Top; // 0x0
		::UnityEngine::Yoga::YogaEdge* Right; // 0x0
		::UnityEngine::Yoga::YogaEdge* Bottom; // 0x0
		::UnityEngine::Yoga::YogaEdge* Start; // 0x0
		::UnityEngine::Yoga::YogaEdge* End; // 0x0
		::UnityEngine::Yoga::YogaEdge* Horizontal; // 0x0
		::UnityEngine::Yoga::YogaEdge* Vertical; // 0x0
		::UnityEngine::Yoga::YogaEdge* All; // 0x0

	};
}

