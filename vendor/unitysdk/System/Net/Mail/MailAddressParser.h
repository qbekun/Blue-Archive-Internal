#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEADDRESS_OFFSET UNITYSDK_OFFSET(0x9AACEC0)
#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEADDRESS_OFFSET UNITYSDK_OFFSET(0x9AACEF0)
#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_READCFWSANDTHROWIFINCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AAD250)
#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEDOMAIN_OFFSET UNITYSDK_OFFSET(0x9AAD2C0)
#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSELOCALPART_OFFSET UNITYSDK_OFFSET(0x9AAD390)
#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9AAD670)
#define SYSTEM_NET_MAIL_MAILADDRESSPARSER_NORMALIZEORTHROW_OFFSET UNITYSDK_OFFSET(0x9AADC10)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailAddressParser_TypeDefinitionIndex = 29931;

	class MailAddressParser : public Il2CppObject
	{
	public:
		::System::Net::Mail::MailAddress* ParseAddress(::System::String* str)
		{
			return (return (::System::Net::Mail::MailAddress*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEADDRESS_OFFSET))(str, nullptr);
		}

		::System::Net::Mail::MailAddress* ParseAddress(::System::String* str, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::System::Net::Mail::MailAddress*(*)(::System::String*, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEADDRESS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 ReadCfwsAndThrowIfIncomplete(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_READCFWSANDTHROWIFINCOMPLETE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ParseDomain(::System::String* str, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEDOMAIN_OFFSET))(str, arg, nullptr);
		}

		::System::String* ParseLocalPart(::System::String* str, int32_t&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSELOCALPART_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* ParseDisplayName(::System::String* str, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_PARSEDISPLAYNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* NormalizeOrThrow(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESSPARSER_NORMALIZEORTHROW_OFFSET))(str, nullptr);
		}

	};
}

