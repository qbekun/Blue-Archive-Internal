#pragma once
#include "unitysdk.h"

#define REG_TZI_FORMAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x911EF40)

	inline static constexpr unsigned int REG_TZI_FORMAT_TypeDefinitionIndex = 23526;

	class REG_TZI_FORMAT : public Il2CppObject
	{
	public:
		::System::Int32 Bias; // 0x10
		::System::Int32 StandardBias; // 0x14
		::System::Int32 DaylightBias; // 0x18
		SYSTEMTIME* StandardDate; // 0x1C
		SYSTEMTIME* DaylightDate; // 0x2C

		::System::Void .ctor(TIME_ZONE_INFORMATION&* arg)
		{
			((::System::Void(*)(TIME_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + REG_TZI_FORMAT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

