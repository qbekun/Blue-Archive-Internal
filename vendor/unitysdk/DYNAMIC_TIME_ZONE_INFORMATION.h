#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int DYNAMIC_TIME_ZONE_INFORMATION_TypeDefinitionIndex = 23669;

	class DYNAMIC_TIME_ZONE_INFORMATION : public Il2CppObject
	{
	public:
		TIME_ZONE_INFORMATION* TZI; // 0x10
		::System::String* TimeZoneKeyName; // 0xC0
		::System::Byte DynamicDaylightTimeDisabled; // 0xC8

	};

