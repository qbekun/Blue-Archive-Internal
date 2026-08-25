#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_KISA_KISAOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x847220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_KISA_KISAOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x847230)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Kisa
{
	inline static constexpr unsigned int KisaObjectIdentifiers_TypeDefinitionIndex = 23080;

	class KisaObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSeedCbc; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdNpkiAppCmsSeedWrap; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_KISA_KISAOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_KISA_KISAOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

