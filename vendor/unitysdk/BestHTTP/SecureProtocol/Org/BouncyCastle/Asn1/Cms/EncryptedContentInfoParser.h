#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObjectParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SequenceParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x876780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x878140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_GETENCRYPTEDCONTENT_OFFSET UNITYSDK_OFFSET(0x878150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_GET_CONTENTENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x8781F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int EncryptedContentInfoParser_TypeDefinitionIndex = 23185;

	class EncryptedContentInfoParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* _contentType; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _contentEncryptionAlgorithm; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* _encryptedContent; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* GetEncryptedContent(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_GETENCRYPTEDCONTENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ContentEncryptionAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENCRYPTEDCONTENTINFOPARSER_GET_CONTENTENCRYPTIONALGORITHM_OFFSET))(nullptr);
		}

	};
}

