#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DebugAction; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugAction_TypeDefinitionIndex = 33932;

	class DebugAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::DebugAction* EnableDebugMenu; // 0x0
		::UnityEngine::Rendering::DebugAction* PreviousDebugPanel; // 0x0
		::UnityEngine::Rendering::DebugAction* NextDebugPanel; // 0x0
		::UnityEngine::Rendering::DebugAction* Action; // 0x0
		::UnityEngine::Rendering::DebugAction* MakePersistent; // 0x0
		::UnityEngine::Rendering::DebugAction* MoveVertical; // 0x0
		::UnityEngine::Rendering::DebugAction* MoveHorizontal; // 0x0
		::UnityEngine::Rendering::DebugAction* Multiplier; // 0x0
		::UnityEngine::Rendering::DebugAction* ResetAll; // 0x0
		::UnityEngine::Rendering::DebugAction* DebugActionCount; // 0x0

	};
}

