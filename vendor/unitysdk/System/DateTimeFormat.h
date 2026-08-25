#pragma once
#include "../unitysdk.h"

#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x933D4D0)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x933D5E0)
#define SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x933D6B0)
#define SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET UNITYSDK_OFFSET(0x933D720)
#define SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x933D7A0)
#define SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET UNITYSDK_OFFSET(0x933D7E0)
#define SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET UNITYSDK_OFFSET(0x933D820)
#define SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET UNITYSDK_OFFSET(0x933D8E0)
#define SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET UNITYSDK_OFFSET(0x933DAD0)
#define SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET UNITYSDK_OFFSET(0x933DB30)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x933DC70)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET UNITYSDK_OFFSET(0x933FB00)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET UNITYSDK_OFFSET(0x933FFD0)
#define SYSTEM_DATETIMEFORMAT_APPEND2DIGITNUMBER_OFFSET UNITYSDK_OFFSET(0x9340320)
#define SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET UNITYSDK_OFFSET(0x9340380)
#define SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET UNITYSDK_OFFSET(0x9340600)
#define SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x9333840)
#define SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x9339560)
#define SYSTEM_DATETIMEFORMAT_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9333CF0)
#define SYSTEM_DATETIMEFORMAT_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9339BD0)
#define SYSTEM_DATETIMEFORMAT_FORMATSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9341A50)
#define SYSTEM_DATETIMEFORMAT_TRYFORMATO_OFFSET UNITYSDK_OFFSET(0x9340B50)
#define SYSTEM_DATETIMEFORMAT_TRYFORMATR_OFFSET UNITYSDK_OFFSET(0x93413E0)
#define SYSTEM_DATETIMEFORMAT_WRITETWODECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x9341E00)
#define SYSTEM_DATETIMEFORMAT_WRITEFOURDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x9341E60)
#define SYSTEM_DATETIMEFORMAT_WRITEDIGITS_OFFSET UNITYSDK_OFFSET(0x9341F20)
#define SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORLOCAL_OFFSET UNITYSDK_OFFSET(0x9340B40)
#define SYSTEM_DATETIMEFORMAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9341FD0)

namespace System
{
	inline static constexpr unsigned int DateTimeFormat_TypeDefinitionIndex = 23743;

	class DateTimeFormat : public Il2CppObject
	{
	public:
		::System::TimeSpan* NullOffset; // 0x0
		::Il2CppArray<::System::Object*>* allStandardFormats; // 0x8
		::System::Globalization::DateTimeFormatInfo* InvariantFormatInfo; // 0x10
		::Il2CppArray<::System::Object*>* InvariantAbbreviatedMonthNames; // 0x18
		::Il2CppArray<::System::Object*>* InvariantAbbreviatedDayNames; // 0x20
		::Il2CppArray<::System::Object*>* fixedNumberFormats; // 0x28

		::System::Void FormatDigits(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FormatDigits(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void HebrewFormatDigits(::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ParseRepeatPattern(Il2CppObject* arg, ::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* FormatDayOfWeek(::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::DateTimeFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* FormatMonth(::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::DateTimeFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* FormatHebrewMonthName(::System::DateTime* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::DateTimeFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::DateTime*, ::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ParseQuoteString(Il2CppObject* arg, ::System::Int32 arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ParseNextChar(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsUseGenitiveForm(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Text::StringBuilder* FormatCustomized(::System::DateTime* arg, Il2CppObject* arg, ::System::Globalization::DateTimeFormatInfo* arg, ::System::TimeSpan* arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::DateTime*, Il2CppObject*, ::System::Globalization::DateTimeFormatInfo*, ::System::TimeSpan*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatCustomizedTimeZone(::System::DateTime* arg, ::System::TimeSpan* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::TimeSpan*, Il2CppObject*, ::System::Int32, ::System::Boolean, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatCustomizedRoundripTimeZone(::System::DateTime* arg, ::System::TimeSpan* arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::TimeSpan*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Append2DigitNumber(::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_APPEND2DIGITNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetRealFormat(Il2CppObject* arg, ::System::Globalization::DateTimeFormatInfo* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ExpandPredefinedFormat(Il2CppObject* arg, ::System::DateTime&* arg, ::System::Globalization::DateTimeFormatInfo&* arg, ::System::TimeSpan&* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::DateTime&*, ::System::Globalization::DateTimeFormatInfo&*, ::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* Format(::System::DateTime* arg, ::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::DateTime*, ::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* Format(::System::DateTime* arg, ::System::String* str, ::System::IFormatProvider* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::String*(*)(::System::DateTime*, ::System::String*, ::System::IFormatProvider*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::DateTime* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_TRYFORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::DateTime* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_TRYFORMAT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Text::StringBuilder* FormatStringBuilder(::System::DateTime* arg, Il2CppObject* arg, ::System::Globalization::DateTimeFormatInfo* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::DateTime*, Il2CppObject*, ::System::Globalization::DateTimeFormatInfo*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATSTRINGBUILDER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatO(::System::DateTime* arg, ::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::TimeSpan*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_TRYFORMATO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatR(::System::DateTime* arg, ::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::TimeSpan*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_TRYFORMATR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteTwoDecimalDigits(::System::UInt32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_WRITETWODECIMALDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteFourDecimalDigits(::System::UInt32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_WRITEFOURDECIMALDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteDigits(::System::UInt64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::UInt64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_WRITEDIGITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvalidFormatForLocal(Il2CppObject* arg, ::System::DateTime* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORLOCAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

