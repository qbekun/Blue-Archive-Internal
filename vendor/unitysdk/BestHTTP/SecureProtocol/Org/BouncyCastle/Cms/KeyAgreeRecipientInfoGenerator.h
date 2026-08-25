#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class OriginatorPublicKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class RecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_SENDERKEYPAIR_OFFSET UNITYSDK_OFFSET(0x7B9740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_CREATEORIGINATORPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x7B9750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONOID_OFFSET UNITYSDK_OFFSET(0x7B9870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B9880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7B9890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_RECIPIENTCERTS_OFFSET UNITYSDK_OFFSET(0x7B9910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_KEYAGREEMENTOID_OFFSET UNITYSDK_OFFSET(0x7B9970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x7B9980)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int KeyAgreeRecipientInfoGenerator_TypeDefinitionIndex = 22720;

	class KeyAgreeRecipientInfoGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAgreementOID; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyEncryptionOID; // 0x18
		::System::Collections::IList* recipientCerts; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* senderKeyPair; // 0x28

		::System::Void set_SenderKeyPair(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_SENDERKEYPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* CreateOriginatorPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_CREATEORIGINATORPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeyEncryptionOID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONOID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_RecipientCerts(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_RECIPIENTCERTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeyAgreementOID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_SET_KEYAGREEMENTOID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYAGREERECIPIENTINFOGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

