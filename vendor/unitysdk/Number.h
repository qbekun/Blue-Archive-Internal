#pragma once
#include "unitysdk.h"

#define NUMBER_ISWHITE_OFFSET UNITYSDK_OFFSET(0x9838F70)
#define NUMBER_MATCHCHARS_OFFSET UNITYSDK_OFFSET(0x9838F90)
#define NUMBER_MATCHCHARS_OFFSET UNITYSDK_OFFSET(0x9839080)
#define NUMBER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x98390F0)
#define NUMBER_TRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x983A660)
#define NUMBER_TRYSTRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x9838DF0)
#define NUMBER_INT32TODECCHARS_OFFSET UNITYSDK_OFFSET(0x983A6E0)
#define NUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x9836B50)
#define NUMBER_NUMBERTOSTRING_OFFSET UNITYSDK_OFFSET(0x9836CB0)
#define NUMBER_FORMATCURRENCY_OFFSET UNITYSDK_OFFSET(0x983A850)
#define NUMBER_WCSLEN_OFFSET UNITYSDK_OFFSET(0x983BBD0)
#define NUMBER_FORMATFIXED_OFFSET UNITYSDK_OFFSET(0x983AAF0)
#define NUMBER_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x983B0E0)
#define NUMBER_FORMATSCIENTIFIC_OFFSET UNITYSDK_OFFSET(0x983B340)
#define NUMBER_FORMATEXPONENT_OFFSET UNITYSDK_OFFSET(0x983BED0)
#define NUMBER_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x983B5B0)
#define NUMBER_FORMATPERCENT_OFFSET UNITYSDK_OFFSET(0x983B930)
#define NUMBER_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x983A760)
#define NUMBER_FINDSECTION_OFFSET UNITYSDK_OFFSET(0x983C240)
#define NUMBER_NUMBERTOSTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x9837780)
#define NUMBER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x983C360)

	inline static constexpr unsigned int Number_TypeDefinitionIndex = 37102;

	class Number : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_posCurrencyFormats; // 0x0
		::Il2CppArray<::System::Object*>* s_negCurrencyFormats; // 0x8
		::Il2CppArray<::System::Object*>* s_posPercentFormats; // 0x10
		::Il2CppArray<::System::Object*>* s_negPercentFormats; // 0x18
		::Il2CppArray<::System::Object*>* s_negNumberFormats; // 0x20
		::System::String* s_posNumberFormat; // 0x28

		::System::Boolean IsWhite(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_ISWHITE_OFFSET))(arg, nullptr);
		}

		::System::Object** MatchChars(::System::Object** arg, ::System::Object** arg, ::System::String* str)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Object**, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_MATCHCHARS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Object** MatchChars(::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_MATCHCHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ParseNumber(::System::Object*&* arg, ::System::Object** arg, ::System::Globalization::NumberStyles* arg, NumberBuffer&* arg, ::System::Text::StringBuilder* arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object*&*, ::System::Object**, ::System::Globalization::NumberStyles*, NumberBuffer&*, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_PARSENUMBER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrailingZeros(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_TRAILINGZEROS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryStringToNumber(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, NumberBuffer&* arg, ::System::Text::StringBuilder* arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, NumberBuffer&*, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_TRYSTRINGTONUMBER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Int32ToDecChars(::System::Object** arg, int32_t&* arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_INT32TODECCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Char ParseFormatSpecifier(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Char(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_PARSEFORMATSPECIFIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NumberToString(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Char arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_NUMBERTOSTRING_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatCurrency(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATCURRENCY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 wcslen(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_WCSLEN_OFFSET))(arg, nullptr);
		}

		::System::Void FormatFixed(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATFIXED_OFFSET))(arg, arg, arg, arg, arg, arg, str, str, nullptr);
		}

		::System::Void FormatNumber(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATNUMBER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatScientific(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATSCIENTIFIC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatExponent(::System::Text::ValueStringBuilder&* arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Int32 arg, ::System::Char arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, ::System::Globalization::NumberFormatInfo*, ::System::Int32, ::System::Char, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATEXPONENT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatGeneral(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Char arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATGENERAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatPercent(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FORMATPERCENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RoundNumber(NumberBuffer&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(NumberBuffer&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_ROUNDNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindSection(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_FINDSECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NumberToStringFormat(::System::Text::ValueStringBuilder&* arg, NumberBuffer&* arg, Il2CppObject* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, NumberBuffer&*, Il2CppObject*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NUMBER_NUMBERTOSTRINGFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NUMBER_.CCTOR_OFFSET))(nullptr);
		}

	};

