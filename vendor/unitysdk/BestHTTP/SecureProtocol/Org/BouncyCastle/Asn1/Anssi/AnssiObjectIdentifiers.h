#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ANSSI_ANSSIOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x895440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ANSSI_ANSSIOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x895450)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Anssi
{
	inline static constexpr unsigned int AnssiObjectIdentifiers_TypeDefinitionIndex = 23263;

	class AnssiObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* FRP256v1; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ANSSI_ANSSIOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ANSSI_ANSSIOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

