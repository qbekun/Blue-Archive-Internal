#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_AIRTAP_OFFSET UNITYSDK_OFFSET(0x9E3FAF0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_AIRTAP_OFFSET UNITYSDK_OFFSET(0x9E3FB10)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x9E3FB20)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3FB30)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x9E3FB50)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3FB70)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3FB80)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3FCB0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x9E3FCC0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x9E3FCE0)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int HololensHand_TypeDefinitionIndex = 28371;

	class HololensHand : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _airTap_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField; // 0x1A8

		::System::Void set_airTap(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_AIRTAP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_airTap()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_AIRTAP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSRISK_OFFSET))(nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSRISK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(nullptr);
		}

	};
}

