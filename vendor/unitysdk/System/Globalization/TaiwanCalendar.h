#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x92A1840)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92A1B60)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92A1BB0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A1950)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x92A1C00)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x92A1C10)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A1C30)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x92A1CB0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x92A1D30)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A1E00)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x92A1E30)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x92A1E50)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x92A1ED0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x92A1EF0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x92A1F60)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x92A1FC0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x92A1FE0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x92A2050)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x92A2190)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92A22E0)

namespace System::Globalization
{
	inline static constexpr unsigned int TaiwanCalendar_TypeDefinitionIndex = 24997;

	class TaiwanCalendar : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* taiwanEraInfo; // 0x0
		::System::Globalization::Calendar* s_defaultInstance; // 0x8
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20
		::System::DateTime* calendarMinValue; // 0x10

		::System::Globalization::Calendar* GetDefaultInstance()
		{
			return (return (::System::Globalization::Calendar*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET))(nullptr);
		}

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

