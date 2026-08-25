#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class InvokePolicy; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int InvokePolicy_TypeDefinitionIndex = 30467;

	class InvokePolicy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::InvokePolicy* Default; // 0x0
		::UnityEngine::UIElements::InvokePolicy* IncludeDisabled; // 0x0

	};
}

