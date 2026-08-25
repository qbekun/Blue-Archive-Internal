#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_INITDATEMAPPING_OFFSET UNITYSDK_OFFSET(0x92A4ED0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92A50B0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x92A5100)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A5150)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x92A5170)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x92A5180)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTHIJRITOGREGORIAN_OFFSET UNITYSDK_OFFSET(0x92A5190)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETABSOLUTEDATEUMALQURA_OFFSET UNITYSDK_OFFSET(0x92A5340)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x92A5400)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x92A5660)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARRANGE_OFFSET UNITYSDK_OFFSET(0x92A56E0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x92A5850)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTGREGORIANTOHIJRI_OFFSET UNITYSDK_OFFSET(0x92A5920)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x92A5C20)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x92A5DA0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x92A5DC0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x92A5E60)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_REALGETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A5F00)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A6040)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x92A60A0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x92A6120)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x92A6180)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x92A61A0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x92A6200)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x92A6220)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x92A6280)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x92A6500)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x92A6570)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x92A66A0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92A67F0)

namespace System::Globalization
{
	inline static constexpr unsigned int UmAlQuraCalendar_TypeDefinitionIndex = 25001;

	class UmAlQuraCalendar : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* HijriYearInfo; // 0x0
		::System::DateTime* minDate; // 0x8
		::System::DateTime* maxDate; // 0x10

		::Il2CppArray<::System::Object*>* InitDateMapping()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_INITDATEMAPPING_OFFSET))(nullptr);
		}

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_BASECALENDARID_OFFSET))(nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Void ConvertHijriToGregorian(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTHIJRITOGREGORIAN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetAbsoluteDateUmAlQura(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETABSOLUTEDATEUMALQURA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckTicksRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKTICKSRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckEraRange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKERARANGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckYearRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckYearMonthRange(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARMONTHRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConvertGregorianToHijri(::System::DateTime* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::DateTime*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTGREGORIANTOHIJRI_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetDatePart(::System::DateTime* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDATEPART_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 RealGetDaysInYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_REALGETDAYSINYEAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

