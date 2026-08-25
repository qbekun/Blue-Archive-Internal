#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x929CD30)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x929CD80)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x929CDD0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x929CDF0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETABSOLUTEDATEHIJRI_OFFSET UNITYSDK_OFFSET(0x929CE00)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_DAYSUPTOHIJRIYEAR_OFFSET UNITYSDK_OFFSET(0x929CFB0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_HIJRIADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x929D090)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETADVANCEHIJRIDATE_OFFSET UNITYSDK_OFFSET(0x929D0F0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x929D100)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x929D360)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARRANGE_OFFSET UNITYSDK_OFFSET(0x929D430)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x929D5A0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x929D720)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x929DED0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x929DF40)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x929DFE0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x929E070)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x929E0F0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x929E180)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x929E210)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x929E280)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x929E2E0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x929E350)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x929E3E0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x929E5C0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x929E630)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x929E750)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x929E890)

namespace System::Globalization
{
	inline static constexpr unsigned int HijriCalendar_TypeDefinitionIndex = 24994;

	class HijriCalendar : public Il2CppObject
	{
	public:
		::System::Int32 HijriEra; // 0x0
		::Il2CppArray<::System::Object*>* HijriMonthDays; // 0x8
		::System::Int32 m_HijriAdvance; // 0x20
		::System::DateTime* calendarMinValue; // 0x10
		::System::DateTime* calendarMaxValue; // 0x18

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 GetAbsoluteDateHijri(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETABSOLUTEDATEHIJRI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 DaysUpToHijriYear(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_DAYSUPTOHIJRIYEAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HijriAdjustment()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_HIJRIADJUSTMENT_OFFSET))(nullptr);
		}

		::System::Int32 GetAdvanceHijriDate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETADVANCEHIJRIDATE_OFFSET))(nullptr);
		}

		::System::Void CheckTicksRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKTICKSRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckEraRange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKERARANGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckYearRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckYearMonthRange(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARMONTHRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDatePart(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDATEPART_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

