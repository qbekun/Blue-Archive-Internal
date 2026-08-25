#pragma once
#include "unitysdk.h"

#define DEVICEJSON_TODEVICEENTRY_OFFSET UNITYSDK_OFFSET(0x9E93830)
#define DEVICEJSON_FROM_OFFSET UNITYSDK_OFFSET(0x9E93A60)

	inline static constexpr unsigned int DeviceJson_TypeDefinitionIndex = 28448;

	class DeviceJson : public Il2CppObject
	{
	public:
		::System::String* devicePath; // 0x10
		::System::Boolean isOptional; // 0x18
		::System::Boolean isOR; // 0x19

		DeviceRequirement* ToDeviceEntry()
		{
			return (return (DeviceRequirement*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEJSON_TODEVICEENTRY_OFFSET))(nullptr);
		}

		DeviceJson* From(DeviceRequirement* arg)
		{
			return (return (DeviceJson*(*)(DeviceRequirement*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEJSON_FROM_OFFSET))(arg, nullptr);
		}

	};

