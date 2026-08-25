#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int StoreName_TypeDefinitionIndex = 29277;

	class StoreName : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::StoreName* AddressBook; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* AuthRoot; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* CertificateAuthority; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* Disallowed; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* My; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* Root; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* TrustedPeople; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreName* TrustedPublisher; // 0x0

	};
}

