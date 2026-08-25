#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSecureReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsTypedStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_KEYENCRYPTIONALGOID_OFFSET UNITYSDK_OFFSET(0x7BEF30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_KEYENCRYPTIONALGPARAMS_OFFSET UNITYSDK_OFFSET(0x7BEF70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENTFROMSESSIONKEY_OFFSET UNITYSDK_OFFSET(0x7B9260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENTALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x7B9190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x7BEFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_RECIPIENTID_OFFSET UNITYSDK_OFFSET(0x7BF120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B9620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_KEYENCRYPTIONALGORITHMID_OFFSET UNITYSDK_OFFSET(0x7BF130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETMAC_OFFSET UNITYSDK_OFFSET(0x7BF140)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int RecipientInformation_TypeDefinitionIndex = 22733;

	class RecipientInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* rid; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable; // 0x20
		::Il2CppArray<::System::Object*>* resultMac; // 0x28

		::System::String* get_KeyEncryptionAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_KEYENCRYPTIONALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_KeyEncryptionAlgParams()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_KEYENCRYPTIONALGPARAMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetContentFromSessionKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENTFROMSESSIONKEY_OFFSET))(arg, nullptr);
		}

		::System::String* GetContentAlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENTALGORITHMNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetContent(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* get_RecipientID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_RECIPIENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GET_KEYENCRYPTIONALGORITHMID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATION_GETMAC_OFFSET))(nullptr);
		}

	};
}

