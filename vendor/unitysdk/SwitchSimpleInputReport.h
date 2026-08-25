#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Switch::LowLevel { class SwitchProControllerHIDInputState; }

#define SWITCHSIMPLEINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F3C7B0)

	inline static constexpr unsigned int SwitchSimpleInputReport_TypeDefinitionIndex = 28639;

	class SwitchSimpleInputReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::System::Byte ExpectedReportId; // 0x0
		::System::Byte reportId; // 0x10
		::System::Byte buttons0; // 0x11
		::System::Byte buttons1; // 0x12
		::System::Byte hat; // 0x13
		::System::UInt16 leftX; // 0x14
		::System::UInt16 leftY; // 0x16
		::System::UInt16 rightX; // 0x18
		::System::UInt16 rightY; // 0x1A

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHSIMPLEINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

	};

