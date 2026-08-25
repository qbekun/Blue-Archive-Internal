#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Switch::LowLevel { class SwitchProControllerHIDInputState; }

#define SWITCHINPUTONLYREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F3C580)

	inline static constexpr unsigned int SwitchInputOnlyReport_TypeDefinitionIndex = 28638;

	class SwitchInputOnlyReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::System::Byte buttons0; // 0x10
		::System::Byte buttons1; // 0x11
		::System::Byte hat; // 0x12
		::System::Byte leftX; // 0x13
		::System::Byte leftY; // 0x14
		::System::Byte rightX; // 0x15
		::System::Byte rightY; // 0x16

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHINPUTONLYREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

	};

