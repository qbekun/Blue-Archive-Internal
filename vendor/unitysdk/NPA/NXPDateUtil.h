#pragma once
#include "../unitysdk.h"

#define NPA_NXPDATEUTIL_GETCURRENTTIMEZONEOFFSET_OFFSET UNITYSDK_OFFSET(0x9BC3CD0)
#define NPA_NXPDATEUTIL_GETTODAYDATESTRING_OFFSET UNITYSDK_OFFSET(0x9BC3DB0)
#define NPA_NXPDATEUTIL_GETCURRENTTIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x9BC3E10)
#define NPA_NXPDATEUTIL_ADDHOUR_OFFSET UNITYSDK_OFFSET(0x9BC3E70)
#define NPA_NXPDATEUTIL_ISVALIDDATETIME_OFFSET UNITYSDK_OFFSET(0x9BC4000)
#define NPA_NXPDATEUTIL_GETDATETIMEAFTERHOURFROMCURRENTDATETIME_OFFSET UNITYSDK_OFFSET(0x9BC4170)
#define NPA_NXPDATEUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC41F0)
#define NPA_NXPDATEUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC4200)

namespace NPA
{
	inline static constexpr unsigned int NXPDateUtil_TypeDefinitionIndex = 25584;

	class NXPDateUtil : public Il2CppObject
	{
	public:
		::System::String* DATE_RESOURCES_FORMAT; // 0x0
		::System::String* DATE_FORMAT_YYYY_MM_DD; // 0x8
		::System::String* DATE_FORMAT_YYYYMMDD; // 0x10
		::System::String* DATE_FORMAT_YYYYMMDDHHMMSS; // 0x18

		::System::String* GetCurrentTimeZoneOffset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_GETCURRENTTIMEZONEOFFSET_OFFSET))(nullptr);
		}

		::System::String* GetTodayDateString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_GETTODAYDATESTRING_OFFSET))(str, nullptr);
		}

		::System::String* GetCurrentTimeFormat(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_GETCURRENTTIMEFORMAT_OFFSET))(str, nullptr);
		}

		::System::DateTime* AddHour(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_ADDHOUR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean IsValidDateTime(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_ISVALIDDATETIME_OFFSET))(str, str, nullptr);
		}

		::System::String* GetDateTimeAfterHourFromCurrentDateTime(::System::Double arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Double, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_GETDATETIMEAFTERHOURFROMCURRENTDATETIME_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDATEUTIL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

