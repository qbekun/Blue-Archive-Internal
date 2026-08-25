#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Event; }
namespace UnityEngine { class EventType; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class PointerType; }
namespace UnityEngine { class EventModifiers; }
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET UNITYSDK_OFFSET(0xA273BF0)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xA273C30)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xA273CC0)
#define UNITYENGINE_EVENT_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xA273D40)
#define UNITYENGINE_EVENT_SET_DELTA_OFFSET UNITYSDK_OFFSET(0xA273DD0)
#define UNITYENGINE_EVENT_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0xA273E50)
#define UNITYENGINE_EVENT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA273E90)
#define UNITYENGINE_EVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xA273ED0)
#define UNITYENGINE_EVENT_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xA273F10)
#define UNITYENGINE_EVENT_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0xA273F50)
#define UNITYENGINE_EVENT_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xA273F90)
#define UNITYENGINE_EVENT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0xA273FD0)
#define UNITYENGINE_EVENT_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0xA274010)
#define UNITYENGINE_EVENT_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0xA274050)
#define UNITYENGINE_EVENT_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0xA274090)
#define UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0xA2740D0)
#define UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0xA274110)
#define UNITYENGINE_EVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA274150)
#define UNITYENGINE_EVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA274190)
#define UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xA2741D0)
#define UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xA274210)
#define UNITYENGINE_EVENT_INTERNAL_USE_OFFSET UNITYSDK_OFFSET(0xA274250)
#define UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA274290)
#define UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA2742D0)
#define UNITYENGINE_EVENT_COPYFROMPTR_OFFSET UNITYSDK_OFFSET(0xA274310)
#define UNITYENGINE_EVENT_POPEVENT_OFFSET UNITYSDK_OFFSET(0xA274350)
#define UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET UNITYSDK_OFFSET(0xA274390)
#define UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET UNITYSDK_OFFSET(0xA2743D0)
#define UNITYENGINE_EVENT_GETDOUBLECLICKTIME_OFFSET UNITYSDK_OFFSET(0xA274580)
#define UNITYENGINE_EVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2745C0)
#define UNITYENGINE_EVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA274540)
#define UNITYENGINE_EVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA274600)
#define UNITYENGINE_EVENT_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA274740)
#define UNITYENGINE_EVENT_GET_SHIFT_OFFSET UNITYSDK_OFFSET(0xA2747B0)
#define UNITYENGINE_EVENT_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0xA2747F0)
#define UNITYENGINE_EVENT_GET_ALT_OFFSET UNITYSDK_OFFSET(0xA274830)
#define UNITYENGINE_EVENT_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0xA274870)
#define UNITYENGINE_EVENT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA2748B0)
#define UNITYENGINE_EVENT_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA2748F0)
#define UNITYENGINE_EVENT_GET_ISKEY_OFFSET UNITYSDK_OFFSET(0xA274990)
#define UNITYENGINE_EVENT_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0xA2749E0)
#define UNITYENGINE_EVENT_GET_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0xA274A40)
#define UNITYENGINE_EVENT_KEYBOARDEVENT_OFFSET UNITYSDK_OFFSET(0xA274AB0)
#define UNITYENGINE_EVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA276630)
#define UNITYENGINE_EVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA276780)
#define UNITYENGINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA276A10)
#define UNITYENGINE_EVENT_USE_OFFSET UNITYSDK_OFFSET(0xA277410)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273C80)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273D00)
#define UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273D90)
#define UNITYENGINE_EVENT_SET_DELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273E10)

namespace UnityEngine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 36526;

	class Event : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::UnityEngine::Event* s_Current; // 0x0
		::UnityEngine::Event* s_MasterEvent; // 0x8

		::UnityEngine::EventType* get_rawType()
		{
			return (return (::UnityEngine::EventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_mousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_mousePosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_delta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DELTA_OFFSET))(nullptr);
		}

		::System::Void set_delta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::PointerType* get_pointerType()
		{
			return (return (::UnityEngine::PointerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_POINTERTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_button()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_BUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Void set_modifiers(::UnityEngine::EventModifiers* arg)
		{
			((::System::Void(*)(::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MODIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Char get_character()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_character(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::KeyCode* get_keyCode()
		{
			return (return (::UnityEngine::KeyCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_KEYCODE_OFFSET))(nullptr);
		}

		::System::Void set_keyCode(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_KEYCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_displayIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_displayIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventType* get_type()
		{
			return (return (::UnityEngine::EventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(::UnityEngine::EventType* arg)
		{
			((::System::Void(*)(::UnityEngine::EventType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_commandName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET))(nullptr);
		}

		::System::Void set_commandName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET))(str, nullptr);
		}

		::System::Void Internal_Use()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_USE_OFFSET))(nullptr);
		}

		::System::Int32 Internal_Create(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFromPtr(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_COPYFROMPTR_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopEvent(::UnityEngine::Event* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_POPEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_SetNativeEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_MakeMasterEventCurrent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDoubleClickTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GETDOUBLECLICKTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shift()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_SHIFT_OFFSET))(nullptr);
		}

		::System::Boolean get_control()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CONTROL_OFFSET))(nullptr);
		}

		::System::Boolean get_alt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ALT_OFFSET))(nullptr);
		}

		::System::Boolean get_command()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_COMMAND_OFFSET))(nullptr);
		}

		::UnityEngine::Event* get_current()
		{
			return (return (::UnityEngine::Event*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ISKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_isMouse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ISMOUSE_OFFSET))(nullptr);
		}

		::System::Boolean get_isDirectManipulationDevice()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ISDIRECTMANIPULATIONDEVICE_OFFSET))(nullptr);
		}

		::UnityEngine::Event* KeyboardEvent(::System::String* str)
		{
			return (return (::UnityEngine::Event*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_KEYBOARDEVENT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Use()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_USE_OFFSET))(nullptr);
		}

		::System::Void get_mousePosition_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_mousePosition_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_delta_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_delta_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_DELTA_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

