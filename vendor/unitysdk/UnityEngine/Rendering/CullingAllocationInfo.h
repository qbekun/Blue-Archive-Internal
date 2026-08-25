#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingAllocationInfo_TypeDefinitionIndex = 31549;

	class CullingAllocationInfo : public Il2CppObject
	{
	public:
		::System::Object** visibleLightsPtr; // 0x10
		::System::Object** visibleOffscreenVertexLightsPtr; // 0x18
		::System::Object** visibleReflectionProbesPtr; // 0x20
		::System::Int32 visibleLightCount; // 0x28
		::System::Int32 visibleOffscreenVertexLightCount; // 0x2C
		::System::Int32 visibleReflectionProbeCount; // 0x30

	};
}

