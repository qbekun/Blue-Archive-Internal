#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_BACK_OFFSET UNITYSDK_OFFSET(0x9E3F010)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3F020)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3F030)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3F040)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_BACK_OFFSET UNITYSDK_OFFSET(0x9E3F060)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3F080)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusHMDExtended_TypeDefinitionIndex = 28366;

	class OculusHMDExtended : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x230

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_BACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_TOUCHPAD_OFFSET))(nullptr);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_TOUCHPAD_OFFSET))(arg, nullptr);
		}

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_BACK_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_FINISHSETUP_OFFSET))(nullptr);
		}

	};
}

