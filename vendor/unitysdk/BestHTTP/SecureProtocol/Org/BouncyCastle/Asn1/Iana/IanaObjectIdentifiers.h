#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_IANA_IANAOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8502A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_IANA_IANAOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8505A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Iana
{
	inline static constexpr unsigned int IanaObjectIdentifiers_TypeDefinitionIndex = 23100;

	class IanaObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IsakmpOakley; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacMD5; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacSha1; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacTiger; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacRipeMD160; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_IANA_IANAOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_IANA_IANAOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

