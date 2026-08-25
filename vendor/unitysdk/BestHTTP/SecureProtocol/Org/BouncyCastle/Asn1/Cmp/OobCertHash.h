#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertId; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class OobCertHash; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x88B7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_GET_HASHALG_OFFSET UNITYSDK_OFFSET(0x88B8A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_GET_CERTID_OFFSET UNITYSDK_OFFSET(0x88B8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x88B8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x88BA30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int OobCertHash_TypeDefinitionIndex = 23235;

	class OobCertHash : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlg; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertId* certId; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* hashVal; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlg()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_GET_HASHALG_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertId* get_CertID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertId*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_GET_CERTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::OobCertHash* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::OobCertHash*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_OOBCERTHASH_GETINSTANCE_OFFSET))(arg, nullptr);
		}

	};
}

