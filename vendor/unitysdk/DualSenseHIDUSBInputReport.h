#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDInputReport; }

#define DUALSENSEHIDUSBINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F525A0)

	inline static constexpr unsigned int DualSenseHIDUSBInputReport_TypeDefinitionIndex = 28690;

	class DualSenseHIDUSBInputReport : public Il2CppObject
	{
	public:
		::System::Int32 ExpectedReportId; // 0x0
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x11
		::System::Byte leftStickY; // 0x12
		::System::Byte rightStickX; // 0x13
		::System::Byte rightStickY; // 0x14
		::System::Byte leftTrigger; // 0x15
		::System::Byte rightTrigger; // 0x16
		::System::Byte buttons0; // 0x18
		::System::Byte buttons1; // 0x19
		::System::Byte buttons2; // 0x1A

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSENSEHIDUSBINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

	};

