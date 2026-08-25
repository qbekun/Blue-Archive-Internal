#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FB7B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FB7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FB7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7FBE50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int PolicyMappings_TypeDefinitionIndex = 22905;

	class PolicyMappings : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYMAPPINGS_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

