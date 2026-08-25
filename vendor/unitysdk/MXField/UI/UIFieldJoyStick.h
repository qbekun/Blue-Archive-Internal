#pragma once
#include "../../unitysdk.h"

class UIWidget;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Touch; }

#define MXFIELD_UI_UIFIELDJOYSTICK_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xEA39F0)
#define MXFIELD_UI_UIFIELDJOYSTICK_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xEA3A20)
#define MXFIELD_UI_UIFIELDJOYSTICK_GET_POWER_OFFSET UNITYSDK_OFFSET(0xEA3B70)
#define MXFIELD_UI_UIFIELDJOYSTICK_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xEA3C90)
#define MXFIELD_UI_UIFIELDJOYSTICK_GET_ISKEYBOARDACTIVATED_OFFSET UNITYSDK_OFFSET(0xEA3CD0)
#define MXFIELD_UI_UIFIELDJOYSTICK_UPDATE_OFFSET UNITYSDK_OFFSET(0xEA3CE0)
#define MXFIELD_UI_UIFIELDJOYSTICK_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0xEA3F70)
#define MXFIELD_UI_UIFIELDJOYSTICK_PROCESSKEYBOARDDIRECTION_OFFSET UNITYSDK_OFFSET(0xEA4180)
#define MXFIELD_UI_UIFIELDJOYSTICK_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA43A0)
#define MXFIELD_UI_UIFIELDJOYSTICK_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA43F0)
#define MXFIELD_UI_UIFIELDJOYSTICK_KEYBOARDACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA4520)
#define MXFIELD_UI_UIFIELDJOYSTICK_FORCEIDLE_OFFSET UNITYSDK_OFFSET(0xEA3ED0)
#define MXFIELD_UI_UIFIELDJOYSTICK_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA4680)
#define MXFIELD_UI_UIFIELDJOYSTICK_ISMYTOUCH_OFFSET UNITYSDK_OFFSET(0xEA46C0)
#define MXFIELD_UI_UIFIELDJOYSTICK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA46E0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldJoyStick_TypeDefinitionIndex = 10750;

	class UIFieldJoyStick : public Il2CppObject
	{
	public:
		::System::Single elasticity; // 0x18
		UIWidget* root; // 0x20
		UIWidget* stick; // 0x28
		UIWidget* stickArea; // 0x30
		UIWidget* deco; // 0x38
		::System::Boolean isKeyboardActivated; // 0x40
		::System::Int32 touchId; // 0x44

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_GET_RADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Single get_Power()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_GET_POWER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_GET_ISACTIVATED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsKeyboardActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_GET_ISKEYBOARDACTIVATED_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ProcessInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_PROCESSINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessKeyboardDirection(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_PROCESSKEYBOARDDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::UnityEngine::Touch* arg)
		{
			((::System::Void(*)(::UnityEngine::Touch*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void KeyboardActivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_KEYBOARDACTIVATE_OFFSET))(nullptr);
		}

		::System::Void ForceIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_FORCEIDLE_OFFSET))(nullptr);
		}

		::System::Void Deactivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_DEACTIVATE_OFFSET))(nullptr);
		}

		::System::Boolean IsMyTouch(::UnityEngine::Touch* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Touch*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_ISMYTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDJOYSTICK_.CTOR_OFFSET))(nullptr);
		}

	};
}

