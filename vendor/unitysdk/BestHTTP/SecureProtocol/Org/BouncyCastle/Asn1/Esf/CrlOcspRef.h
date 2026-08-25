#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class CrlListID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OcspListID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OtherRevRefs; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class CrlOcspRef; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x8598B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x85B260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x85B9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GET_CRLIDS_OFFSET UNITYSDK_OFFSET(0x85BA30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GET_OCSPIDS_OFFSET UNITYSDK_OFFSET(0x85BA40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GET_OTHERREV_OFFSET UNITYSDK_OFFSET(0x85BA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x85BA60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int CrlOcspRef_TypeDefinitionIndex = 23122;

	class CrlOcspRef : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlListID* crlids; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspListID* ocspids; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* otherRev; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlOcspRef* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlListID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspListID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlListID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspListID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevRefs*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlListID* get_CrlIDs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlListID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GET_CRLIDS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspListID* get_OcspIDs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OcspListID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GET_OCSPIDS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* get_OtherRev()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevRefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_GET_OTHERREV_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLOCSPREF_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

