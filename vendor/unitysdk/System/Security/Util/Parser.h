#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_UTIL_PARSER_GETTOPELEMENT_OFFSET UNITYSDK_OFFSET(0x91804E0)
#define SYSTEM_SECURITY_UTIL_PARSER_GETREQUIREDSIZES_OFFSET UNITYSDK_OFFSET(0x9180510)
#define SYSTEM_SECURITY_UTIL_PARSER_DETERMINEFORMAT_OFFSET UNITYSDK_OFFSET(0x9180DC0)
#define SYSTEM_SECURITY_UTIL_PARSER_PARSECONTENTS_OFFSET UNITYSDK_OFFSET(0x9181BA0)
#define SYSTEM_SECURITY_UTIL_PARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182320)
#define SYSTEM_SECURITY_UTIL_PARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182460)

namespace System::Security::Util
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 24284;

	class Parser : public Il2CppObject
	{
	public:
		::System::Security::SecurityDocument* _doc; // 0x10
		::System::Security::Util::Tokenizer* _t; // 0x18

		::System::Security::SecurityElement* GetTopElement()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_GETTOPELEMENT_OFFSET))(nullptr);
		}

		::System::Void GetRequiredSizes(::System::Security::Util::TokenizerStream* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Security::Util::TokenizerStream*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_GETREQUIREDSIZES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 DetermineFormat(::System::Security::Util::TokenizerStream* arg)
		{
			return (return (::System::Int32(*)(::System::Security::Util::TokenizerStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_DETERMINEFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void ParseContents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_PARSECONTENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Util::Tokenizer* arg)
		{
			((::System::Void(*)(::System::Security::Util::Tokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

