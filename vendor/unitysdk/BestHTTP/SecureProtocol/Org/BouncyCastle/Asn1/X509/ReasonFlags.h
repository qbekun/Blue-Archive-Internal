#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_REASONFLAGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FCAB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_REASONFLAGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F2580)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int ReasonFlags_TypeDefinitionIndex = 22909;

	class ReasonFlags : public Il2CppObject
	{
	public:
		::System::Int32 Unused; // 0x0
		::System::Int32 KeyCompromise; // 0x0
		::System::Int32 CACompromise; // 0x0
		::System::Int32 AffiliationChanged; // 0x0
		::System::Int32 Superseded; // 0x0
		::System::Int32 CessationOfOperation; // 0x0
		::System::Int32 CertificateHold; // 0x0
		::System::Int32 PrivilegeWithdrawn; // 0x0
		::System::Int32 AACompromise; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_REASONFLAGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_REASONFLAGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

