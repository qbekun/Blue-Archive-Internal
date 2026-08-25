#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::UI { class UIPointerType; }

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int UIPointerType_TypeDefinitionIndex = 28624;

	class UIPointerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::UI::UIPointerType* None; // 0x0
		::UnityEngine::InputSystem::UI::UIPointerType* MouseOrPen; // 0x0
		::UnityEngine::InputSystem::UI::UIPointerType* Touch; // 0x0
		::UnityEngine::InputSystem::UI::UIPointerType* Tracked; // 0x0

	};
}

