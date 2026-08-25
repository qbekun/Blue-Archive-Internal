#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class EventModifiers; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class KeyCode; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA314690)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DropdownMenuEventInfo_TypeDefinitionIndex = 30084;

	class DropdownMenuEventInfo : public Il2CppObject
	{
	public:
		::UnityEngine::EventModifiers* _modifiers_k__BackingField; // 0x10
		::UnityEngine::Vector2* _mousePosition_k__BackingField; // 0x14
		::UnityEngine::Vector2* _localMousePosition_k__BackingField; // 0x1C
		::System::Char _character_k__BackingField; // 0x24
		::UnityEngine::KeyCode* _keyCode_k__BackingField; // 0x28

		::System::Void .ctor(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUEVENTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

