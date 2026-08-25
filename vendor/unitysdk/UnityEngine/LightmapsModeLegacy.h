#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightmapsModeLegacy; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapsModeLegacy_TypeDefinitionIndex = 31007;

	class LightmapsModeLegacy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightmapsModeLegacy* Single; // 0x0
		::UnityEngine::LightmapsModeLegacy* Dual; // 0x0
		::UnityEngine::LightmapsModeLegacy* Directional; // 0x0

	};
}

