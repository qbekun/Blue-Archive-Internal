#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess { class SigningCertificateV2; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess { class EssCertIDv2; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x856670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x856800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x8569D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x856A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x856AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_GETCERTS_OFFSET UNITYSDK_OFFSET(0x856B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_GETPOLICIES_OFFSET UNITYSDK_OFFSET(0x856D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x856EB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess
{
	inline static constexpr unsigned int SigningCertificateV2_TypeDefinitionIndex = 23113;

	class SigningCertificateV2 : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* certs; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* policies; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCerts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_GETCERTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPolicies()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_GETPOLICIES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESS_SIGNINGCERTIFICATEV2_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

