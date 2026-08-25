#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define LEAN_COMMON_LEANINPUT_GETMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1EB2EA0)
#define LEAN_COMMON_LEANINPUT_GETMOUSEPRESSED_OFFSET UNITYSDK_OFFSET(0x1EB2E20)
#define LEAN_COMMON_LEANINPUT_GETUP_OFFSET UNITYSDK_OFFSET(0x1EB4770)
#define LEAN_COMMON_LEANINPUT_GETPRESSED_OFFSET UNITYSDK_OFFSET(0x1EB3010)
#define LEAN_COMMON_LEANINPUT_GETDOWN_OFFSET UNITYSDK_OFFSET(0x1EB4A80)
#define LEAN_COMMON_LEANINPUT_GETMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1EB4B00)
#define LEAN_COMMON_LEANINPUT_GETKEYBOARDEXISTS_OFFSET UNITYSDK_OFFSET(0x1EB2FD0)
#define LEAN_COMMON_LEANINPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1EB27B0)
#define LEAN_COMMON_LEANINPUT_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB2F20)
#define LEAN_COMMON_LEANINPUT_GETBUTTONCONTROL_OFFSET UNITYSDK_OFFSET(0x1EB47F0)
#define LEAN_COMMON_LEANINPUT_GETMOUSEWHEELDELTA_OFFSET UNITYSDK_OFFSET(0x1EAA3B0)
#define LEAN_COMMON_LEANINPUT_GETMOUSEEXISTS_OFFSET UNITYSDK_OFFSET(0x1EB2DE0)
#define LEAN_COMMON_LEANINPUT_GETMOUSEBUTTONCONTROL_OFFSET UNITYSDK_OFFSET(0x1EB45F0)
#define LEAN_COMMON_LEANINPUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4B80)
#define LEAN_COMMON_LEANINPUT_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1EB2720)

namespace Lean::Common
{
	inline static constexpr unsigned int LeanInput_TypeDefinitionIndex = 21262;

	class LeanInput : public Il2CppObject
	{
	public:
		Il2CppObject* keyMapping; // 0x0

		::System::Boolean GetMouseUp(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMousePressed(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetUp(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetPressed(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetDown(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseDown(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyboardExists()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETKEYBOARDEXISTS_OFFSET))(nullptr);
		}

		::System::Void GetTouch(::System::Int32 arg, int32_t&* arg, ::UnityEngine::Vector2&* arg, float&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, ::UnityEngine::Vector2&*, float&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETTOUCH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* GetButtonControl(::UnityEngine::KeyCode* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETBUTTONCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Single GetMouseWheelDelta()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEWHEELDELTA_OFFSET))(nullptr);
		}

		::System::Boolean GetMouseExists()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEEXISTS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* GetMouseButtonControl(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETMOUSEBUTTONCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetTouchCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANINPUT_GETTOUCHCOUNT_OFFSET))(nullptr);
		}

	};
}

