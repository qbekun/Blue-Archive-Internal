#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainStatusFlags_TypeDefinitionIndex = 29279;

	class X509ChainStatusFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* NoError; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* NotTimeValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* NotTimeNested; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* Revoked; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* NotSignatureValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* NotValidForUsage; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* UntrustedRoot; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* RevocationStatusUnknown; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* Cyclic; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* InvalidExtension; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* InvalidPolicyConstraints; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* InvalidBasicConstraints; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* InvalidNameConstraints; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* HasNotSupportedNameConstraint; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* HasNotDefinedNameConstraint; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* HasNotPermittedNameConstraint; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* HasExcludedNameConstraint; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* PartialChain; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* CtlNotTimeValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* CtlNotSignatureValid; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* CtlNotValidForUsage; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* OfflineRevocation; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* NoIssuanceChainPolicy; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* ExplicitDistrust; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* HasNotSupportedCriticalExtension; // 0x0
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* HasWeakSignature; // 0x0

	};
}

