#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Holder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttCertIssuer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttributeX509; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttributeCertificateInfo; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x802BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETHOLDER_OFFSET UNITYSDK_OFFSET(0x802C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x802C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x802D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x802D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x802DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETISSUER_OFFSET UNITYSDK_OFFSET(0x802DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETSTARTDATE_OFFSET UNITYSDK_OFFSET(0x802DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETENDDATE_OFFSET UNITYSDK_OFFSET(0x802DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETISSUERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x802DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x802DF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_GENERATEATTRIBUTECERTIFICATEINFO_OFFSET UNITYSDK_OFFSET(0x802E00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int V2AttributeCertificateInfoGenerator_TypeDefinitionIndex = 22927;

	class V2AttributeCertificateInfoGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder* holder; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* serialNumber; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* attributes; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* startDate; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* endDate; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetHolder(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETHOLDER_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttribute(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_ADDATTRIBUTE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddAttribute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeX509* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeX509*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_ADDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETISSUER_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuerUniqueID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETISSUERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_SETEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GenerateAttributeCertificateInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2ATTRIBUTECERTIFICATEINFOGENERATOR_GENERATEATTRIBUTECERTIFICATEINFO_OFFSET))(nullptr);
		}

	};
}

