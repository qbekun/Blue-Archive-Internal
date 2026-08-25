#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDOutputReportPayload; }
namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDBluetoothOutputReport; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F53F40)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F54010)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F53FD0)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDBluetoothOutputReport_TypeDefinitionIndex = 28703;

	class DualSenseHIDBluetoothOutputReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::System::Byte tag1; // 0x19
		::System::Byte tag2; // 0x1A
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload* payload; // 0x1B
		::System::UInt32 crc32; // 0x62
		<rawData>e__FixedBuffer* rawData; // 0x18

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDBluetoothOutputReport* Create(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload* arg, ::System::Byte arg)
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDBluetoothOutputReport*(*)(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

