#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightStats_TypeDefinitionIndex = 32468;

	class LightStats : public Il2CppObject
	{
	public:
		::System::Int32 totalLights; // 0x10
		::System::Int32 totalNormalMapUsage; // 0x14
		::System::Int32 totalVolumetricUsage; // 0x18
		::System::UInt32 blendStylesUsed; // 0x1C
		::System::UInt32 blendStylesWithLights; // 0x20

	};
}

