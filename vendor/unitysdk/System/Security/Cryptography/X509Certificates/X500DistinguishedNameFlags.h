#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X500DistinguishedNameFlags_TypeDefinitionIndex = 29278;

	class X500DistinguishedNameFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* None; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* Reversed; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* UseSemicolons; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* DoNotUsePlusSign; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* DoNotUseQuotes; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* UseCommas; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* UseNewLines; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* UseUTF8Encoding; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* UseT61Encoding; // 0x0
		::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* ForceUTF8Encoding; // 0x0

	};
}

