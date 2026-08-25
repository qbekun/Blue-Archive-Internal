#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F54050)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F540A0)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShock4HIDInputReport_TypeDefinitionIndex = 28704;

	class DualShock4HIDInputReport : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::FourCC* Format; // 0x0
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::Byte buttons1; // 0x14
		::System::Byte buttons2; // 0x15
		::System::Byte buttons3; // 0x16
		::System::Byte leftTrigger; // 0x17
		::System::Byte rightTrigger; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

