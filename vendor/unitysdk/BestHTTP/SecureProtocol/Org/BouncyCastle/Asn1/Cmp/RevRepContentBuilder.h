#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class RevRepContentBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatusInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertId; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class CertificateList; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class RevRepContent; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_ADD_OFFSET UNITYSDK_OFFSET(0x8926B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_ADD_OFFSET UNITYSDK_OFFSET(0x8926E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_ADDCRL_OFFSET UNITYSDK_OFFSET(0x892790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x8927C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x892990)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int RevRepContentBuilder_TypeDefinitionIndex = 23256;

	class RevRepContentBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* status; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* revCerts; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* crls; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_ADD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertId* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertId*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_ADD_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* AddCrl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificateList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificateList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_ADDCRL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContent* Build()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_BUILD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENTBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

