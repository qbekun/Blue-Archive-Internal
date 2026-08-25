#pragma once
#include "../../unitysdk.h"

class UIWidget;
class MXButton;
namespace MXField::UI { class UIFieldJoyStick; }
namespace MXField::UI { class UIFieldRotationInput; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define MXFIELD_UI_UIFIELDPLAYERINPUT_PROCESSKEYBOARDINPUT_OFFSET UNITYSDK_OFFSET(0xEA46F0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_UPDATE_OFFSET UNITYSDK_OFFSET(0xEA4980)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_GET_JOYSTICKDIRECTION_OFFSET UNITYSDK_OFFSET(0xEA5DE0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_ISINROTATIONAREA_OFFSET UNITYSDK_OFFSET(0xEA5E00)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEA5EA0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_GET_ROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0xEA5ED0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_COMPUTEKEYBOARDINPUT_OFFSET UNITYSDK_OFFSET(0xEA4780)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_GET_BLOCKPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xEA5EF0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xE91DE0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_START_OFFSET UNITYSDK_OFFSET(0xEA5F00)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_PROCESSTOUCHINPUT_OFFSET UNITYSDK_OFFSET(0xEA51D0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA61F0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_ONCLICKTOUCHAREA_OFFSET UNITYSDK_OFFSET(0xEA6200)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_ISINJOYSTICKAREA_OFFSET UNITYSDK_OFFSET(0xEA6080)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_PROCESSMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0xEA4DB0)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_GET_JOYSTICKPOWER_OFFSET UNITYSDK_OFFSET(0xEA6260)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xEA6280)
#define MXFIELD_UI_UIFIELDPLAYERINPUT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xEA6290)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldPlayerInput_TypeDefinitionIndex = 10751;

	class UIFieldPlayerInput : public Il2CppObject
	{
	public:
		UIWidget* joystickArea; // 0xE8
		UIWidget* rotationArea; // 0xF0
		MXButton* touchArea; // 0xF8
		::MXField::UI::UIFieldJoyStick* joyStick; // 0x100
		::MXField::UI::UIFieldRotationInput* rotationInput; // 0x108
		::System::Boolean isInputBlocked; // 0x110
		::System::Action* TouchAreaClickEvent; // 0x118

		::System::Void ProcessKeyboardInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_PROCESSKEYBOARDINPUT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_JoystickDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_GET_JOYSTICKDIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean IsInRotationArea(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_ISINROTATIONAREA_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_RotationDelta()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_GET_ROTATIONDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ComputeKeyboardInput()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_COMPUTEKEYBOARDINPUT_OFFSET))(nullptr);
		}

		::System::Boolean get_BlockPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_GET_BLOCKPLAYERINPUT_OFFSET))(nullptr);
		}

		::System::Void Activate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_START_OFFSET))(nullptr);
		}

		::System::Void ProcessTouchInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_PROCESSTOUCHINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickTouchArea()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_ONCLICKTOUCHAREA_OFFSET))(nullptr);
		}

		::System::Boolean IsInJoystickArea(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_ISINJOYSTICKAREA_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessMouseInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_PROCESSMOUSEINPUT_OFFSET))(nullptr);
		}

		::System::Single get_JoystickPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_GET_JOYSTICKPOWER_OFFSET))(nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_SETVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDPLAYERINPUT_ONCLOSED_OFFSET))(nullptr);
		}

	};
}

