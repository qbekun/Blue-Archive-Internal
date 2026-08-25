#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_CULTUREDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A7070)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x92A25C0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET UNITYSDK_OFFSET(0x92A70A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET UNITYSDK_OFFSET(0x92A71A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_CULTURE_DATA_OFFSET UNITYSDK_OFFSET(0x92A7310)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDAR_OFFSET UNITYSDK_OFFSET(0x9299B50)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_LONGTIMES_OFFSET UNITYSDK_OFFSET(0x92A7320)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SHORTTIMES_OFFSET UNITYSDK_OFFSET(0x92A7340)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SISO639LANGNAME_OFFSET UNITYSDK_OFFSET(0x92A7360)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x92A7370)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x92A7380)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SAM1159_OFFSET UNITYSDK_OFFSET(0x92A7390)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SPM2359_OFFSET UNITYSDK_OFFSET(0x92A73A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_TIMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A73B0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CALENDARIDS_OFFSET UNITYSDK_OFFSET(0x92A73C0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDARIDS_OFFSET UNITYSDK_OFFSET(0x92A7570)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ISINVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x92A0CC0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x92A7640)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x92A7650)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_STEXTINFO_OFFSET UNITYSDK_OFFSET(0x92A7680)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_USEUSEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x92A7690)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ERANAMES_OFFSET UNITYSDK_OFFSET(0x92A76A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVERANAMES_OFFSET UNITYSDK_OFFSET(0x92A76C0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x92A76E0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_SHORTDATES_OFFSET UNITYSDK_OFFSET(0x92A7700)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_LONGDATES_OFFSET UNITYSDK_OFFSET(0x92A7720)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_YEARMONTHS_OFFSET UNITYSDK_OFFSET(0x92A7740)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_DAYNAMES_OFFSET UNITYSDK_OFFSET(0x92A7760)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDDAYNAMES_OFFSET UNITYSDK_OFFSET(0x92A7780)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHNAMES_OFFSET UNITYSDK_OFFSET(0x92A77A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x92A77C0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x92A77E0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDGENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x92A7800)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_LEAPYEARMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x92A7820)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHDAY_OFFSET UNITYSDK_OFFSET(0x92A7840)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_DATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A7860)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETDATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A7920)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A7960)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_INDEXOFTIMEPART_OFFSET UNITYSDK_OFFSET(0x92A7A40)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_UNESCAPENLSSTRING_OFFSET UNITYSDK_OFFSET(0x92A7B20)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRINGS_OFFSET UNITYSDK_OFFSET(0x9298AF0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRING_OFFSET UNITYSDK_OFFSET(0x9298B00)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_STRLEN_OFFSET UNITYSDK_OFFSET(0x92A7CD0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_IDX2STRING_OFFSET UNITYSDK_OFFSET(0x92A7CF0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_CREATE_GROUP_SIZES_ARRAY_OFFSET UNITYSDK_OFFSET(0x92A7D50)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETNFIVALUES_OFFSET UNITYSDK_OFFSET(0x92A0390)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_NUMBER_DATA_OFFSET UNITYSDK_OFFSET(0x92A7DF0)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureData_TypeDefinitionIndex = 25005;

	class CultureData : public Il2CppObject
	{
	public:
		::System::String* sAM1159; // 0x10
		::System::String* sPM2359; // 0x18
		::System::String* sTimeSeparator; // 0x20
		::Il2CppArray<::System::Object*>* saLongTimes; // 0x28
		::Il2CppArray<::System::Object*>* saShortTimes; // 0x30
		::System::Int32 iFirstDayOfWeek; // 0x38
		::System::Int32 iFirstWeekOfYear; // 0x3C
		::Il2CppArray<::System::Object*>* waCalendars; // 0x40
		::Il2CppArray<::System::Object*>* calendars; // 0x48
		::System::String* sISO639Language; // 0x50
		::System::String* sRealName; // 0x58
		::System::Boolean bUseOverrides; // 0x60
		::System::Int32 calendarId; // 0x64
		::System::Int32 numberIndex; // 0x68
		::System::Int32 iDefaultAnsiCodePage; // 0x6C
		::System::Int32 iDefaultOemCodePage; // 0x70
		::System::Int32 iDefaultMacCodePage; // 0x74
		::System::Int32 iDefaultEbcdicCodePage; // 0x78
		::System::Boolean isRightToLeft; // 0x7C
		::System::String* sListSeparator; // 0x80
		::System::Globalization::CultureData* s_Invariant; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Globalization::CultureData* get_Invariant()
		{
			return (return (::System::Globalization::CultureData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_INVARIANT_OFFSET))(nullptr);
		}

		::System::Globalization::CultureData* GetCultureData(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Globalization::CultureData*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Globalization::CultureData* GetCultureData(::System::String* str, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::String* str)
		{
			return (return (::System::Globalization::CultureData*(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET))(str, arg, arg, arg, arg, str, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void fill_culture_data(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_CULTURE_DATA_OFFSET))(arg, nullptr);
		}

		::System::Globalization::CalendarData* GetCalendar(::System::Int32 arg)
		{
			return (return (::System::Globalization::CalendarData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDAR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LongTimes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_LONGTIMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ShortTimes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SHORTTIMES_OFFSET))(nullptr);
		}

		::System::String* get_SISO639LANGNAME()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SISO639LANGNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_IFIRSTDAYOFWEEK()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTDAYOFWEEK_OFFSET))(nullptr);
		}

		::System::Int32 get_IFIRSTWEEKOFYEAR()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTWEEKOFYEAR_OFFSET))(nullptr);
		}

		::System::String* get_SAM1159()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SAM1159_OFFSET))(nullptr);
		}

		::System::String* get_SPM2359()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SPM2359_OFFSET))(nullptr);
		}

		::System::String* get_TimeSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_TIMESEPARATOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CalendarIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CALENDARIDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCalendarIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDARIDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInvariantCulture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ISINVARIANTCULTURE_OFFSET))(nullptr);
		}

		::System::String* get_CultureName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CULTURENAME_OFFSET))(nullptr);
		}

		::System::String* get_SCOMPAREINFO()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SCOMPAREINFO_OFFSET))(nullptr);
		}

		::System::String* get_STEXTINFO()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_STEXTINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_UseUserOverride()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_USEUSEROVERRIDE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EraNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ERANAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AbbrevEraNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVERANAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AbbreviatedEnglishEraNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDENGLISHERANAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ShortDates(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_SHORTDATES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LongDates(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_LONGDATES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* YearMonths(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_YEARMONTHS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DayNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_DAYNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AbbreviatedDayNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDDAYNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MonthNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenitiveMonthNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GENITIVEMONTHNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AbbreviatedMonthNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDMONTHNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AbbreviatedGenitiveMonthNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDGENITIVEMONTHNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LeapYearMonthNames(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_LEAPYEARMONTHNAMES_OFFSET))(arg, nullptr);
		}

		::System::String* MonthDay(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHDAY_OFFSET))(arg, nullptr);
		}

		::System::String* DateSeparator(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_DATESEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetDateSeparator(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETDATESEPARATOR_OFFSET))(str, nullptr);
		}

		::System::String* GetSeparator(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETSEPARATOR_OFFSET))(str, str, nullptr);
		}

		::System::Int32 IndexOfTimePart(::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_INDEXOFTIMEPART_OFFSET))(str, arg, str, nullptr);
		}

		::System::String* UnescapeNlsString(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_UNESCAPENLSSTRING_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReescapeWin32Strings(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRINGS_OFFSET))(arg, nullptr);
		}

		::System::String* ReescapeWin32String(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRING_OFFSET))(str, nullptr);
		}

		::System::Int32 strlen(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_STRLEN_OFFSET))(arg, nullptr);
		}

		::System::String* idx2string(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_IDX2STRING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* create_group_sizes_array(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_CREATE_GROUP_SIZES_ARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetNFIValues(::System::Globalization::NumberFormatInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETNFIVALUES_OFFSET))(arg, nullptr);
		}

		::System::Object** fill_number_data(::System::Int32 arg, NumberFormatEntryManaged&* arg)
		{
			return (return (::System::Object**(*)(::System::Int32, NumberFormatEntryManaged&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_NUMBER_DATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

