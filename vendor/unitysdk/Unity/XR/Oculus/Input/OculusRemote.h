#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3EE80)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET UNITYSDK_OFFSET(0x9E3EEA0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3EEC0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET UNITYSDK_OFFSET(0x9E3EFB0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET UNITYSDK_OFFSET(0x9E3EFC0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3EFD0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET UNITYSDK_OFFSET(0x9E3EFE0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3F000)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusRemote_TypeDefinitionIndex = 28365;

	class OculusRemote : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::ButtonControl* _start_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x180

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET))(arg, nullptr);
		}

		::System::Void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_start()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET))(nullptr);
		}

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

