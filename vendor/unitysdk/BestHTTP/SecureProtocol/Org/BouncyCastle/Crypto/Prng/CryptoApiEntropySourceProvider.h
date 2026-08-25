#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIENTROPYSOURCEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIENTROPYSOURCEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIENTROPYSOURCEPROVIDER_GET_OFFSET UNITYSDK_OFFSET(0x67E340)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int CryptoApiEntropySourceProvider_TypeDefinitionIndex = 22278;

	class CryptoApiEntropySourceProvider : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* mRng; // 0x10
		::System::Boolean mPredictionResistant; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIENTROPYSOURCEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::RandomNumberGenerator* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RandomNumberGenerator*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIENTROPYSOURCEPROVIDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* Get(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_CRYPTOAPIENTROPYSOURCEPROVIDER_GET_OFFSET))(arg, nullptr);
		}

	};
}

