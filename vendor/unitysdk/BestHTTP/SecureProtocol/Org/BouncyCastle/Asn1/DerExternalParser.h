#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1StreamParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNALPARSER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x7D4EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNALPARSER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7D4EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNALPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CA270)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerExternalParser_TypeDefinitionIndex = 22790;

	class DerExternalParser : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNALPARSER_READOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNALPARSER_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNALPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

