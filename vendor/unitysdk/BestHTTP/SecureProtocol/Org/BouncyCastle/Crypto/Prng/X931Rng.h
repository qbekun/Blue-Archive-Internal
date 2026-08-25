#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_.CTOR_OFFSET UNITYSDK_OFFSET(0x682150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_RESEED_OFFSET UNITYSDK_OFFSET(0x682380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_GET_ENTROPYSOURCE_OFFSET UNITYSDK_OFFSET(0x682510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_INCREMENT_OFFSET UNITYSDK_OFFSET(0x682520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_PROCESS_OFFSET UNITYSDK_OFFSET(0x682560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_GENERATE_OFFSET UNITYSDK_OFFSET(0x682690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_ISTOOLARGE_OFFSET UNITYSDK_OFFSET(0x682BF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int X931Rng_TypeDefinitionIndex = 22293;

	class X931Rng : public Il2CppObject
	{
	public:
		::System::Int64 BLOCK64_RESEED_MAX; // 0x0
		::System::Int64 BLOCK128_RESEED_MAX; // 0x0
		::System::Int32 BLOCK64_MAX_BITS_REQUEST; // 0x0
		::System::Int32 BLOCK128_MAX_BITS_REQUEST; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mEngine; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource; // 0x18
		::Il2CppArray<::System::Object*>* mDT; // 0x20
		::Il2CppArray<::System::Object*>* mI; // 0x28
		::Il2CppArray<::System::Object*>* mR; // 0x30
		::Il2CppArray<::System::Object*>* mV; // 0x38
		::System::Int64 mReseedCounter; // 0x40

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reseed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_RESEED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* get_EntropySource()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_GET_ENTROPYSOURCE_OFFSET))(nullptr);
		}

		::System::Void Increment(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_INCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_PROCESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Generate(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsTooLarge(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931RNG_ISTOOLARGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

