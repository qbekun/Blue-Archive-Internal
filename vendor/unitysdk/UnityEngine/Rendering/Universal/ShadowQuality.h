#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShadowQuality; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowQuality_TypeDefinitionIndex = 32508;

	class ShadowQuality : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ShadowQuality* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::ShadowQuality* HardShadows; // 0x0
		::UnityEngine::Rendering::Universal::ShadowQuality* SoftShadows; // 0x0

	};
}

