#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Holder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttCertIssuer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttCertValidityPeriod; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttributeCertificateInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7EC0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7EBDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x7EC110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x7EC9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_HOLDER_OFFSET UNITYSDK_OFFSET(0x7EC9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x7EC9E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x7EC9F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x7ECA00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ATTRCERTVALIDITYPERIOD_OFFSET UNITYSDK_OFFSET(0x7ECA10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7ECA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ISSUERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x7ECA30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x7ECA40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7ECA50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int AttributeCertificateInfo_TypeDefinitionIndex = 22873;

	class AttributeCertificateInfo : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder* holder; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* serialNumber; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* attrCertValidityPeriod; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* attributes; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x50

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder* get_Holder()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_HOLDER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer* get_Issuer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ISSUER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Signature()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_SIGNATURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* get_AttrCertValidityPeriod()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ATTRCERTVALIDITYPERIOD_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_Attributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_ISSUERUNIQUEID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_GET_EXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTECERTIFICATEINFO_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

