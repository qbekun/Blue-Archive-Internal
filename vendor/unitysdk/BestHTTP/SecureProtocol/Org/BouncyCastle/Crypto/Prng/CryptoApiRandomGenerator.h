#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x67E500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x67E510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x67E520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x67E550)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int CryptoApiRandomGenerator_TypeDefinitionIndex = 22279;

	class CryptoApiRandomGenerator : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* rndProv; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::RandomNumberGenerator* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RandomNumberGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeedMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeedMaterial(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIRANDOMGENERATOR_NEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

