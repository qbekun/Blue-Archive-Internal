#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EDEC_EDECOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x863530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EDEC_EDECOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x863750)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::EdEC
{
	inline static constexpr unsigned int EdECObjectIdentifiers_TypeDefinitionIndex = 23140;

	class EdECObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_edwards_curve_algs; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_X25519; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_X448; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_Ed25519; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_Ed448; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EDEC_EDECOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EDEC_EDECOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

