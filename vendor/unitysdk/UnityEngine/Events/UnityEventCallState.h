#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class UnityEventCallState; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventCallState_TypeDefinitionIndex = 31291;

	class UnityEventCallState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Events::UnityEventCallState* Off; // 0x0
		::UnityEngine::Events::UnityEventCallState* EditorAndRuntime; // 0x0
		::UnityEngine::Events::UnityEventCallState* RuntimeOnly; // 0x0

	};
}

