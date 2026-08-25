#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LightProbeUsage; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightProbeUsage_TypeDefinitionIndex = 31513;

	class LightProbeUsage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::LightProbeUsage* Off; // 0x0
		::UnityEngine::Rendering::LightProbeUsage* BlendProbes; // 0x0
		::UnityEngine::Rendering::LightProbeUsage* UseProxyVolume; // 0x0
		::UnityEngine::Rendering::LightProbeUsage* CustomProvided; // 0x0

	};
}

