#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MixedLightingSetup; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MixedLightingSetup_TypeDefinitionIndex = 32795;

	class MixedLightingSetup : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::MixedLightingSetup* None; // 0x0
		::UnityEngine::Rendering::Universal::MixedLightingSetup* ShadowMask; // 0x0
		::UnityEngine::Rendering::Universal::MixedLightingSetup* Subtractive; // 0x0

	};
}

