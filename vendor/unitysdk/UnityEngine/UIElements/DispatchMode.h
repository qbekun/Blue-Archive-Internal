#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DispatchMode; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DispatchMode_TypeDefinitionIndex = 30091;

	class DispatchMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::DispatchMode* Default; // 0x0
		::UnityEngine::UIElements::DispatchMode* Queued; // 0x0
		::UnityEngine::UIElements::DispatchMode* Immediate; // 0x0

	};
}

