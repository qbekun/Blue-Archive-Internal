#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_CMSOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x876BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_CMSOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x876BF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int CmsObjectIdentifiers_TypeDefinitionIndex = 23179;

	class CmsObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Data; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedData; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* EnvelopedData; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedAndEnvelopedData; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestedData; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptedData; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthenticatedData; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CompressedData; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthEnvelopedData; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* timestampedData; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ri; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ri_ocsp_response; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ri_scvp; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_CMSOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_CMSOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

