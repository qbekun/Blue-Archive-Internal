#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class KekRecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsTypedStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSecureReadable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x7B8E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B9500)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int KekRecipientInformation_TypeDefinitionIndex = 22719;

	class KekRecipientInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFORMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

