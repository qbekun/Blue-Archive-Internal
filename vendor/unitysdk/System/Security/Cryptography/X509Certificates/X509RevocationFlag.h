#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509RevocationFlag_TypeDefinitionIndex = 29283;

	class X509RevocationFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509RevocationFlag* EndCertificateOnly; // 0x0
		::System::Security::Cryptography::X509Certificates::X509RevocationFlag* EntireChain; // 0x0
		::System::Security::Cryptography::X509Certificates::X509RevocationFlag* ExcludeRoot; // 0x0

	};
}

