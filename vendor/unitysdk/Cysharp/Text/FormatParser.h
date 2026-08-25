#pragma once
#include "../../unitysdk.h"

namespace Cysharp::Text { class ParserScanResult; }

#define CYSHARP_TEXT_FORMATPARSER_SCANFORMATSTRING_OFFSET UNITYSDK_OFFSET(0xA4CC7B0)
#define CYSHARP_TEXT_FORMATPARSER_SCANFORMATSTRING_OFFSET UNITYSDK_OFFSET(0xA4CC890)
#define CYSHARP_TEXT_FORMATPARSER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0xA4CC990)
#define CYSHARP_TEXT_FORMATPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0xA4CC9B0)
#define CYSHARP_TEXT_FORMATPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0xA4CCDA0)

namespace Cysharp::Text
{
	inline static constexpr unsigned int FormatParser_TypeDefinitionIndex = 34675;

	class FormatParser : public Il2CppObject
	{
	public:
		::System::Int32 ArgLengthLimit; // 0x0
		::System::Int32 WidthLimit; // 0x0

		::Cysharp::Text::ParserScanResult* ScanFormatString(::System::String* str, int32_t&* arg)
		{
			return (return (::Cysharp::Text::ParserScanResult*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FORMATPARSER_SCANFORMATSTRING_OFFSET))(str, arg, nullptr);
		}

		::Cysharp::Text::ParserScanResult* ScanFormatString(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::Cysharp::Text::ParserScanResult*(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FORMATPARSER_SCANFORMATSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDigit(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FORMATPARSER_ISDIGIT_OFFSET))(arg, nullptr);
		}

		ParseResult* Parse(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (ParseResult*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FORMATPARSER_PARSE_OFFSET))(arg, arg, nullptr);
		}

		ParseResult* Parse(::System::String* str, ::System::Int32 arg)
		{
			return (return (ParseResult*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FORMATPARSER_PARSE_OFFSET))(str, arg, nullptr);
		}

	};
}

