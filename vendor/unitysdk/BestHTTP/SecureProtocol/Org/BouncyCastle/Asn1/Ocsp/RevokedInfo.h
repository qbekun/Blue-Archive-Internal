#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class CrlReason; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class RevokedInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83D590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x840540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8408C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8408D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8406D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GET_REVOCATIONTIME_OFFSET UNITYSDK_OFFSET(0x840970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GET_REVOCATIONREASON_OFFSET UNITYSDK_OFFSET(0x840980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x840990)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp
{
	inline static constexpr unsigned int RevokedInfo_TypeDefinitionIndex = 23064;

	class RevokedInfo : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlReason* revocationReason; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlReason* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlReason*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_RevocationTime()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GET_REVOCATIONTIME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlReason* get_RevocationReason()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlReason*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_GET_REVOCATIONREASON_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REVOKEDINFO_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

