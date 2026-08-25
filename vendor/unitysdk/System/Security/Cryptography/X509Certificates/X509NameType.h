#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509NameType_TypeDefinitionIndex = 29282;

	class X509NameType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509NameType* SimpleName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509NameType* EmailName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509NameType* UpnName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509NameType* DnsName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509NameType* DnsFromAlternativeName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509NameType* UrlName; // 0x0

	};
}

