#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class ResponderID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OcspIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x85C4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x85C680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x85C8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_GET_OCSPRESPONDERID_OFFSET UNITYSDK_OFFSET(0x85C9B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_GET_PRODUCEDAT_OFFSET UNITYSDK_OFFSET(0x85C9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x85C9E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int OcspIdentifier_TypeDefinitionIndex = 23125;

	class OcspIdentifier : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* arg, ::System::DateTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* get_OcspResponderID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_GET_OCSPRESPONDERID_OFFSET))(nullptr);
		}

		::System::DateTime* get_ProducedAt()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_GET_PRODUCEDAT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPIDENTIFIER_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

