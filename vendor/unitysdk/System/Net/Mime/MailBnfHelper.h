#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINATOMS_OFFSET UNITYSDK_OFFSET(0x9AAA9A0)
#define SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x9AAAD70)
#define SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINDOMAINLITERALS_OFFSET UNITYSDK_OFFSET(0x9AAB190)
#define SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINHEADERNAMES_OFFSET UNITYSDK_OFFSET(0x9AAB570)
#define SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINTOKENS_OFFSET UNITYSDK_OFFSET(0x9AAB7A0)
#define SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINCOMMENTS_OFFSET UNITYSDK_OFFSET(0x9AAB8B0)
#define SYSTEM_NET_MIME_MAILBNFHELPER_ISALLOWEDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9AABD00)
#define SYSTEM_NET_MIME_MAILBNFHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AABDE0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MailBnfHelper_TypeDefinitionIndex = 29927;

	class MailBnfHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Atext; // 0x0
		::Il2CppArray<::System::Object*>* Qtext; // 0x8
		::Il2CppArray<::System::Object*>* Dtext; // 0x10
		::Il2CppArray<::System::Object*>* Ftext; // 0x18
		::Il2CppArray<::System::Object*>* Ttext; // 0x20
		::Il2CppArray<::System::Object*>* Ctext; // 0x28
		::System::Int32 Ascii7bitMaxValue; // 0x30
		::System::Char Quote; // 0x34
		::System::Char Space; // 0x36
		::System::Char Tab; // 0x38
		::System::Char CR; // 0x3A
		::System::Char LF; // 0x3C
		::System::Char StartComment; // 0x3E
		::System::Char EndComment; // 0x40
		::System::Char Backslash; // 0x42
		::System::Char At; // 0x44
		::System::Char EndAngleBracket; // 0x46
		::System::Char StartAngleBracket; // 0x48
		::System::Char StartSquareBracket; // 0x4A
		::System::Char EndSquareBracket; // 0x4C
		::System::Char Comma; // 0x4E
		::System::Char Dot; // 0x50
		::Il2CppArray<::System::Object*>* s_colonSeparator; // 0x58
		::Il2CppArray<::System::Object*>* s_months; // 0x60

		::Il2CppArray<::System::Object*>* CreateCharactersAllowedInAtoms()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINATOMS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCharactersAllowedInQuotedStrings()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINQUOTEDSTRINGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCharactersAllowedInDomainLiterals()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINDOMAINLITERALS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCharactersAllowedInHeaderNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINHEADERNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCharactersAllowedInTokens()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINTOKENS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCharactersAllowedInComments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CREATECHARACTERSALLOWEDINCOMMENTS_OFFSET))(nullptr);
		}

		::System::Boolean IsAllowedWhiteSpace(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_ISALLOWEDWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

