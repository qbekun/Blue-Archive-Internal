#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EC740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EC750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_GET_DEFAULTSTRENGTH_OFFSET UNITYSDK_OFFSET(0x5EC7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x5EC7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_ENGINEINIT_OFFSET UNITYSDK_OFFSET(0x5EC870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x5EC8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_ENGINEGENERATEKEY_OFFSET UNITYSDK_OFFSET(0x5ECAC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int CipherKeyGenerator_TypeDefinitionIndex = 22014;

	class CipherKeyGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x10
		::System::Int32 strength; // 0x18
		::System::Boolean uninitialised; // 0x1C
		::System::Int32 defaultStrength; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DefaultStrength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_GET_DEFAULTSTRENGTH_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void engineInit(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_ENGINEINIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_GENERATEKEY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* engineGenerateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CIPHERKEYGENERATOR_ENGINEGENERATEKEY_OFFSET))(nullptr);
		}

	};
}

