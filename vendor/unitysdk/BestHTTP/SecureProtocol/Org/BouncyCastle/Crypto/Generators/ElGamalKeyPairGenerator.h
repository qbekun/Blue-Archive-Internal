#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ElGamalKeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_ELGAMALKEYPAIRGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C94A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_ELGAMALKEYPAIRGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6C94B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_ELGAMALKEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x6C9570)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int ElGamalKeyPairGenerator_TypeDefinitionIndex = 22464;

	class ElGamalKeyPairGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters* param; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_ELGAMALKEYPAIRGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_ELGAMALKEYPAIRGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_ELGAMALKEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET))(nullptr);
		}

	};
}

