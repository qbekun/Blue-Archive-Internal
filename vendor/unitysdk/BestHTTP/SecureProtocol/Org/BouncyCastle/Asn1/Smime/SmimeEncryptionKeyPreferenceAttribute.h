#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class IssuerAndSerialNumber; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class RecipientKeyIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMEENCRYPTIONKEYPREFERENCEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x823EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMEENCRYPTIONKEYPREFERENCEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x823F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMEENCRYPTIONKEYPREFERENCEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x824060)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime
{
	inline static constexpr unsigned int SmimeEncryptionKeyPreferenceAttribute_TypeDefinitionIndex = 22985;

	class SmimeEncryptionKeyPreferenceAttribute : public ::UnityEngine::AI::NavMeshBuildSource
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMEENCRYPTIONKEYPREFERENCEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMEENCRYPTIONKEYPREFERENCEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMEENCRYPTIONKEYPREFERENCEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

