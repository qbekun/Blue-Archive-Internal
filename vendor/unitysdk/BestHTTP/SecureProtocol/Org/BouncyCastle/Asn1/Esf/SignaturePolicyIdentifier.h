#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class SignaturePolicyId; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class SignaturePolicyIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x862020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8622A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x862210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_GET_SIGNATUREPOLICYID_OFFSET UNITYSDK_OFFSET(0x8622D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8622E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int SignaturePolicyIdentifier_TypeDefinitionIndex = 23136;

	class SignaturePolicyIdentifier : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* sigPolicy; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* get_SignaturePolicyId()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_GET_SIGNATUREPOLICYID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNATUREPOLICYIDENTIFIER_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

