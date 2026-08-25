#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatusInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class CertifiedKeyPair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class CertResponse; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8880E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x887EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x888400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x888420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GET_CERTREQID_OFFSET UNITYSDK_OFFSET(0x888520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x888530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GET_CERTIFIEDKEYPAIR_OFFSET UNITYSDK_OFFSET(0x888540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x888550)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int CertResponse_TypeDefinitionIndex = 23224;

	class CertResponse : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* certReqId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertResponse* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertResponse*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GET_CERTREQID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GET_STATUS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* get_CertifiedKeyPair()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_GET_CERTIFIEDKEYPAIR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTRESPONSE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

