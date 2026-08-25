#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TouchScreenKeyboardType; }
namespace UnityEngine { class TouchScreenKeyboard_InternalConstructorHelperArguments&; }
namespace UnityEngine { class TouchScreenKeyboard; }
namespace UnityEngine { class RangeInt; }

#define UNITYENGINE_TOUCHSCREENKEYBOARD_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA23AF60)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_DESTROY_OFFSET UNITYSDK_OFFSET(0xA23AFA0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA23B060)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA23B120)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPER_OFFSET UNITYSDK_OFFSET(0xA23B260)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA23B2B0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_DISABLEINPLACEEDITING_OFFSET UNITYSDK_OFFSET(0xA23B310)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISINPLACEEDITINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA23B350)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET UNITYSDK_OFFSET(0xA23B380)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET UNITYSDK_OFFSET(0xA23B430)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA23B510)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA23B550)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_HIDEINPUT_OFFSET UNITYSDK_OFFSET(0xA23B590)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA23B5D0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA23B610)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA23B650)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0xA23B690)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANGETSELECTION_OFFSET UNITYSDK_OFFSET(0xA23B6D0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANSETSELECTION_OFFSET UNITYSDK_OFFSET(0xA23B710)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0xA23B750)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_SELECTION_OFFSET UNITYSDK_OFFSET(0xA23B7E0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GETSELECTION_OFFSET UNITYSDK_OFFSET(0xA23B7A0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SETSELECTION_OFFSET UNITYSDK_OFFSET(0xA23B8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboard_TypeDefinitionIndex = 31204;

	class TouchScreenKeyboard : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::System::Boolean _disableInPlaceEditing_k__BackingField; // 0x0

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_DESTROY_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::TouchScreenKeyboardType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::TouchScreenKeyboardType*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Int32 TouchScreenKeyboard_InternalConstructorHelper(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPER_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean get_isSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISSUPPORTED_OFFSET))(nullptr);
		}

		::System::Boolean get_disableInPlaceEditing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_DISABLEINPLACEEDITING_OFFSET))(nullptr);
		}

		::System::Boolean get_isInPlaceEditingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISINPLACEEDITINGALLOWED_OFFSET))(nullptr);
		}

		::UnityEngine::TouchScreenKeyboard* Open(::System::String* str, ::UnityEngine::TouchScreenKeyboardType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TouchScreenKeyboard*(*)(::System::String*, ::UnityEngine::TouchScreenKeyboardType*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET))(str, arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::UnityEngine::TouchScreenKeyboard* Open(::System::String* str, ::UnityEngine::TouchScreenKeyboardType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TouchScreenKeyboard*(*)(::System::String*, ::UnityEngine::TouchScreenKeyboardType*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_hideInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_HIDEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_active(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_ACTIVE_OFFSET))(arg, nullptr);
		}

		Status* get_status()
		{
			return (return (Status*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_STATUS_OFFSET))(nullptr);
		}

		::System::Void set_characterLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_CHARACTERLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canGetSelection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANGETSELECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_canSetSelection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANSETSELECTION_OFFSET))(nullptr);
		}

		::UnityEngine::RangeInt* get_selection()
		{
			return (return (::UnityEngine::RangeInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_SELECTION_OFFSET))(nullptr);
		}

		::System::Void set_selection(::UnityEngine::RangeInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RangeInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_SELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void GetSelection(int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GETSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSelection(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SETSELECTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

