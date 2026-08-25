#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MAIL_DOMAINLITERALREADER_READREVERSE_OFFSET UNITYSDK_OFFSET(0x9AAC5D0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int DomainLiteralReader_TypeDefinitionIndex = 29929;

	class DomainLiteralReader : public Il2CppObject
	{
	public:
		::System::Int32 ReadReverse(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_DOMAINLITERALREADER_READREVERSE_OFFSET))(str, arg, nullptr);
		}

	};
}

