#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiBody; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x88C180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0x88C340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0x88C570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GETBODYFORTYPE_OFFSET UNITYSDK_OFFSET(0x88C3A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x88D3C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x88D3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x88D3E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiBody_TypeDefinitionIndex = 23237;

	class PkiBody : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 TYPE_INIT_REQ; // 0x0
		::System::Int32 TYPE_INIT_REP; // 0x0
		::System::Int32 TYPE_CERT_REQ; // 0x0
		::System::Int32 TYPE_CERT_REP; // 0x0
		::System::Int32 TYPE_P10_CERT_REQ; // 0x0
		::System::Int32 TYPE_POPO_CHALL; // 0x0
		::System::Int32 TYPE_POPO_REP; // 0x0
		::System::Int32 TYPE_KEY_UPDATE_REQ; // 0x0
		::System::Int32 TYPE_KEY_UPDATE_REP; // 0x0
		::System::Int32 TYPE_KEY_RECOVERY_REQ; // 0x0
		::System::Int32 TYPE_KEY_RECOVERY_REP; // 0x0
		::System::Int32 TYPE_REVOCATION_REQ; // 0x0
		::System::Int32 TYPE_REVOCATION_REP; // 0x0
		::System::Int32 TYPE_CROSS_CERT_REQ; // 0x0
		::System::Int32 TYPE_CROSS_CERT_REP; // 0x0
		::System::Int32 TYPE_CA_KEY_UPDATE_ANN; // 0x0
		::System::Int32 TYPE_CERT_ANN; // 0x0
		::System::Int32 TYPE_REVOCATION_ANN; // 0x0
		::System::Int32 TYPE_CRL_ANN; // 0x0
		::System::Int32 TYPE_CONFIRM; // 0x0
		::System::Int32 TYPE_NESTED; // 0x0
		::System::Int32 TYPE_GEN_MSG; // 0x0
		::System::Int32 TYPE_GEN_REP; // 0x0
		::System::Int32 TYPE_ERROR; // 0x0
		::System::Int32 TYPE_CERT_CONFIRM; // 0x0
		::System::Int32 TYPE_POLL_REQ; // 0x0
		::System::Int32 TYPE_POLL_REP; // 0x0
		::System::Int32 tagNo; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* body; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiBody* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiBody*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetBodyForType(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GETBODYFORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Content()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_GET_CONTENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIBODY_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

