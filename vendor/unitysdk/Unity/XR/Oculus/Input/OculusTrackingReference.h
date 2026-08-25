#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x9E3ED50)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x9E3ED70)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3ED90)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x9E3EDA0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3EDB0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x9E3EE70)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusTrackingReference_TypeDefinitionIndex = 28364;

	class OculusTrackingReference : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x198

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_TRACKINGSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_ISTRACKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_TRACKINGSTATE_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_ISTRACKED_OFFSET))(nullptr);
		}

	};
}

