#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Certificate; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETMONOCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9B18840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET UNITYSDK_OFFSET(0x9B13340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B1B110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x9B13210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B155B0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper2_TypeDefinitionIndex = 29311;

	class X509Helper2 : public Il2CppObject
	{
	public:
		::Mono::Security::X509::X509Certificate* GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETMONOCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainImpl*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET))(arg, nullptr);
		}

		::System::Exception* GetInvalidChainContextException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET))(nullptr);
		}

	};
}

