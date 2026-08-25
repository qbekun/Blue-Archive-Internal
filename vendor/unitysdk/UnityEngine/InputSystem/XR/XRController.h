#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::XR { class XRController; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_LEFTHAND_OFFSET UNITYSDK_OFFSET(0x9F231C0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F23260)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F233F0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_RIGHTHAND_OFFSET UNITYSDK_OFFSET(0x9F23400)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRController_TypeDefinitionIndex = 28573;

	class XRController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::XR::XRController* get_leftHand()
		{
			return (return (::UnityEngine::InputSystem::XR::XRController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_LEFTHAND_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::XRController* get_rightHand()
		{
			return (return (::UnityEngine::InputSystem::XR::XRController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_RIGHTHAND_OFFSET))(nullptr);
		}

	};
}

