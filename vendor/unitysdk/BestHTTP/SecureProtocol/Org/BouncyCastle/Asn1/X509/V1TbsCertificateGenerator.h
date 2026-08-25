#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerTaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Time; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerUtcTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class TbsCertificateStructure; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x802620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x8026C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x8026D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETISSUER_OFFSET UNITYSDK_OFFSET(0x8026E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET UNITYSDK_OFFSET(0x8026F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET UNITYSDK_OFFSET(0x802700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET UNITYSDK_OFFSET(0x802770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET UNITYSDK_OFFSET(0x802780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSUBJECT_OFFSET UNITYSDK_OFFSET(0x8027F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x802800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_GENERATETBSCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x802810)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int V1TbsCertificateGenerator_TypeDefinitionIndex = 22926;

	class V1TbsCertificateGenerator : public Il2CppObject
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

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETISSUER_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSUBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubjectPublicKeyInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_SETSUBJECTPUBLICKEYINFO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GenerateTbsCertificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V1TBSCERTIFICATEGENERATOR_GENERATETBSCERTIFICATE_OFFSET))(nullptr);
		}

	};
}

