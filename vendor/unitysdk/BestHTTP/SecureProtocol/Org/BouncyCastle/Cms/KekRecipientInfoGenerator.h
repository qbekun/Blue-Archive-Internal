#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class KekIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class RecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x7B8570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B8810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_DETERMINEKEYENCALG_OFFSET UNITYSDK_OFFSET(0x7B8820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x7B8D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_SET_KEKIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7B8DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEYOID_OFFSET UNITYSDK_OFFSET(0x7B8DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7B8DC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int KekRecipientInfoGenerator_TypeDefinitionIndex = 22718;

	class KekRecipientInfoGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* keyEncryptionKey; // 0x10
		::System::String* keyEncryptionKeyOID; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekIdentifier; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DetermineKeyEncAlg(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_DETERMINEKEYENCALG_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_KeyEncryptionKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_KekIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_SET_KEKIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeyEncryptionKeyOID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_SET_KEYENCRYPTIONKEYOID_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEKRECIPIENTINFOGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

