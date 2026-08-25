#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_DAYLIGHTTIMESTRUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9265150)

namespace System::Globalization
{
	inline static constexpr unsigned int DaylightTimeStruct_TypeDefinitionIndex = 24964;

	class DaylightTimeStruct : public Il2CppObject
	{
	public:
		::System::DateTime* Start; // 0x10
		::System::DateTime* End; // 0x18
		::System::TimeSpan* Delta; // 0x20

		::System::Void .ctor(::System::DateTime* arg, ::System::DateTime* arg, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIMESTRUCT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

