#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GET_KNOWNWORDS_OFFSET UNITYSDK_OFFSET(0x9264050)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SKIPWHITESPACESANDNONLETTER_OFFSET UNITYSDK_OFFSET(0x9264470)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDORPOSTFIX_OFFSET UNITYSDK_OFFSET(0x9264560)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDS_OFFSET UNITYSDK_OFFSET(0x92648D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANREPEATCHAR_OFFSET UNITYSDK_OFFSET(0x9264A40)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDIGNORABLESYMBOLS_OFFSET UNITYSDK_OFFSET(0x9264770)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANDATEWORD_OFFSET UNITYSDK_OFFSET(0x9264AA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETDATEWORDSOFDTFI_OFFSET UNITYSDK_OFFSET(0x92629B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGGENITIVEMONTH_OFFSET UNITYSDK_OFFSET(0x925FB10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x925FB50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINDAYNAMES_OFFSET UNITYSDK_OFFSET(0x925FC00)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSEHEBREWCALENDAR_OFFSET UNITYSDK_OFFSET(0x925FC30)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_EQUALSTRINGARRAYS_OFFSET UNITYSDK_OFFSET(0x9264D10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSHAVESPACE_OFFSET UNITYSDK_OFFSET(0x9265000)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSBEGINWITHDIGIT_OFFSET UNITYSDK_OFFSET(0x9264DA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9262930)

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeFormatInfoScanner_TypeDefinitionIndex = 24961;

	class DateTimeFormatInfoScanner : public Il2CppObject
	{
	public:
		Il2CppObject* m_dateWords; // 0x10
		Il2CppObject* s_knownWords; // 0x0
		FoundDatePattern* _ymdFlags; // 0x18

		Il2CppObject* get_KnownWords()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GET_KNOWNWORDS_OFFSET))(nullptr);
		}

		::System::Int32 SkipWhiteSpacesAndNonLetter(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SKIPWHITESPACESANDNONLETTER_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddDateWordOrPostfix(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDORPOSTFIX_OFFSET))(str, str, nullptr);
		}

		::System::Int32 AddDateWords(::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDS_OFFSET))(str, arg, str, nullptr);
		}

		::System::Int32 ScanRepeatChar(::System::String* str, ::System::Char arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Char, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANREPEATCHAR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void AddIgnorableSymbols(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDIGNORABLESYMBOLS_OFFSET))(str, nullptr);
		}

		::System::Void ScanDateWord(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANDATEWORD_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETDATEWORDSOFDTFI_OFFSET))(arg, nullptr);
		}

		::System::Globalization::FORMATFLAGS* GetFormatFlagGenitiveMonth(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Globalization::FORMATFLAGS*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGGENITIVEMONTH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Globalization::FORMATFLAGS* GetFormatFlagUseSpaceInMonthNames(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Globalization::FORMATFLAGS*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINMONTHNAMES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Globalization::FORMATFLAGS* GetFormatFlagUseSpaceInDayNames(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Globalization::FORMATFLAGS*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINDAYNAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Globalization::FORMATFLAGS* GetFormatFlagUseHebrewCalendar(::System::Int32 arg)
		{
			return (return (::System::Globalization::FORMATFLAGS*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSEHEBREWCALENDAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean EqualStringArrays(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_EQUALSTRINGARRAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ArrayElementsHaveSpace(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSHAVESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ArrayElementsBeginWithDigit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSBEGINWITHDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

