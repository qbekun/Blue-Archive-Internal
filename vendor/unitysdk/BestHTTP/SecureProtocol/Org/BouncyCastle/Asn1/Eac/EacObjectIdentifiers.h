#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EAC_EACOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x863760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EAC_EACOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x863770)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Eac
{
	inline static constexpr unsigned int EacObjectIdentifiers_TypeDefinitionIndex = 23141;

	class EacObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* bsi_de; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_PK; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_PK_DH; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_PK_ECDH; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_DH; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_DH_3DES_CBC_CBC; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_ECDH; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_ECDH_3DES_CBC_CBC; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_v1_5_SHA_1; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_v1_5_SHA_256; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_PSS_SHA_1; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_PSS_SHA_256; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_1; // 0x80
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_224; // 0x88
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_256; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_384; // 0x98
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_512; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EAC_EACOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_EAC_EACOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

