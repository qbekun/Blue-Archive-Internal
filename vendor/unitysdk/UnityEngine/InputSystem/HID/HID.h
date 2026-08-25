#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription&; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORSIZEDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x9F40B50)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F40B90)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_READHIDDEVICEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9F40BA0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x9F415C0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDPARSEDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x9F41600)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F41640)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_HIDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9F42040)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_USAGETOSTRING_OFFSET UNITYSDK_OFFSET(0x9F42100)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_USAGEPAGETOSTRING_OFFSET UNITYSDK_OFFSET(0x9F42180)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_TypeDefinitionIndex = 28670;

	class HID : public Il2CppObject
	{
	public:
		::System::String* kHIDInterface; // 0x0
		::System::String* kHIDNamespace; // 0x0
		::System::Boolean m_HaveParsedHIDDescriptor; // 0x170
		HIDDeviceDescriptor* m_HIDDescriptor; // 0x178

		::UnityEngine::InputSystem::Utilities::FourCC* get_QueryHIDReportDescriptorSizeDeviceCommandType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORSIZEDEVICECOMMANDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_.CTOR_OFFSET))(nullptr);
		}

		HIDDeviceDescriptor* ReadHIDDeviceDescriptor(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* arg)
		{
			return (return (HIDDeviceDescriptor*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_READHIDDEVICEDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_QueryHIDReportDescriptorDeviceCommandType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_QueryHIDParsedReportDescriptorDeviceCommandType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDPARSEDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET))(nullptr);
		}

		::System::String* OnFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::System::String* str, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_ONFINDLAYOUTFORDEVICE_OFFSET))(arg, str, arg, nullptr);
		}

		HIDDeviceDescriptor* get_hidDescriptor()
		{
			return (return (HIDDeviceDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_HIDDESCRIPTOR_OFFSET))(nullptr);
		}

		::System::String* UsageToString(UsagePage* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(UsagePage*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_USAGETOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* UsagePageToString(UsagePage* arg)
		{
			return (return (::System::String*(*)(UsagePage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_USAGEPAGETOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

