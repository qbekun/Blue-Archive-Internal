#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509FindType_TypeDefinitionIndex = 29280;

	class X509FindType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByThumbprint; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindBySubjectName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindBySubjectDistinguishedName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByIssuerName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByIssuerDistinguishedName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindBySerialNumber; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByTimeValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByTimeNotYetValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByTimeExpired; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByTemplateName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByApplicationPolicy; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByCertificatePolicy; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByExtension; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindByKeyUsage; // 0x0
		::System::Security::Cryptography::X509Certificates::X509FindType* FindBySubjectKeyIdentifier; // 0x0

	};
}

