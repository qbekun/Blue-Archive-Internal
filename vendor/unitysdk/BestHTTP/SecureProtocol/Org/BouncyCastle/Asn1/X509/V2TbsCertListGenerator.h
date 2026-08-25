#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Time; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerUtcTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class TbsCertificateList; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x803740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x8037B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETISSUER_OFFSET UNITYSDK_OFFSET(0x8037C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETTHISUPDATE_OFFSET UNITYSDK_OFFSET(0x8037D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x803840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETTHISUPDATE_OFFSET UNITYSDK_OFFSET(0x8038D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x8038E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x8038F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x8039E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x803A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x803A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x8046D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x804840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_GENERATETBSCERTLIST_OFFSET UNITYSDK_OFFSET(0x804850)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int V2TbsCertListGenerator_TypeDefinitionIndex = 22929;

	class V2TbsCertListGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* issuer; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* thisUpdate; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* nextUpdate; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x38
		::System::Collections::IList* crlEntries; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETISSUER_OFFSET))(arg, nullptr);
		}

		::System::Void SetThisUpdate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETTHISUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextUpdate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETNEXTUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetThisUpdate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETTHISUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextUpdate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETNEXTUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET))(arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_SETEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GenerateTbsCertList()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2TBSCERTLISTGENERATOR_GENERATETBSCERTLIST_OFFSET))(nullptr);
		}

	};
}

