#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_GETENTROPY_OFFSET UNITYSDK_OFFSET(0x686840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x686960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_RESEED_OFFSET UNITYSDK_OFFSET(0x686F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_HASH_OFFSET UNITYSDK_OFFSET(0x687200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_ADDTO_OFFSET UNITYSDK_OFFSET(0x687420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_.CTOR_OFFSET UNITYSDK_OFFSET(0x680C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6874E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_DOHASH_OFFSET UNITYSDK_OFFSET(0x6872E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_HASHGEN_OFFSET UNITYSDK_OFFSET(0x687580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_GENERATE_OFFSET UNITYSDK_OFFSET(0x6877F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	inline static constexpr unsigned int HashSP800Drbg_TypeDefinitionIndex = 22298;

	class HashSP800Drbg : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ONE; // 0x0
		::System::Int64 RESEED_MAX; // 0x8
		::System::Int32 MAX_BITS_REQUEST; // 0x10
		::System::Collections::IDictionary* seedlens; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mDigest; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource; // 0x18
		::System::Int32 mSecurityStrength; // 0x20
		::System::Int32 mSeedLength; // 0x24
		::Il2CppArray<::System::Object*>* mV; // 0x28
		::Il2CppArray<::System::Object*>* mC; // 0x30
		::System::Int64 mReseedCounter; // 0x38

		::Il2CppArray<::System::Object*>* GetEntropy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_GETENTROPY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Reseed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_RESEED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Hash(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_HASH_OFFSET))(arg, nullptr);
		}

		::System::Void AddTo(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_ADDTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void DoHash(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_DOHASH_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* hashgen(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_HASHGEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HASHSP800DRBG_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

