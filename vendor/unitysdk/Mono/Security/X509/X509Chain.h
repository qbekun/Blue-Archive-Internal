#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509ChainStatusFlags; }

#define MONO_SECURITY_X509_X509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x91039A0)
#define MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x9103A10)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9103BA0)
#define MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET UNITYSDK_OFFSET(0x9103BC0)
#define MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET UNITYSDK_OFFSET(0x9104C00)
#define MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x9104B00)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET UNITYSDK_OFFSET(0x91042D0)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET UNITYSDK_OFFSET(0x9104600)
#define MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET UNITYSDK_OFFSET(0x9104C60)
#define MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET UNITYSDK_OFFSET(0x91049A0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 35752;

	class X509Chain : public Il2CppObject
	{
	public:
		::Mono::Security::X509::X509CertificateCollection* roots; // 0x10
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x18
		::Mono::Security::X509::X509Certificate* _root; // 0x20
		::Mono::Security::X509::X509CertificateCollection* _chain; // 0x28
		::Mono::Security::X509::X509ChainStatusFlags* _status; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_.CTOR_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509CertificateCollection* get_TrustAnchors()
		{
			return (return (::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET))(nullptr);
		}

		::System::Void LoadCertificates(::Mono::Security::X509::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Build(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509Certificate* FindCertificateParent(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509Certificate* FindCertificateRoot(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTrusted(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsParent(::Mono::Security::X509::X509Certificate* arg, ::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::X509::X509Certificate*, ::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

