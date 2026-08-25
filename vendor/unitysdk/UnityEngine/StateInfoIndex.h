#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class StateInfoIndex; }

namespace UnityEngine
{
	inline static constexpr unsigned int StateInfoIndex_TypeDefinitionIndex = 36458;

	class StateInfoIndex : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::StateInfoIndex* CurrentState; // 0x0
		::UnityEngine::StateInfoIndex* NextState; // 0x0
		::UnityEngine::StateInfoIndex* ExitState; // 0x0
		::UnityEngine::StateInfoIndex* InterruptedState; // 0x0

	};
}

