#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerIA5String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Mozilla { class PublicKeyAndChallenge; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_GET_SUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x8450D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8450E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8450F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x845190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x845320)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Mozilla
{
	inline static constexpr unsigned int PublicKeyAndChallenge_TypeDefinitionIndex = 23072;

	class PublicKeyAndChallenge : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* pkacSeq; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* challenge; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_GET_SUBJECTPUBLICKEYINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* get_Challenge()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MOZILLA_PUBLICKEYANDCHALLENGE_GET_CHALLENGE_OFFSET))(nullptr);
		}

	};
}

