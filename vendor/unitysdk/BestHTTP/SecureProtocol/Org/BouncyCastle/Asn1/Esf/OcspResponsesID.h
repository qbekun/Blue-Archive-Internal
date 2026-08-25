#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OcspIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OtherHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OcspResponsesID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x85CFF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_.CTOR_OFFSET UNITYSDK_OFFSET(0x85D600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_.CTOR_OFFSET UNITYSDK_OFFSET(0x85D810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_.CTOR_OFFSET UNITYSDK_OFFSET(0x85D820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_GET_OCSPIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x85D8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_GET_OCSPREPHASH_OFFSET UNITYSDK_OFFSET(0x85D8D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x85D8E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int OcspResponsesID_TypeDefinitionIndex = 23127;

	class OcspResponsesID : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* get_OcspIdentifier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_GET_OCSPIDENTIFIER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* get_OcspRepHash()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_GET_OCSPREPHASH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_OCSPRESPONSESID_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

