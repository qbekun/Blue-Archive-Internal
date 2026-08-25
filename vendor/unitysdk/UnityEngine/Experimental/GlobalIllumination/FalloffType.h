#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class FalloffType; }

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int FalloffType_TypeDefinitionIndex = 31629;

	class FalloffType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* InverseSquared; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* InverseSquaredNoRangeAttenuation; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* Linear; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* Legacy; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* Undefined; // 0x0

	};
}

