#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShadowMapPass; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowMapPass_TypeDefinitionIndex = 31500;

	class ShadowMapPass : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ShadowMapPass* PointlightPositiveX; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* PointlightNegativeX; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* PointlightPositiveY; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* PointlightNegativeY; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* PointlightPositiveZ; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* PointlightNegativeZ; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* DirectionalCascade0; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* DirectionalCascade1; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* DirectionalCascade2; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* DirectionalCascade3; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* Spotlight; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* Pointlight; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* Directional; // 0x0
		::UnityEngine::Rendering::ShadowMapPass* All; // 0x0

	};
}

