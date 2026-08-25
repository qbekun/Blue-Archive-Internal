#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MixedLightingMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int MixedLightingMode_TypeDefinitionIndex = 31034;

	class MixedLightingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::MixedLightingMode* IndirectOnly; // 0x0
		::UnityEngine::MixedLightingMode* Shadowmask; // 0x0
		::UnityEngine::MixedLightingMode* Subtractive; // 0x0

	};
}

