#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class GizmoSubset; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GizmoSubset_TypeDefinitionIndex = 31555;

	class GizmoSubset : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::GizmoSubset* PreImageEffects; // 0x0
		::UnityEngine::Rendering::GizmoSubset* PostImageEffects; // 0x0

	};
}

