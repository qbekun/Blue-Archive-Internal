#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x78DDF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x78E050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x78DE20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETMAC_OFFSET UNITYSDK_OFFSET(0x78E2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GET_MACALGORITHMID_OFFSET UNITYSDK_OFFSET(0x78E2F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GET_MACALGOID_OFFSET UNITYSDK_OFFSET(0x78E300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETRECIPIENTINFOS_OFFSET UNITYSDK_OFFSET(0x78E340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x78E350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETAUTHATTRS_OFFSET UNITYSDK_OFFSET(0x78E360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETUNAUTHATTRS_OFFSET UNITYSDK_OFFSET(0x78E3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETENCODED_OFFSET UNITYSDK_OFFSET(0x78E440)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsAuthenticatedData_TypeDefinitionIndex = 22668;

	class CmsAuthenticatedData : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* authAttrs; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs; // 0x30
		::Il2CppArray<::System::Object*>* mac; // 0x38

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETMAC_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GET_MACALGORITHMID_OFFSET))(nullptr);
		}

		::System::String* get_MacAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GET_MACALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETRECIPIENTINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GET_CONTENTINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETAUTHATTRS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETUNAUTHATTRS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATA_GETENCODED_OFFSET))(nullptr);
		}

	};
}

