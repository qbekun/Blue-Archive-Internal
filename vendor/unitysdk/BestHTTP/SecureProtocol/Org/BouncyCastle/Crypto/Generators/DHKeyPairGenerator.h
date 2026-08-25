#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHKeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DHKEYPAIRGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6C5C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DHKEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x6C5D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DHKEYPAIRGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C5EB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int DHKeyPairGenerator_TypeDefinitionIndex = 22456;

	class DHKeyPairGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* param; // 0x10

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DHKEYPAIRGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DHKEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DHKEYPAIRGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

