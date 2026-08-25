#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class RecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x7BDD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_SET_KEYDERIVATIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x7BDD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEYOID_OFFSET UNITYSDK_OFFSET(0x7BDD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7BDD40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x7BDDC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BE2D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int PasswordRecipientInfoGenerator_TypeDefinitionIndex = 22727;

	class PasswordRecipientInfoGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* keyEncryptionKey; // 0x18
		::System::String* keyEncryptionKeyOID; // 0x20

		::System::Void set_KeyEncryptionKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeyDerivationAlgorithm(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_SET_KEYDERIVATIONALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeyEncryptionKeyOID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEYOID_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PASSWORDRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

