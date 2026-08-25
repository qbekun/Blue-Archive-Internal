#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess { class SigningCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess { class EssCertID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x855E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x856020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8561A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_GETCERTS_OFFSET UNITYSDK_OFFSET(0x856220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_GETPOLICIES_OFFSET UNITYSDK_OFFSET(0x856390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x856500)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess
{
	inline static constexpr unsigned int SigningCertificate_TypeDefinitionIndex = 23112;

	class SigningCertificate : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* certs; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* policies; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificate* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificate*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertID* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCerts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_GETCERTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPolicies()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_GETPOLICIES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

