#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MICROSOFT_MICROSOFTOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x846F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MICROSOFT_MICROSOFTOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x846F40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Microsoft
{
	inline static constexpr unsigned int MicrosoftObjectIdentifiers_TypeDefinitionIndex = 23079;

	class MicrosoftObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Microsoft; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCertTemplateV1; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCAVersion; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftPrevCACertHash; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCrlNextPublish; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCertTemplateV2; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftAppPolicies; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MICROSOFT_MICROSOFTOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MICROSOFT_MICROSOFTOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

