#pragma once
#include "unitysdk.h"

#define TIME_ZONE_INFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x911F010)
#define TIME_ZONE_INFORMATION_GETSTANDARDNAME_OFFSET UNITYSDK_OFFSET(0x911F020)
#define TIME_ZONE_INFORMATION_GETDAYLIGHTNAME_OFFSET UNITYSDK_OFFSET(0x911F030)

	inline static constexpr unsigned int TIME_ZONE_INFORMATION_TypeDefinitionIndex = 23534;

	class TIME_ZONE_INFORMATION : public Il2CppObject
	{
	public:
		::System::Int32 Bias; // 0x10
		<StandardName>e__FixedBuffer* StandardName; // 0x14
		SYSTEMTIME* StandardDate; // 0x54
		::System::Int32 StandardBias; // 0x64
		<DaylightName>e__FixedBuffer* DaylightName; // 0x68
		SYSTEMTIME* DaylightDate; // 0xA8
		::System::Int32 DaylightBias; // 0xB8

		::System::Void .ctor(TIME_DYNAMIC_ZONE_INFORMATION&* arg)
		{
			((::System::Void(*)(TIME_DYNAMIC_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + TIME_ZONE_INFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetStandardName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIME_ZONE_INFORMATION_GETSTANDARDNAME_OFFSET))(nullptr);
		}

		::System::String* GetDaylightName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIME_ZONE_INFORMATION_GETDAYLIGHTNAME_OFFSET))(nullptr);
		}

	};

