#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PropagationPhase; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PropagationPhase_TypeDefinitionIndex = 30478;

	class PropagationPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::PropagationPhase* None; // 0x0
		::UnityEngine::UIElements::PropagationPhase* TrickleDown; // 0x0
		::UnityEngine::UIElements::PropagationPhase* AtTarget; // 0x0
		::UnityEngine::UIElements::PropagationPhase* DefaultActionAtTarget; // 0x0
		::UnityEngine::UIElements::PropagationPhase* BubbleUp; // 0x0
		::UnityEngine::UIElements::PropagationPhase* DefaultAction; // 0x0

	};
}

