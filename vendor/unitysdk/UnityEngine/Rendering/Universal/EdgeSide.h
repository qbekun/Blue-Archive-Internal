#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class EdgeSide; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EdgeSide_TypeDefinitionIndex = 32441;

	class EdgeSide : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::EdgeSide* esLeft; // 0x0
		::UnityEngine::Rendering::Universal::EdgeSide* esRight; // 0x0

	};
}

