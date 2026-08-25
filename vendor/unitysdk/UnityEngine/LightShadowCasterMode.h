#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightShadowCasterMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightShadowCasterMode_TypeDefinitionIndex = 31019;

	class LightShadowCasterMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightShadowCasterMode* Default; // 0x0
		::UnityEngine::LightShadowCasterMode* NonLightmappedOnly; // 0x0
		::UnityEngine::LightShadowCasterMode* Everything; // 0x0

	};
}

