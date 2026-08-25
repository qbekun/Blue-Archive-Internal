#pragma once
#include "../unitysdk.h"

#define SYSTEM_DATETIMERAWINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9350BE0)
#define SYSTEM_DATETIMERAWINFO_ADDNUMBER_OFFSET UNITYSDK_OFFSET(0x9350C10)
#define SYSTEM_DATETIMERAWINFO_GETNUMBER_OFFSET UNITYSDK_OFFSET(0x9350C30)

namespace System
{
	inline static constexpr unsigned int DateTimeRawInfo_TypeDefinitionIndex = 23754;

	class DateTimeRawInfo : public Il2CppObject
	{
	public:
		::System::Object** num; // 0x10
		::System::Int32 numCount; // 0x18
		::System::Int32 month; // 0x1C
		::System::Int32 year; // 0x20
		::System::Int32 dayOfWeek; // 0x24
		::System::Int32 era; // 0x28
		TM* timeMark; // 0x2C
		::System::Double fraction; // 0x30
		::System::Boolean hasSameDateAndTimeSeparators; // 0x38

		::System::Void Init(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERAWINFO_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void AddNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERAWINFO_ADDNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNumber(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERAWINFO_GETNUMBER_OFFSET))(arg, nullptr);
		}

	};
}

