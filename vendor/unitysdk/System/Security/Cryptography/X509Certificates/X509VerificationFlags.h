#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509VerificationFlags_TypeDefinitionIndex = 29286;

	class X509VerificationFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* NoFlag; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreNotTimeValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreCtlNotTimeValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreNotTimeNested; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreInvalidBasicConstraints; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* AllowUnknownCertificateAuthority; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreWrongUsage; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreInvalidName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreInvalidPolicy; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreEndRevocationUnknown; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreCtlSignerRevocationUnknown; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreCertificateAuthorityRevocationUnknown; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* IgnoreRootRevocationUnknown; // 0x0
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags* AllFlags; // 0x0

	};
}

