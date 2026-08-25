#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerTaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Time; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerUtcTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class TbsCertificateStructure; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x804DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x804E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x804E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETISSUER_OFFSET UNITYSDK_OFFSET(0x804EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET UNITYSDK_OFFSET(0x804EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET UNITYSDK_OFFSET(0x804F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET UNITYSDK_OFFSET(0x804F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET UNITYSDK_OFFSET(0x804FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSUBJECT_OFFSET UNITYSDK_OFFSET(0x804FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETISSUERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x804FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSUBJECTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x804FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x804FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x804FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_GENERATETBSCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x805180)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int V3TbsCertificateGenerator_TypeDefinitionIndex = 22930;

	class V3TbsCertificateGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerTaggedObject* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* serialNumber; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* issuer; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* startDate; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* endDate; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* subject; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x50
		::System::Boolean altNamePresentAndCritical; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETISSUER_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSUBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuerUniqueID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETISSUERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubjectUniqueID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSUBJECTUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubjectPublicKeyInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETSUBJECTPUBLICKEYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_SETEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GenerateTbsCertificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V3TBSCERTIFICATEGENERATOR_GENERATETBSCERTIFICATE_OFFSET))(nullptr);
		}

	};
}

