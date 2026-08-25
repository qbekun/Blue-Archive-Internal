#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class VertexFlags; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int VertexFlags_TypeDefinitionIndex = 30779;

	class VertexFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::UIR::VertexFlags* IsSolid; // 0x0
		::UnityEngine::UIElements::UIR::VertexFlags* IsText; // 0x0
		::UnityEngine::UIElements::UIR::VertexFlags* IsTextured; // 0x0
		::UnityEngine::UIElements::UIR::VertexFlags* IsDynamic; // 0x0
		::UnityEngine::UIElements::UIR::VertexFlags* IsSvgGradients; // 0x0
		::UnityEngine::UIElements::UIR::VertexFlags* LastType; // 0x0
		::UnityEngine::UIElements::UIR::VertexFlags* IsGraphViewEdge; // 0x0

	};
}

