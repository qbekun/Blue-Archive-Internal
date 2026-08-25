#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class NaccacheSternKeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6CF480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6CF540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_PERMUTELIST_OFFSET UNITYSDK_OFFSET(0x6CF5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_GENERATEPRIME_OFFSET UNITYSDK_OFFSET(0x6CFA70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x6CFAE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6D1090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_FINDFIRSTPRIMES_OFFSET UNITYSDK_OFFSET(0x6D0EB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int NaccacheSternKeyPairGenerator_TypeDefinitionIndex = 22475;

	class NaccacheSternKeyPairGenerator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* smallPrimes; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* param; // 0x10

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IList* permuteList(::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_PERMUTELIST_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* generatePrime(::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_GENERATEPRIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_GENERATEKEYPAIR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IList* findFirstPrimes(::System::Int32 arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_NACCACHESTERNKEYPAIRGENERATOR_FINDFIRSTPRIMES_OFFSET))(arg, nullptr);
		}

	};
}

