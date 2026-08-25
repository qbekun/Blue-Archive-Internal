#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Gost3410KeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410KEYPAIRGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6C9830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410KEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x6C9970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410KEYPAIRGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C9BB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int Gost3410KeyPairGenerator_TypeDefinitionIndex = 22466;

	class Gost3410KeyPairGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters* param; // 0x10

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410KEYPAIRGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410KEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410KEYPAIRGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

