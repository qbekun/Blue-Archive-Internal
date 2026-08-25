#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92A45B0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92A4600)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A4650)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x92A4710)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x92A4720)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A4740)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x92A47C0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x92A4840)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A4910)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x92A4940)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x92A4960)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x92A49E0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x92A4A00)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x92A4A70)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x92A4AD0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x92A4AF0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x92A4B60)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x92A4CA0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92A4D50)

namespace System::Globalization
{
	inline static constexpr unsigned int ThaiBuddhistCalendar_TypeDefinitionIndex = 24999;

	class ThaiBuddhistCalendar : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* thaiBuddhistEraInfo; // 0x0
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

