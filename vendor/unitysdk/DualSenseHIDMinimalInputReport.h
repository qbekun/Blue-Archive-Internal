#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualSenseHIDInputReport; }

#define DUALSENSEHIDMINIMALINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F52600)
#define DUALSENSEHIDMINIMALINPUTREPORT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F52630)

	inline static constexpr unsigned int DualSenseHIDMinimalInputReport_TypeDefinitionIndex = 28692;

	class DualSenseHIDMinimalInputReport : public Il2CppObject
	{
	public:
		::System::Int32 ExpectedSize1; // 0x0
		::System::Int32 ExpectedSize2; // 0x4
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x11
		::System::Byte leftStickY; // 0x12
		::System::Byte rightStickX; // 0x13
		::System::Byte rightStickY; // 0x14
		::System::Byte buttons0; // 0x15
		::System::Byte buttons1; // 0x16
		::System::Byte buttons2; // 0x17
		::System::Byte leftTrigger; // 0x18
		::System::Byte rightTrigger; // 0x19

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSENSEHIDMINIMALINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSENSEHIDMINIMALINPUTREPORT_.CCTOR_OFFSET))(nullptr);
		}

	};

