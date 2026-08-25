#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class OptionalValidity; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertTemplate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_ISSUERUID_OFFSET UNITYSDK_OFFSET(0x86BB10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x86BB20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x86B5F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SIGNINGALG_OFFSET UNITYSDK_OFFSET(0x86C250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x86C260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x86C270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x86C280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x86C2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x86C2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x86C2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x86C2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x86C2E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SUBJECTUID_OFFSET UNITYSDK_OFFSET(0x86C2F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf
{
	inline static constexpr unsigned int CertTemplate_TypeDefinitionIndex = 23154;

	class CertTemplate : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* serialNumber; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signingAlg; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* issuer; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* validity; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* subject; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* issuerUID; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* subjectUID; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x60

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_ISSUERUID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SigningAlg()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SIGNINGALG_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SUBJECT_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_EXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_ISSUER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* get_Validity()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_VALIDITY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_PublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_PUBLICKEY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTTEMPLATE_GET_SUBJECTUID_OFFSET))(nullptr);
		}

	};
}

