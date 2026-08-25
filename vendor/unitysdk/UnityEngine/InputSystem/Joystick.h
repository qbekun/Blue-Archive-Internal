#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem { class Joystick; }

#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_HATSWITCH_OFFSET UNITYSDK_OFFSET(0x9EA7CE0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9EA7D00)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EA7E30)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EA7F70)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_STICK_OFFSET UNITYSDK_OFFSET(0x9EA7FC0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONADDED_OFFSET UNITYSDK_OFFSET(0x9EA7FD0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA8040)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x9EA8090)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x9EA80A0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA80C0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9EA8100)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_STICK_OFFSET UNITYSDK_OFFSET(0x9EA8110)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9EA8130)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA8150)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_ALL_OFFSET UNITYSDK_OFFSET(0x9EA81C0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_HATSWITCH_OFFSET UNITYSDK_OFFSET(0x9EA8230)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Joystick_TypeDefinitionIndex = 28489;

	class Joystick : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _trigger_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::StickControl* _stick_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector2Control* _hatswitch_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Joystick* _current_k__BackingField; // 0x0
		::System::Int32 s_JoystickCount; // 0x8
		::Il2CppArray<::System::Object*>* s_Joysticks; // 0x10

		::System::Void set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_HATSWITCH_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_MAKECURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_stick()
		{
			return (return (::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_STICK_OFFSET))(nullptr);
		}

		::System::Void OnAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONADDED_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Joystick* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Joystick*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_twist()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TWIST_OFFSET))(nullptr);
		}

		::System::Void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TWIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Joystick* get_current()
		{
			return (return (::UnityEngine::InputSystem::Joystick*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_stick(::UnityEngine::InputSystem::Controls::StickControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::StickControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_STICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_all()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_ALL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_hatswitch()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_HATSWITCH_OFFSET))(nullptr);
		}

	};
}

