#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x9299C90)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x9299D70)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x9299DC0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9299E10)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9299F30)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9299F60)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x929A0B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x929A0C0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETABSOLUTEDATE_OFFSET UNITYSDK_OFFSET(0x929A2B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x929A4A0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x929A510)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x929A5B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x929A880)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x929AA30)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x929AA40)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x929AAA0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x929AB10)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x929AC70)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x929ACE0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x929AE80)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x929AF60)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x929B040)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x929B0B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x929B1D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x929B300)

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendar_TypeDefinitionIndex = 24990;

	class GregorianCalendar : public Il2CppObject
	{
	public:
		::System::Globalization::GregorianCalendarTypes* m_type; // 0x20
		::Il2CppArray<::System::Object*>* DaysToMonth365; // 0x0
		::Il2CppArray<::System::Object*>* DaysToMonth366; // 0x8
		::System::Globalization::Calendar* s_defaultInstance; // 0x10

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::Globalization::Calendar* GetDefaultInstance()
		{
			return (return (::System::Globalization::Calendar*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDEFAULTINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Globalization::GregorianCalendarTypes* arg)
		{
			((::System::Void(*)(::System::Globalization::GregorianCalendarTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 GetDatePart(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDATEPART_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetAbsoluteDate(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETABSOLUTEDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TRYTODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

