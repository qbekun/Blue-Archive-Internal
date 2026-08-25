#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class EventModifiers; }
namespace UnityEngine { class KeyCode; }

#define UNITYENGINE_UIELEMENTS_IKEYBOARDEVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IKEYBOARDEVENT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IKEYBOARDEVENT_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IKeyboardEvent_TypeDefinitionIndex = 30484;

	class IKeyboardEvent : public Il2CppObject
	{
	public:
		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IKEYBOARDEVENT_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Char get_character()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IKEYBOARDEVENT_GET_CHARACTER_OFFSET))(nullptr);
		}

		::UnityEngine::KeyCode* get_keyCode()
		{
			return (return (::UnityEngine::KeyCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IKEYBOARDEVENT_GET_KEYCODE_OFFSET))(nullptr);
		}

	};
}

