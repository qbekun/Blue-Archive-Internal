#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509KeyUsageFlags_TypeDefinitionIndex = 29281;

	class X509KeyUsageFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* None; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* EncipherOnly; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* CrlSign; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* KeyCertSign; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* KeyAgreement; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* DataEncipherment; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* KeyEncipherment; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* NonRepudiation; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* DigitalSignature; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* DecipherOnly; // 0x0

	};
}

