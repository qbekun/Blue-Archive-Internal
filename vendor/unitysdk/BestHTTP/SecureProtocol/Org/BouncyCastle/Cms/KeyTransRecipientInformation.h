#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class KeyTransRecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsTypedStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSecureReadable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_UNWRAPKEY_OFFSET UNITYSDK_OFFSET(0x7BC630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_GETEXCHANGEENCRYPTIONALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x7BC9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x7BCBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BCBC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int KeyTransRecipientInformation_TypeDefinitionIndex = 22723;

	class KeyTransRecipientInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* UnwrapKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_UNWRAPKEY_OFFSET))(arg, nullptr);
		}

		::System::String* GetExchangeEncryptionAlgorithmName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_GETEXCHANGEENCRYPTIONALGORITHMNAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFORMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

