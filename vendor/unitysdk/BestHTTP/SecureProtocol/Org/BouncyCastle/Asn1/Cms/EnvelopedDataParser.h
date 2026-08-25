#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SequenceParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SetParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class OriginatorInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class EncryptedContentInfoParser; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x879340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETRECIPIENTINFOS_OFFSET UNITYSDK_OFFSET(0x879350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETORIGINATORINFO_OFFSET UNITYSDK_OFFSET(0x879490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETENCRYPTEDCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x8797E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETUNPROTECTEDATTRS_OFFSET UNITYSDK_OFFSET(0x879910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x879AF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int EnvelopedDataParser_TypeDefinitionIndex = 23188;

	class EnvelopedDataParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* _seq; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* _version; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* _nextObject; // 0x20
		::System::Boolean _originatorInfoCalled; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETRECIPIENTINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETORIGINATORINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* GetEncryptedContentInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETENCRYPTEDCONTENTINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnprotectedAttrs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_GETUNPROTECTEDATTRS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_ENVELOPEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

