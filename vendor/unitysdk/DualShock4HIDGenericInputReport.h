#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualShock4HIDInputReport; }

#define DUALSHOCK4HIDGENERICINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F52EB0)
#define DUALSHOCK4HIDGENERICINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x9F53820)

	inline static constexpr unsigned int DualShock4HIDGenericInputReport_TypeDefinitionIndex = 28694;

	class DualShock4HIDGenericInputReport : public Il2CppObject
	{
	public:
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::Byte buttons0; // 0x14
		::System::Byte buttons1; // 0x15
		::System::Byte buttons2; // 0x16
		::System::Byte leftTrigger; // 0x17
		::System::Byte rightTrigger; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSHOCK4HIDGENERICINPUTREPORT_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::DualShock::LowLevel::DualShock4HIDInputReport* ToHIDInputReport()
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualShock4HIDInputReport*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSHOCK4HIDGENERICINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(nullptr);
		}

	};

