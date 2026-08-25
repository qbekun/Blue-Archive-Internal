#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerIA5String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class MetaData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetStringParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class Evidence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SequenceParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class TimeStampedDataParser; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GET_DATAURI_OFFSET UNITYSDK_OFFSET(0x885200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x885210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x885320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x885820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GETTEMPORALEVIDENCE_OFFSET UNITYSDK_OFFSET(0x885830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GET_METADATA_OFFSET UNITYSDK_OFFSET(0x885970)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int TimeStampedDataParser_TypeDefinitionIndex = 23216;

	class TimeStampedDataParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* dataUri; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* metaData; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser* content; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser; // 0x38

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GET_DATAURI_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Content()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GET_CONTENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* GetTemporalEvidence()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GETTEMPORALEVIDENCE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATAPARSER_GET_METADATA_OFFSET))(nullptr);
		}

	};
}

