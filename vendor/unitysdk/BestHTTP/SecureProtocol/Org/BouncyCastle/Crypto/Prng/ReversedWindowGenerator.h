#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class IRandomGenerator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x67F360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_ADDSEEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x67F480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_ADDSEEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x67F600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x67F780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x67FA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_DONEXTBYTES_OFFSET UNITYSDK_OFFSET(0x67F7B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int ReversedWindowGenerator_TypeDefinitionIndex = 22284;

	class ReversedWindowGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator; // 0x10
		::Il2CppArray<::System::Object*>* window; // 0x18
		::System::Int32 windowCount; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeedMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_ADDSEEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeedMaterial(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_ADDSEEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_NEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void doNextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_REVERSEDWINDOWGENERATOR_DONEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

