#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SequenceParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignedDataParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SetParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfoParser; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x882260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETDIGESTALGORITHMS_OFFSET UNITYSDK_OFFSET(0x882540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETCRLS_OFFSET UNITYSDK_OFFSET(0x882610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x882930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETSIGNERINFOS_OFFSET UNITYSDK_OFFSET(0x882BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x882D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8823F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETENCAPCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x882D40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int SignedDataParser_TypeDefinitionIndex = 23210;

	class SignedDataParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* _seq; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* _version; // 0x18
		::System::Object* _nextObject; // 0x20
		::System::Boolean _certsCalled; // 0x28
		::System::Boolean _crlsCalled; // 0x29

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignedDataParser* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignedDataParser*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* GetDigestAlgorithms()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETDIGESTALGORITHMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* GetCrls()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETCRLS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* GetCertificates()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETCERTIFICATES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* GetSignerInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETSIGNERINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEncapContentInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SIGNEDDATAPARSER_GETENCAPCONTENTINFO_OFFSET))(nullptr);
		}

	};
}

