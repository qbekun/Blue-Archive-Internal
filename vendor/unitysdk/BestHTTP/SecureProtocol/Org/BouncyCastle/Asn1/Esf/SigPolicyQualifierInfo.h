#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class SigPolicyQualifierInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x861D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x863140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x863390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_GET_SIGPOLICYQUALIFIERID_OFFSET UNITYSDK_OFFSET(0x8633F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_GET_SIGQUALIFIER_OFFSET UNITYSDK_OFFSET(0x863400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x863410)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int SigPolicyQualifierInfo_TypeDefinitionIndex = 23139;

	class SigPolicyQualifierInfo : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyQualifierId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* sigQualifier; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SigPolicyQualifierId()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_GET_SIGPOLICYQUALIFIERID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_SigQualifier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_GET_SIGQUALIFIER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGPOLICYQUALIFIERINFO_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

