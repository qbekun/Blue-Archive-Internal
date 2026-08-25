#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalSurfaceData; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalSurfaceData_TypeDefinitionIndex = 32721;

	class DecalSurfaceData : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DecalSurfaceData* Albedo; // 0x0
		::UnityEngine::Rendering::Universal::DecalSurfaceData* AlbedoNormal; // 0x0
		::UnityEngine::Rendering::Universal::DecalSurfaceData* AlbedoNormalMAOS; // 0x0

	};
}

