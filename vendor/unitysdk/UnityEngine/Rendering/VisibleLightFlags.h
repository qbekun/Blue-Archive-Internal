#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VisibleLightFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleLightFlags_TypeDefinitionIndex = 31582;

	class VisibleLightFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::VisibleLightFlags* IntersectsNearPlane; // 0x0
		::UnityEngine::Rendering::VisibleLightFlags* IntersectsFarPlane; // 0x0

	};
}

