#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TransformOriginOffset; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransformOriginOffset_TypeDefinitionIndex = 30162;

	class TransformOriginOffset : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::TransformOriginOffset* Left; // 0x0
		::UnityEngine::UIElements::TransformOriginOffset* Right; // 0x0
		::UnityEngine::UIElements::TransformOriginOffset* Top; // 0x0
		::UnityEngine::UIElements::TransformOriginOffset* Bottom; // 0x0
		::UnityEngine::UIElements::TransformOriginOffset* Center; // 0x0

	};
}

