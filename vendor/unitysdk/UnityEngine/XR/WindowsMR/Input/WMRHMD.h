#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3FA40)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3FA50)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_GET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x9E3FAC0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_SET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x9E3FAD0)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int WMRHMD_TypeDefinitionIndex = 28370;

	class WMRHMD : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField; // 0x1C0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_GET_USERPRESENCE_OFFSET))(nullptr);
		}

		::System::Void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_SET_USERPRESENCE_OFFSET))(arg, nullptr);
		}

	};
}

