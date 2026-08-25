#pragma once
#include "unitysdk.h"

#define PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x9930210)
#define PARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0x9933F00)
#define PARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9934190)
#define PARSER_PARSETIMEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9934480)
#define PARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x99346C0)
#define PARSER_PARSEZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9934220)
#define PARSER_PARSE4DIG_OFFSET UNITYSDK_OFFSET(0x99344F0)
#define PARSER_PARSE2DIG_OFFSET UNITYSDK_OFFSET(0x9934630)
#define PARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0x9934150)
#define PARSER_TEST_OFFSET UNITYSDK_OFFSET(0x9933EF0)
#define PARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9934C10)

	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 28239;

	class Parser : public Il2CppObject
	{
	public:
		DateTimeTypeCode* typeCode; // 0x10
		::System::Int32 year; // 0x14
		::System::Int32 month; // 0x18
		::System::Int32 day; // 0x1C
		::System::Int32 hour; // 0x20
		::System::Int32 minute; // 0x24
		::System::Int32 second; // 0x28
		::System::Int32 fraction; // 0x2C
		XsdDateTimeKind* kind; // 0x30
		::System::Int32 zoneHour; // 0x34
		::System::Int32 zoneMinute; // 0x38
		::System::String* text; // 0x40
		::System::Int32 length; // 0x48
		::Il2CppArray<::System::Object*>* Power10; // 0x0

		::System::Boolean Parse(::System::String* str, ::System::Xml::Schema::XsdDateTimeFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Xml::Schema::XsdDateTimeFlags*, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ParseDate(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSEDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseTimeAndZoneAndWhitespace(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseTimeAndWhitespace(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSETIMEANDWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseTime(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseZoneAndWhitespace(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSEZONEANDWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Parse4Dig(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSE4DIG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Parse2Dig(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSE2DIG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ParseChar(::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_PARSECHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Test(::System::Xml::Schema::XsdDateTimeFlags* arg, ::System::Xml::Schema::XsdDateTimeFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XsdDateTimeFlags*, ::System::Xml::Schema::XsdDateTimeFlags*, ::PVOID))((::PBYTE)hIl2Cpp + PARSER_TEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSER_.CCTOR_OFFSET))(nullptr);
		}

	};

