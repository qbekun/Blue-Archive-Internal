#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class X931Rng; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x682C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x682C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x682D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x682EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x682FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x683070)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int X931SecureRandom_TypeDefinitionIndex = 22294;

	class X931SecureRandom : public Il2CppObject
	{
	public:
		::System::Boolean mPredictionResistant; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mRandomSource; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931Rng* mDrbg; // 0x38

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931Rng* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931Rng*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetSeed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_SETSEED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSeed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_SETSEED_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_NEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSeed(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_X931SECURERANDOM_GENERATESEED_OFFSET))(arg, nullptr);
		}

	};
}

