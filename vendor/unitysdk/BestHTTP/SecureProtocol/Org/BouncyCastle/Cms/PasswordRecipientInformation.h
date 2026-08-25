#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class PasswordRecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSecureReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsTypedStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFORMATION_GET_KEYDERIVATIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x7BE2E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BE300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x7BE390)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int PasswordRecipientInformation_TypeDefinitionIndex = 22728;

	class PasswordRecipientInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyDerivationAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFORMATION_GET_KEYDERIVATIONALGORITHM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFORMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET))(arg, nullptr);
		}

	};
}

