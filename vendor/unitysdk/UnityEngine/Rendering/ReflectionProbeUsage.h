#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ReflectionProbeUsage; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeUsage_TypeDefinitionIndex = 31511;

	class ReflectionProbeUsage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ReflectionProbeUsage* Off; // 0x0
		::UnityEngine::Rendering::ReflectionProbeUsage* BlendProbes; // 0x0
		::UnityEngine::Rendering::ReflectionProbeUsage* BlendProbesAndSkybox; // 0x0
		::UnityEngine::Rendering::ReflectionProbeUsage* Simple; // 0x0

	};
}

