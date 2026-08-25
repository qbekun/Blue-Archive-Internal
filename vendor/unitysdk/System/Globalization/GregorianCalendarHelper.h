#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_MAXYEAR_OFFSET UNITYSDK_OFFSET(0x929B5F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x929B600)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAROFFSET_OFFSET UNITYSDK_OFFSET(0x929B6B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x929B9B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x929B9D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x929B9F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETABSOLUTEDATE_OFFSET UNITYSDK_OFFSET(0x929BDF0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x929BFE0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x929C050)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x929BBF0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x929C220)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x929C290)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x929C350)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x929C4F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETERA_OFFSET UNITYSDK_OFFSET(0x929C560)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x929C660)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTH_OFFSET UNITYSDK_OFFSET(0x929C760)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x929C7D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_OFFSET UNITYSDK_OFFSET(0x929C7F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x929C900)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x929C960)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x929CAA0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x929CC40)

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendarHelper_TypeDefinitionIndex = 24992;

	class GregorianCalendarHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* DaysToMonth365; // 0x0
		::Il2CppArray<::System::Object*>* DaysToMonth366; // 0x8
		::System::Int32 m_maxYear; // 0x10
		::System::Int32 m_minYear; // 0x14
		::System::Globalization::Calendar* m_Cal; // 0x18
		::Il2CppArray<::System::Object*>* m_EraInfo; // 0x20
		::Il2CppArray<::System::Object*>* m_eras; // 0x28
		::System::DateTime* m_minDate; // 0x30

		::System::Int32 get_MaxYear()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_MAXYEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Globalization::Calendar* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Globalization::Calendar*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetYearOffset(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAROFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetGregorianYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETGREGORIANYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISVALIDYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDatePart(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDATEPART_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetAbsoluteDate(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETABSOLUTEDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 DateToTicks(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_DATETOTICKS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 TimeToTicks(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TIMETOTICKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckTicksRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_CHECKTICKSRANGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETERA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TOFOURDIGITYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

