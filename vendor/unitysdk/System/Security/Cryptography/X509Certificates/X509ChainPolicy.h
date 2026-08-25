#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B15830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_EXTRASTORE_OFFSET UNITYSDK_OFFSET(0x9B17380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_EXTRASTORE_OFFSET UNITYSDK_OFFSET(0x9B19E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONFLAG_OFFSET UNITYSDK_OFFSET(0x9B19E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONMODE_OFFSET UNITYSDK_OFFSET(0x9B19E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_REVOCATIONMODE_OFFSET UNITYSDK_OFFSET(0x9B19E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9B19F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_VERIFICATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9B19F10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x9B19F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_RESET_OFFSET UNITYSDK_OFFSET(0x9B19D40)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainPolicy_TypeDefinitionIndex = 29305;

	class X509ChainPolicy : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::OidCollection* apps; // 0x10
		::System::Security::Cryptography::OidCollection* cert; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store; // 0x20
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2; // 0x28
		::System::Security::Cryptography::X509Certificates::X509RevocationFlag* rflag; // 0x30
		::System::Security::Cryptography::X509Certificates::X509RevocationMode* mode; // 0x34
		::System::TimeSpan* timeout; // 0x38
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* vflags; // 0x40
		::System::DateTime* vtime; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_ExtraStore()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_EXTRASTORE_OFFSET))(nullptr);
		}

		::System::Void set_ExtraStore(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_EXTRASTORE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509RevocationFlag* get_RevocationFlag()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509RevocationFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONFLAG_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509RevocationMode* get_RevocationMode()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509RevocationMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_RevocationMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_REVOCATIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* get_VerificationFlags()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509VerificationFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONFLAGS_OFFSET))(nullptr);
		}

		::System::Void set_VerificationFlags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509VerificationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_VERIFICATIONFLAGS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_VerificationTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONTIME_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_RESET_OFFSET))(nullptr);
		}

	};
}

