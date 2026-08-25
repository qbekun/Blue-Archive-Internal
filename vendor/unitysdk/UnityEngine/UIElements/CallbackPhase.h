#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class CallbackPhase; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CallbackPhase_TypeDefinitionIndex = 30466;

	class CallbackPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::CallbackPhase* TargetAndBubbleUp; // 0x0
		::UnityEngine::UIElements::CallbackPhase* TrickleDownAndTarget; // 0x0

	};
}

