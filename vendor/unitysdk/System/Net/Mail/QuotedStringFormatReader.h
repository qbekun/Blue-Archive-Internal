#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MAIL_QUOTEDSTRINGFORMATREADER_READREVERSEQUOTED_OFFSET UNITYSDK_OFFSET(0x9AADD20)
#define SYSTEM_NET_MAIL_QUOTEDSTRINGFORMATREADER_READREVERSEUNQUOTED_OFFSET UNITYSDK_OFFSET(0x9AADF30)
#define SYSTEM_NET_MAIL_QUOTEDSTRINGFORMATREADER_ISVALIDQTEXT_OFFSET UNITYSDK_OFFSET(0x9AAE250)

namespace System::Net::Mail
{
	inline static constexpr unsigned int QuotedStringFormatReader_TypeDefinitionIndex = 29933;

	class QuotedStringFormatReader : public Il2CppObject
	{
	public:
		::System::Int32 ReadReverseQuoted(::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_QUOTEDSTRINGFORMATREADER_READREVERSEQUOTED_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 ReadReverseUnQuoted(::System::String* str, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_QUOTEDSTRINGFORMATREADER_READREVERSEUNQUOTED_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidQtext(::System::Boolean arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_QUOTEDSTRINGFORMATREADER_ISVALIDQTEXT_OFFSET))(arg, arg, nullptr);
		}

	};
}

