#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ParserTimeZone; }

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94A29D0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x94A2C70)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0x94A2E00)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x94A3060)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x94A3260)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET UNITYSDK_OFFSET(0x94A37F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET UNITYSDK_OFFSET(0x94A30F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET UNITYSDK_OFFSET(0x94A31E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0x94A3020)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeParser_TypeDefinitionIndex = 31823;

	class DateTimeParser : public Il2CppObject
	{
	public:
		::System::Int32 Year; // 0x10
		::System::Int32 Month; // 0x14
		::System::Int32 Day; // 0x18
		::System::Int32 Hour; // 0x1C
		::System::Int32 Minute; // 0x20
		::System::Int32 Second; // 0x24
		::System::Int32 Fraction; // 0x28
		::System::Int32 ZoneHour; // 0x2C
		::System::Int32 ZoneMinute; // 0x30
		::Newtonsoft::Json::Utilities::ParserTimeZone* Zone; // 0x34
		::Il2CppArray<::System::Object*>* _text; // 0x38
		::System::Int32 _end; // 0x40
		::Il2CppArray<::System::Object*>* Power10; // 0x0
		::System::Int32 Lzyyyy; // 0x8
		::System::Int32 Lzyyyy_; // 0xC
		::System::Int32 Lzyyyy_MM; // 0x10
		::System::Int32 Lzyyyy_MM_; // 0x14
		::System::Int32 Lzyyyy_MM_dd; // 0x18
		::System::Int32 Lzyyyy_MM_ddT; // 0x1C
		::System::Int32 LzHH; // 0x20
		::System::Int32 LzHH_; // 0x24
		::System::Int32 LzHH_mm; // 0x28
		::System::Int32 LzHH_mm_; // 0x2C
		::System::Int32 LzHH_mm_ss; // 0x30
		::System::Int32 Lz_; // 0x34
		::System::Int32 Lz_zz; // 0x38
		::System::Int16 MaxFractionDigits; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Parse(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ParseDate(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseTimeAndZoneAndWhitespace(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseTime(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseZone(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Parse4Digit(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Parse2Digit(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ParseChar(::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET))(arg, arg, nullptr);
		}

	};
}

