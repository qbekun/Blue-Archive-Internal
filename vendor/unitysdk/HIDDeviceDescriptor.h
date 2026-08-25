#pragma once
#include "unitysdk.h"

#define HIDDEVICEDESCRIPTOR_TOJSON_OFFSET UNITYSDK_OFFSET(0x9F44E80)
#define HIDDEVICEDESCRIPTOR_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9F44EF0)

	inline static constexpr unsigned int HIDDeviceDescriptor_TypeDefinitionIndex = 28663;

	class HIDDeviceDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 vendorId; // 0x10
		::System::Int32 productId; // 0x14
		::System::Int32 usage; // 0x18
		UsagePage* usagePage; // 0x1C
		::System::Int32 inputReportSize; // 0x20
		::System::Int32 outputReportSize; // 0x24
		::System::Int32 featureReportSize; // 0x28
		::Il2CppArray<::System::Object*>* elements; // 0x30
		::Il2CppArray<::System::Object*>* collections; // 0x38

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTOR_TOJSON_OFFSET))(nullptr);
		}

		HIDDeviceDescriptor* FromJson(::System::String* str)
		{
			return (return (HIDDeviceDescriptor*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTOR_FROMJSON_OFFSET))(str, nullptr);
		}

	};

