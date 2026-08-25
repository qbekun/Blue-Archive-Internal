#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class SelectionType; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int SelectionType_TypeDefinitionIndex = 30112;

	class SelectionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::SelectionType* None; // 0x0
		::UnityEngine::UIElements::SelectionType* Single; // 0x0
		::UnityEngine::UIElements::SelectionType* Multiple; // 0x0

	};
}

