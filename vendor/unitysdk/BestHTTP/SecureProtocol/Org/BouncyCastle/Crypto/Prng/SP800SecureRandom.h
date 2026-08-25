#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class IDrbgProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg { class ISP80090Drbg; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x67FA30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x67FAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x67FBE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x67FCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x680030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x6800C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_RESEED_OFFSET UNITYSDK_OFFSET(0x6800D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int SP800SecureRandom_TypeDefinitionIndex = 22285;

	class SP800SecureRandom : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* mDrbgProvider; // 0x28
		::System::Boolean mPredictionResistant; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mRandomSource; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* mDrbg; // 0x48

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetSeed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_SETSEED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSeed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_SETSEED_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_NEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSeed(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_GENERATESEED_OFFSET))(arg, nullptr);
		}

		::System::Void Reseed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOM_RESEED_OFFSET))(arg, nullptr);
		}

	};
}

