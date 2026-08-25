#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class EnvelopedDataParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x791E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x791EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GET_ENCRYPTIONALGORITHMID_OFFSET UNITYSDK_OFFSET(0x7921F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GET_ENCRYPTIONALGOID_OFFSET UNITYSDK_OFFSET(0x792200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GET_ENCRYPTIONALGPARAMS_OFFSET UNITYSDK_OFFSET(0x792240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GETRECIPIENTINFOS_OFFSET UNITYSDK_OFFSET(0x792290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GETUNPROTECTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7922A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsEnvelopedDataParser_TypeDefinitionIndex = 22682;

	class CmsEnvelopedDataParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* envelopedData; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _encAlg; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* _unprotectedAttributes; // 0x38
		::System::Boolean _attrNotRead; // 0x40

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GET_ENCRYPTIONALGORITHMID_OFFSET))(nullptr);
		}

		::System::String* get_EncryptionAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GET_ENCRYPTIONALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_EncryptionAlgParams()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GET_ENCRYPTIONALGPARAMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GETRECIPIENTINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnprotectedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAPARSER_GETUNPROTECTEDATTRIBUTES_OFFSET))(nullptr);
		}

	};
}

