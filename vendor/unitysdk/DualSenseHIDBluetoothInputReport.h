#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDInputReport; }

#define DUALSENSEHIDBLUETOOTHINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F525D0)

	inline static constexpr unsigned int DualSenseHIDBluetoothInputReport_TypeDefinitionIndex = 28691;

	class DualSenseHIDBluetoothInputReport : public Il2CppObject
	{
	public:
		::System::Int32 ExpectedReportId; // 0x0
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x12
		::System::Byte leftStickY; // 0x13
		::System::Byte rightStickX; // 0x14
		::System::Byte rightStickY; // 0x15
		::System::Byte leftTrigger; // 0x16
		::System::Byte rightTrigger; // 0x17
		::System::Byte buttons0; // 0x19
		::System::Byte buttons1; // 0x1A
		::System::Byte buttons2; // 0x1B

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSENSEHIDBLUETOOTHINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

	};

