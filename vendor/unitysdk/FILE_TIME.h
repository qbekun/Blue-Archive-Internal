#pragma once
#include "unitysdk.h"

#define FILE_TIME_TOTICKS_OFFSET UNITYSDK_OFFSET(0x911F040)
#define FILE_TIME_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x911F050)

	inline static constexpr unsigned int FILE_TIME_TypeDefinitionIndex = 23537;

	class FILE_TIME : public Il2CppObject
	{
	public:
		::System::UInt32 dwLowDateTime; // 0x10
		::System::UInt32 dwHighDateTime; // 0x14

		::System::Int64 ToTicks()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FILE_TIME_TOTICKS_OFFSET))(nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset()
		{
			return (return (::System::DateTimeOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILE_TIME_TODATETIMEOFFSET_OFFSET))(nullptr);
		}

	};

