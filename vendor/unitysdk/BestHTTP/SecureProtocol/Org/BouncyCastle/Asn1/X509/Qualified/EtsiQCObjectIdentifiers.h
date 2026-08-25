#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ETSIQCOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x813F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ETSIQCOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x813F80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified
{
	inline static constexpr unsigned int EtsiQCObjectIdentifiers_TypeDefinitionIndex = 22945;

	class EtsiQCObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcs; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsQcCompliance; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsLimitValue; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsRetentionPeriod; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsQcSscd; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ETSIQCOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ETSIQCOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

