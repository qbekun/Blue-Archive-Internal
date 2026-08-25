#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalNormalBlend; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalNormalBlend_TypeDefinitionIndex = 32725;

	class DecalNormalBlend : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DecalNormalBlend* Low; // 0x0
		::UnityEngine::Rendering::Universal::DecalNormalBlend* Medium; // 0x0
		::UnityEngine::Rendering::Universal::DecalNormalBlend* High; // 0x0

	};
}

