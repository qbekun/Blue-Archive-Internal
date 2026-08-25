#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_CALENDARDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9296390)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92963B0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9298290)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEERANAMES_OFFSET UNITYSDK_OFFSET(0x9298B10)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_GETJAPANESEERANAMES_OFFSET UNITYSDK_OFFSET(0x92996D0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_GETJAPANESEENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x9299590)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEABBREVIATEDERANAMES_OFFSET UNITYSDK_OFFSET(0x9299120)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_GETCALENDARDATA_OFFSET UNITYSDK_OFFSET(0x9295C10)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_CALENDARIDTOCULTURENAME_OFFSET UNITYSDK_OFFSET(0x9299A90)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETTWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x9296380)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETCALENDARDATA_OFFSET UNITYSDK_OFFSET(0x9298A10)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_FILL_CALENDAR_DATA_OFFSET UNITYSDK_OFFSET(0x9299C80)

namespace System::Globalization
{
	inline static constexpr unsigned int CalendarData_TypeDefinitionIndex = 24989;

	class CalendarData : public Il2CppObject
	{
	public:
		::System::Int32 MAX_CALENDARS; // 0x0
		::System::String* sNativeName; // 0x10
		::Il2CppArray<::System::Object*>* saShortDates; // 0x18
		::Il2CppArray<::System::Object*>* saYearMonths; // 0x20
		::Il2CppArray<::System::Object*>* saLongDates; // 0x28
		::System::String* sMonthDay; // 0x30
		::Il2CppArray<::System::Object*>* saEraNames; // 0x38
		::Il2CppArray<::System::Object*>* saAbbrevEraNames; // 0x40
		::Il2CppArray<::System::Object*>* saAbbrevEnglishEraNames; // 0x48
		::Il2CppArray<::System::Object*>* saDayNames; // 0x50
		::Il2CppArray<::System::Object*>* saAbbrevDayNames; // 0x58
		::Il2CppArray<::System::Object*>* saSuperShortDayNames; // 0x60
		::Il2CppArray<::System::Object*>* saMonthNames; // 0x68
		::Il2CppArray<::System::Object*>* saAbbrevMonthNames; // 0x70
		::Il2CppArray<::System::Object*>* saMonthGenitiveNames; // 0x78
		::Il2CppArray<::System::Object*>* saAbbrevMonthGenitiveNames; // 0x80
		::Il2CppArray<::System::Object*>* saLeapYearMonthNames; // 0x88
		::System::Int32 iTwoDigitYearMax; // 0x90
		::System::Int32 iCurrentEra; // 0x94
		::System::Boolean bUseUserOverrides; // 0x98
		::System::Globalization::CalendarData* Invariant; // 0x0
		::Il2CppArray<::System::Object*>* HEBREW_MONTH_NAMES; // 0x8
		::Il2CppArray<::System::Object*>* HEBREW_LEAP_MONTH_NAMES; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void InitializeEraNames(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEERANAMES_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetJapaneseEraNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_GETJAPANESEERANAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetJapaneseEnglishEraNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_GETJAPANESEENGLISHERANAMES_OFFSET))(nullptr);
		}

		::System::Void InitializeAbbreviatedEraNames(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEABBREVIATEDERANAMES_OFFSET))(str, arg, nullptr);
		}

		::System::Globalization::CalendarData* GetCalendarData(::System::Int32 arg)
		{
			return (return (::System::Globalization::CalendarData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_GETCALENDARDATA_OFFSET))(arg, nullptr);
		}

		::System::String* CalendarIdToCultureName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_CALENDARIDTOCULTURENAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 nativeGetTwoDigitYearMax(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETTWODIGITYEARMAX_OFFSET))(arg, nullptr);
		}

		::System::Boolean nativeGetCalendarData(::System::Globalization::CalendarData* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::CalendarData*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETCALENDARDATA_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean fill_calendar_data(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_FILL_CALENDAR_DATA_OFFSET))(str, arg, nullptr);
		}

	};
}

