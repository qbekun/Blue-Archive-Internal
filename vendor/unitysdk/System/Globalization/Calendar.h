#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92958A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92958F0)
#define SYSTEM_GLOBALIZATION_CALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9295940)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x9295960)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x9295970)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9295990)
#define SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET UNITYSDK_OFFSET(0x92959A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_READONLY_OFFSET UNITYSDK_OFFSET(0x9295A20)
#define SYSTEM_GLOBALIZATION_CALENDAR_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x9295B00)
#define SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x9295B80)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET UNITYSDK_OFFSET(0x9295B90)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x9295CB0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x9295CD0)
#define SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x9295D30)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x9295ED0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET UNITYSDK_OFFSET(0x9295F40)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET UNITYSDK_OFFSET(0x9295FA0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x9296020)
#define SYSTEM_GLOBALIZATION_CALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x9296030)
#define SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x9296050)
#define SYSTEM_GLOBALIZATION_CALENDAR_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x9296170)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET UNITYSDK_OFFSET(0x9296340)

namespace System::Globalization
{
	inline static constexpr unsigned int Calendar_TypeDefinitionIndex = 24988;

	class Calendar : public Il2CppObject
	{
	public:
		::System::Int64 TicksPerMillisecond; // 0x0
		::System::Int64 TicksPerSecond; // 0x0
		::System::Int64 TicksPerMinute; // 0x0
		::System::Int64 TicksPerHour; // 0x0
		::System::Int64 TicksPerDay; // 0x0
		::System::Int32 MillisPerSecond; // 0x0
		::System::Int32 MillisPerMinute; // 0x0
		::System::Int32 MillisPerHour; // 0x0
		::System::Int32 MillisPerDay; // 0x0
		::System::Int32 DaysPerYear; // 0x0
		::System::Int32 DaysPer4Years; // 0x0
		::System::Int32 DaysPer100Years; // 0x0
		::System::Int32 DaysPer400Years; // 0x0
		::System::Int32 DaysTo10000; // 0x0
		::System::Int64 MaxMillis; // 0x0
		::System::Int32 CAL_GREGORIAN; // 0x0
		::System::Int32 CAL_GREGORIAN_US; // 0x0
		::System::Int32 CAL_JAPAN; // 0x0
		::System::Int32 CAL_TAIWAN; // 0x0
		::System::Int32 CAL_KOREA; // 0x0
		::System::Int32 CAL_HIJRI; // 0x0
		::System::Int32 CAL_THAI; // 0x0
		::System::Int32 CAL_HEBREW; // 0x0
		::System::Int32 CAL_GREGORIAN_ME_FRENCH; // 0x0
		::System::Int32 CAL_GREGORIAN_ARABIC; // 0x0
		::System::Int32 CAL_GREGORIAN_XLIT_ENGLISH; // 0x0
		::System::Int32 CAL_GREGORIAN_XLIT_FRENCH; // 0x0
		::System::Int32 CAL_JULIAN; // 0x0
		::System::Int32 CAL_JAPANESELUNISOLAR; // 0x0
		::System::Int32 CAL_CHINESELUNISOLAR; // 0x0
		::System::Int32 CAL_SAKA; // 0x0
		::System::Int32 CAL_LUNAR_ETO_CHN; // 0x0
		::System::Int32 CAL_LUNAR_ETO_KOR; // 0x0
		::System::Int32 CAL_LUNAR_ETO_ROKUYOU; // 0x0
		::System::Int32 CAL_KOREANLUNISOLAR; // 0x0
		::System::Int32 CAL_TAIWANLUNISOLAR; // 0x0
		::System::Int32 CAL_PERSIAN; // 0x0
		::System::Int32 CAL_UMALQURA; // 0x0
		::System::Int32 m_currentEraValue; // 0x10
		::System::Boolean m_isReadOnly; // 0x14
		::System::Int32 CurrentEra; // 0x0
		::System::Int32 twoDigitYearMax; // 0x18

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET))(nullptr);
		}

		::System::Globalization::Calendar* ReadOnly(::System::Globalization::Calendar* arg)
		{
			return (return (::System::Globalization::Calendar*(*)(::System::Globalization::Calendar*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Void VerifyWritable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_VERIFYWRITABLE_OFFSET))(nullptr);
		}

		::System::Void SetReadOnlyState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentEraValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET))(nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidDay(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::System::Int64 TimeToTicks(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TIMETOTICKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetSystemTwoDigitYearSetting(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET))(arg, arg, nullptr);
		}

	};
}

