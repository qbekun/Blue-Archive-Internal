#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_COOKIEPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A578F0)
#define SYSTEM_NET_COOKIEPARSER_GET_OFFSET UNITYSDK_OFFSET(0x9A57980)
#define SYSTEM_NET_COOKIEPARSER_CHECKQUOTED_OFFSET UNITYSDK_OFFSET(0x9A55450)

namespace System::Net
{
	inline static constexpr unsigned int CookieParser_TypeDefinitionIndex = 29731;

	class CookieParser : public Il2CppObject
	{
	public:
		::System::Net::CookieTokenizer* m_tokenizer; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Net::Cookie* Get()
		{
			return (return (::System::Net::Cookie*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_GET_OFFSET))(nullptr);
		}

		::System::String* CheckQuoted(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_CHECKQUOTED_OFFSET))(str, nullptr);
		}

	};
}

