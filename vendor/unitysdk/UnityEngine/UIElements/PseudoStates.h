#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PseudoStates; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PseudoStates_TypeDefinitionIndex = 30244;

	class PseudoStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::PseudoStates* Active; // 0x0
		::UnityEngine::UIElements::PseudoStates* Hover; // 0x0
		::UnityEngine::UIElements::PseudoStates* Checked; // 0x0
		::UnityEngine::UIElements::PseudoStates* Disabled; // 0x0
		::UnityEngine::UIElements::PseudoStates* Focus; // 0x0
		::UnityEngine::UIElements::PseudoStates* Root; // 0x0

	};
}

