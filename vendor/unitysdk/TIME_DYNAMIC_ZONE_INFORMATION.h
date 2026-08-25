#pragma once
#include "unitysdk.h"

#define TIME_DYNAMIC_ZONE_INFORMATION_GETTIMEZONEKEYNAME_OFFSET UNITYSDK_OFFSET(0x911EFF0)

	inline static constexpr unsigned int TIME_DYNAMIC_ZONE_INFORMATION_TypeDefinitionIndex = 23531;

	class TIME_DYNAMIC_ZONE_INFORMATION : public Il2CppObject
	{
	public:
		::System::Int32 Bias; // 0x10
		<StandardName>e__FixedBuffer* StandardName; // 0x14
		SYSTEMTIME* StandardDate; // 0x54
		::System::Int32 StandardBias; // 0x64
		<DaylightName>e__FixedBuffer* DaylightName; // 0x68
		SYSTEMTIME* DaylightDate; // 0xA8
		::System::Int32 DaylightBias; // 0xB8
		<TimeZoneKeyName>e__FixedBuffer* TimeZoneKeyName; // 0xBC
		::System::Byte DynamicDaylightTimeDisabled; // 0x1BC

		::System::String* GetTimeZoneKeyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIME_DYNAMIC_ZONE_INFORMATION_GETTIMEZONEKEYNAME_OFFSET))(nullptr);
		}

	};

