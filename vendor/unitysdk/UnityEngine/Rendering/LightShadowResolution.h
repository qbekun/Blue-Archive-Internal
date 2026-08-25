#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LightShadowResolution; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightShadowResolution_TypeDefinitionIndex = 31503;

	class LightShadowResolution : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::LightShadowResolution* FromQualitySettings; // 0x0
		::UnityEngine::Rendering::LightShadowResolution* Low; // 0x0
		::UnityEngine::Rendering::LightShadowResolution* Medium; // 0x0
		::UnityEngine::Rendering::LightShadowResolution* High; // 0x0
		::UnityEngine::Rendering::LightShadowResolution* VeryHigh; // 0x0

	};
}

