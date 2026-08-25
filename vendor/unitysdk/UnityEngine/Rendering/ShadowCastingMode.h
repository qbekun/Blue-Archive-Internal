#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShadowCastingMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowCastingMode_TypeDefinitionIndex = 31502;

	class ShadowCastingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ShadowCastingMode* Off; // 0x0
		::UnityEngine::Rendering::ShadowCastingMode* On; // 0x0
		::UnityEngine::Rendering::ShadowCastingMode* TwoSided; // 0x0
		::UnityEngine::Rendering::ShadowCastingMode* ShadowsOnly; // 0x0

	};
}

