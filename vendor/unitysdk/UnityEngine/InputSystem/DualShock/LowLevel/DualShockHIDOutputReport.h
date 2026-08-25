#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine { class Color; }
namespace UnityEngine::InputSystem::DualShock::LowLevel { class DualShockHIDOutputReport; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F54150)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x9F52870)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F527A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9F52800)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F54190)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShockHIDOutputReport_TypeDefinitionIndex = 28710;

	class DualShockHIDOutputReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::System::Int32 kReportId; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::System::Byte flags; // 0x19
		<unknown1>e__FixedBuffer* unknown1; // 0x1A
		::System::Byte highFrequencyMotorSpeed; // 0x1C
		::System::Byte lowFrequencyMotorSpeed; // 0x1D
		::System::Byte redColor; // 0x1E
		::System::Byte greenColor; // 0x1F
		::System::Byte blueColor; // 0x20
		<unknown2>e__FixedBuffer* unknown2; // 0x21

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void SetColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport* Create()
		{
			return (return (::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_CREATE_OFFSET))(nullptr);
		}

		::System::Void SetMotorSpeeds(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETMOTORSPEEDS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

