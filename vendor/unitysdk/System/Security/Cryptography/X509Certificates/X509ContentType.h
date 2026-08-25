#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ContentType_TypeDefinitionIndex = 24407;

	class X509ContentType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509ContentType* Unknown; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* Cert; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* SerializedCert; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* Pfx; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* Pkcs12; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* SerializedStore; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* Pkcs7; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ContentType* Authenticode; // 0x0

	};
}

