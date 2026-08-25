#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class SignerAttribute; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x862360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8624B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x862630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x862660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_GET_CLAIMEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x862690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_GET_CERTIFIEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x8626A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8626B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int SignerAttribute_TypeDefinitionIndex = 23137;

	class SignerAttribute : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignerAttribute* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignerAttribute*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_ClaimedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_GET_CLAIMEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate* get_CertifiedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_GET_CERTIFIEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERATTRIBUTE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

