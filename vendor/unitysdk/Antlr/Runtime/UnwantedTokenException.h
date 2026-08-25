#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }
namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_UNWANTEDTOKENEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C87F0)
#define ANTLR_RUNTIME_UNWANTEDTOKENEXCEPTION_GET_UNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x4C8820)
#define ANTLR_RUNTIME_UNWANTEDTOKENEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C8830)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int UnwantedTokenException_TypeDefinitionIndex = 37399;

	class UnwantedTokenException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_UNWANTEDTOKENEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Antlr::Runtime::IToken* get_UnexpectedToken()
		{
			return (return (::Antlr::Runtime::IToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_UNWANTEDTOKENEXCEPTION_GET_UNEXPECTEDTOKEN_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_UNWANTEDTOKENEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

