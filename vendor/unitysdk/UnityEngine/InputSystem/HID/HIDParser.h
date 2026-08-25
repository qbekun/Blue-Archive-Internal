#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9F472E0)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9F47360)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_READDATA_OFFSET UNITYSDK_OFFSET(0x9F48E50)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDParser_TypeDefinitionIndex = 28675;

	class HIDParser : public Il2CppObject
	{
	public:
		::System::Boolean ParseReportDescriptor(::Il2CppArray<::System::Object*>* arg, HIDDeviceDescriptor&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, HIDDeviceDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ParseReportDescriptor(::System::Object** arg, ::System::Int32 arg, HIDDeviceDescriptor&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, HIDDeviceDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadData(::System::Int32 arg, ::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_READDATA_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

