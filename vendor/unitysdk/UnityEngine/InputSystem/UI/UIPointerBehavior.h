#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::UI { class UIPointerBehavior; }

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int UIPointerBehavior_TypeDefinitionIndex = 28625;

	class UIPointerBehavior : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::UI::UIPointerBehavior* SingleMouseOrPenButMultiTouchAndTrack; // 0x0
		::UnityEngine::InputSystem::UI::UIPointerBehavior* SingleUnifiedPointer; // 0x0
		::UnityEngine::InputSystem::UI::UIPointerBehavior* AllPointersAsIs; // 0x0

	};
}

