#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightmapBakeType; }
namespace UnityEngine { class MixedLightingMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightBakingOutput_TypeDefinitionIndex = 31018;

	class LightBakingOutput : public Il2CppObject
	{
	public:
		::System::Int32 probeOcclusionLightIndex; // 0x10
		::System::Int32 occlusionMaskChannel; // 0x14
		::UnityEngine::LightmapBakeType* lightmapBakeType; // 0x18
		::UnityEngine::MixedLightingMode* mixedLightingMode; // 0x1C
		::System::Boolean isBaked; // 0x20

	};
}

