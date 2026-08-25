#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class AngularFalloffType; }

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int AngularFalloffType_TypeDefinitionIndex = 31630;

	class AngularFalloffType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType* LUT; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType* AnalyticAndInnerAngle; // 0x0

	};
}

