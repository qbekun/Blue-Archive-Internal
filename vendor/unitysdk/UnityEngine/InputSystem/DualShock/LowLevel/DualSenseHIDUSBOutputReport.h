#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDOutputReportPayload; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDUSBOutputReport; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F53EB0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F51B70)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F53F00)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDUSBOutputReport_TypeDefinitionIndex = 28701;

	class DualSenseHIDUSBOutputReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload* payload; // 0x19

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDUSBOutputReport* Create(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload* arg)
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDUSBOutputReport*(*)(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

