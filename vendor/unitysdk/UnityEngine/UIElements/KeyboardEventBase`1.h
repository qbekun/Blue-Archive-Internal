#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class EventModifiers; }
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_COMMANDKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_ACTIONKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyboardEventBase`1_TypeDefinitionIndex = 30485;

	class KeyboardEventBase`1 : public <>c
	{
	public:
		::UnityEngine::EventModifiers* _modifiers_k__BackingField; // 0x0
		::System::Char _character_k__BackingField; // 0x0
		::UnityEngine::KeyCode* _keyCode_k__BackingField; // 0x0

		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Void set_modifiers(::UnityEngine::EventModifiers* arg)
		{
			((::System::Void(*)(::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_SET_MODIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Char get_character()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_character(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::KeyCode* get_keyCode()
		{
			return (return (::UnityEngine::KeyCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_KEYCODE_OFFSET))(nullptr);
		}

		::System::Void set_keyCode(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_SET_KEYCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shiftKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ctrlKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_CTRLKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_commandKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_COMMANDKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_altKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_ALTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_actionKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GET_ACTIONKEY_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(::System::Char arg, ::UnityEngine::KeyCode* arg, ::UnityEngine::EventModifiers* arg)
		{
			return (return (Il2CppObject*(*)(::System::Char, ::UnityEngine::KeyCode*, ::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

