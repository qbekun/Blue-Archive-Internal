#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_RSACERTIFICATEEXTENSIONS_GETRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x962E980)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int RSACertificateExtensions_TypeDefinitionIndex = 32919;

	class RSACertificateExtensions : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RSA* GetRSAPublicKey(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_RSACERTIFICATEEXTENSIONS_GETRSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

	};
}

