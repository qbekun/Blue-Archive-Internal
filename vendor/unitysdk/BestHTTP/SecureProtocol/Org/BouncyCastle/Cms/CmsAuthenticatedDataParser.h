#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AuthenticatedDataParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78E460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78E4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GET_MACALGORITHMID_OFFSET UNITYSDK_OFFSET(0x78EAF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GET_MACALGOID_OFFSET UNITYSDK_OFFSET(0x78EB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GET_MACALGPARAMS_OFFSET UNITYSDK_OFFSET(0x78EB40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETRECIPIENTINFOS_OFFSET UNITYSDK_OFFSET(0x78EB90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETMAC_OFFSET UNITYSDK_OFFSET(0x78EBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETAUTHATTRS_OFFSET UNITYSDK_OFFSET(0x78EC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETUNAUTHATTRS_OFFSET UNITYSDK_OFFSET(0x78EEC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsAuthenticatedDataParser_TypeDefinitionIndex = 22669;

	class CmsAuthenticatedDataParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* _recipientInfoStore; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* authData; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg; // 0x30
		::Il2CppArray<::System::Object*>* mac; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* authAttrs; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unauthAttrs; // 0x48
		::System::Boolean authAttrNotRead; // 0x50
		::System::Boolean unauthAttrNotRead; // 0x51

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GET_MACALGORITHMID_OFFSET))(nullptr);
		}

		::System::String* get_MacAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GET_MACALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_MacAlgParams()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GET_MACALGPARAMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETRECIPIENTINFOS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETMAC_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETAUTHATTRS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENTICATEDDATAPARSER_GETUNAUTHATTRS_OFFSET))(nullptr);
		}

	};
}

