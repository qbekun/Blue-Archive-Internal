#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MAIL_QUOTEDPAIRREADER_COUNTQUOTEDCHARS_OFFSET UNITYSDK_OFFSET(0x9AACA40)
#define SYSTEM_NET_MAIL_QUOTEDPAIRREADER_COUNTBACKSLASHES_OFFSET UNITYSDK_OFFSET(0x9AAE190)

namespace System::Net::Mail
{
	inline static constexpr unsigned int QuotedPairReader_TypeDefinitionIndex = 29932;

	class QuotedPairReader : public Il2CppObject
	{
	public:
		::System::Int32 CountQuotedChars(::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_QUOTEDPAIRREADER_COUNTQUOTEDCHARS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 CountBackslashes(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_QUOTEDPAIRREADER_COUNTBACKSLASHES_OFFSET))(str, arg, nullptr);
		}

	};
}

