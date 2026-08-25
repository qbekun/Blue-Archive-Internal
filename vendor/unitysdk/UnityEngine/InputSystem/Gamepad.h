#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DpadControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }
namespace UnityEngine::InputSystem { class Gamepad; }
namespace UnityEngine::InputSystem::Haptics { class DualMotorRumble; }
namespace UnityEngine::InputSystem::LowLevel { class GamepadButton; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ABUTTON_OFFSET UNITYSDK_OFFSET(0x9EA50A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x9EA50B0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_TRIANGLEBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA50D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONEAST_OFFSET UNITYSDK_OFFSET(0x9EA50E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x9EA5100)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EA5110)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_DPAD_OFFSET UNITYSDK_OFFSET(0x9EA5170)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9EA5190)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5520)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9EA5540)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_SELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5560)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA5580)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONADDED_OFFSET UNITYSDK_OFFSET(0x9EA55D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x9EA5640)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EA5660)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA57A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ALL_OFFSET UNITYSDK_OFFSET(0x9EA57B0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x9EA5820)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5840)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONEAST_OFFSET UNITYSDK_OFFSET(0x9EA5860)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x9EA5870)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x9EA5880)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9EA58A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONWEST_OFFSET UNITYSDK_OFFSET(0x9EA58C0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x9EA58D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CROSSBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA58E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA58F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x9EA5900)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EA5920)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x9EA5AC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA5AD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x9EA5BB0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x9EA5BD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_YBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5BE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5BF0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9EA5C00)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x9EA5C30)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA5C40)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SQUAREBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5C80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5C90)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5CA0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x9EA5CC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x9EA5CD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x9EA5CE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_XBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5D00)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONWEST_OFFSET UNITYSDK_OFFSET(0x9EA5D10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x9EA5D30)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5D50)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x9EA5D60)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x9EA5D70)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CIRCLEBUTTON_OFFSET UNITYSDK_OFFSET(0x9EA5D90)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gamepad_TypeDefinitionIndex = 28484;

	class Gamepad : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonWest_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonNorth_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonSouth_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonEast_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftStickButton_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightStickButton_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _startButton_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _selectButton_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::DpadControl* _dpad_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftShoulder_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightShoulder_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::StickControl* _leftStick_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::StickControl* _rightStick_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTrigger_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTrigger_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Gamepad* _current_k__BackingField; // 0x0
		::UnityEngine::InputSystem::Haptics::DualMotorRumble* m_Rumble; // 0x1E8
		::System::Int32 s_GamepadCount; // 0x8
		::Il2CppArray<::System::Object*>* s_Gamepads; // 0x10

		::UnityEngine::InputSystem::Controls::ButtonControl* get_aButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ABUTTON_OFFSET))(nullptr);
		}

		::System::Void ResetHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESETHAPTICS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triangleButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_TRIANGLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_buttonEast(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONEAST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonSouth()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONSOUTH_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void set_dpad(::UnityEngine::InputSystem::Controls::DpadControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::DpadControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_DPAD_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_rightStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICKBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void ResumeHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESUMEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void set_selectButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_SELECTBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Gamepad* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Gamepad*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONADDED_OFFSET))(nullptr);
		}

		::System::Void set_leftTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightStickButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICKBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_all()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ALL_OFFSET))(nullptr);
		}

		::System::Void set_buttonSouth(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONSOUTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_leftStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICKBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonEast()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONEAST_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTrigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_buttonNorth(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONNORTH_OFFSET))(arg, nullptr);
		}

		::System::Void PauseHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_PAUSEHAPTICS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonWest()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONWEST_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_leftStick()
		{
			return (return (::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_crossButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CROSSBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_bButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_rightStick(::UnityEngine::InputSystem::Controls::StickControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::StickControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::LowLevel::GamepadButton* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::LowLevel::GamepadButton*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::DpadControl* get_dpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::DpadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_DPAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_rightShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSHOULDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTrigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTTRIGGER_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_yButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_YBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftStickButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetMotorSpeeds(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SETMOTORSPEEDS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_rightStick()
		{
			return (return (::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Gamepad* get_current()
		{
			return (return (::UnityEngine::InputSystem::Gamepad*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_squareButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SQUAREBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_startButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_STARTBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_startButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_STARTBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonNorth()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONNORTH_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightShoulder()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSHOULDER_OFFSET))(nullptr);
		}

		::System::Void set_leftStick(::UnityEngine::InputSystem::Controls::StickControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::StickControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_xButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_XBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_buttonWest(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONWEST_OFFSET))(arg, nullptr);
		}

		::System::Void set_rightTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTTRIGGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_selectButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SELECTBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftShoulder()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSHOULDER_OFFSET))(nullptr);
		}

		::System::Void set_leftShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSHOULDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_circleButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CIRCLEBUTTON_OFFSET))(nullptr);
		}

	};
}

