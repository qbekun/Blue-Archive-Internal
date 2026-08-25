#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x790B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x790B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x78B200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GET_ENCRYPTIONALGORITHMID_OFFSET UNITYSDK_OFFSET(0x790C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GET_ENCRYPTIONALGOID_OFFSET UNITYSDK_OFFSET(0x790C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GETRECIPIENTINFOS_OFFSET UNITYSDK_OFFSET(0x790C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x790C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GETUNPROTECTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x790C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GETENCODED_OFFSET UNITYSDK_OFFSET(0x790CF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsEnvelopedData_TypeDefinitionIndex = 22680;

	class CmsEnvelopedData : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encAlg; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttributes; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GET_ENCRYPTIONALGORITHMID_OFFSET))(nullptr);
		}

		::System::String* get_EncryptionAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GET_ENCRYPTIONALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GETRECIPIENTINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GET_CONTENTINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnprotectedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GETUNPROTECTEDATTRIBUTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATA_GETENCODED_OFFSET))(nullptr);
		}

	};
}

