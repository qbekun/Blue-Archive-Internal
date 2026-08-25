#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Switch::LowLevel { class SwitchProControllerHIDInputState; }

#define SWITCHFULLINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F3CB50)

	inline static constexpr unsigned int SwitchFullInputReport_TypeDefinitionIndex = 28640;

	class SwitchFullInputReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::System::Byte ExpectedReportId; // 0x0
		::System::Byte reportId; // 0x10
		::System::Byte buttons0; // 0x13
		::System::Byte buttons1; // 0x14
		::System::Byte buttons2; // 0x15
		::System::Byte left0; // 0x16
		::System::Byte left1; // 0x17
		::System::Byte left2; // 0x18
		::System::Byte right0; // 0x19
		::System::Byte right1; // 0x1A
		::System::Byte right2; // 0x1B

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHFULLINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

	};

