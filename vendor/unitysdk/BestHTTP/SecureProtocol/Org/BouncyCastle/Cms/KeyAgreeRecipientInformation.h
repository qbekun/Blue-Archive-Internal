#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class KeyAgreeRecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class OriginatorID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSecureReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class OriginatorPublicKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class OriginatorIdentifierOrKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsTypedStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETPUBLICKEYFROMORIGINATORID_OFFSET UNITYSDK_OFFSET(0x7BAD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETSESSIONKEY_OFFSET UNITYSDK_OFFSET(0x7BAD70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BB6C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_CALCULATEAGREEDWRAPKEY_OFFSET UNITYSDK_OFFSET(0x7BB100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETPUBLICKEYFROMORIGINATORPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x7BB730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETSENDERPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x7BAFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_UNWRAPSESSIONKEY_OFFSET UNITYSDK_OFFSET(0x7BB500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_READRECIPIENTINFO_OFFSET UNITYSDK_OFFSET(0x7BB7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x7BBE00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int KeyAgreeRecipientInformation_TypeDefinitionIndex = 22721;

	class KeyAgreeRecipientInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey; // 0x38

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKeyFromOriginatorID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::OriginatorID* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::OriginatorID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETPUBLICKEYFROMORIGINATORID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetSessionKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETSESSIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CalculateAgreedWrapKey(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_CALCULATEAGREEDWRAPKEY_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKeyFromOriginatorPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETPUBLICKEYFROMORIGINATORPUBLICKEY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetSenderPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETSENDERPUBLICKEY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* UnwrapSessionKey(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_UNWRAPSESSIONKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReadRecipientInfo(::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_READRECIPIENTINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFORMATION_GETCONTENTSTREAM_OFFSET))(arg, nullptr);
		}

	};
}

