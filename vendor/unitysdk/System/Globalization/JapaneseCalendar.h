#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x929E9C0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x929EA10)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET UNITYSDK_OFFSET(0x929EA60)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x929EFF0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x929F000)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x929F110)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x929F320)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x929F330)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x929F350)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x929F3D0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x929F450)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x929F520)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x929F550)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x929F570)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x929F5F0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x929F610)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x929F680)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x929F6E0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x929F830)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET UNITYSDK_OFFSET(0x9299810)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x9299950)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x929F850)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x929F880)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x929F8F0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x929FA30)

namespace System::Globalization
{
	inline static constexpr unsigned int JapaneseCalendar_TypeDefinitionIndex = 24995;

	class JapaneseCalendar : public Il2CppObject
	{
	public:
		::System::DateTime* calendarMinValue; // 0x0
		::Il2CppArray<::System::Object*>* japaneseEraInfo; // 0x8
		::System::Globalization::Calendar* s_defaultInstance; // 0x10
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::DateTime* get_MinSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_MaxSupportedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEraInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetErasFromRegistry()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET))(nullptr);
		}

		::System::Globalization::Calendar* GetDefaultInstance()
		{
			return (return (::System::Globalization::Calendar*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetDaysInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET))(arg, nullptr);
		}

		::System::DayOfWeek* GetDayOfWeek(::System::DateTime* arg)
		{
			return (return (::System::DayOfWeek*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetEra(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMonth(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetYear(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeapYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Eras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EraNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EnglishEraNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET))(nullptr);
		}

		::System::Boolean IsValidYear(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET))(nullptr);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_SET_TWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

