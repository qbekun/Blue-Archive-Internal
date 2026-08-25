#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_BASICENTROPYSOURCEPROVIDER_GET_OFFSET UNITYSDK_OFFSET(0x67E0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_BASICENTROPYSOURCEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E1B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int BasicEntropySourceProvider_TypeDefinitionIndex = 22276;

	class BasicEntropySourceProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mSecureRandom; // 0x10
		::System::Boolean mPredictionResistant; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* Get(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_BASICENTROPYSOURCEPROVIDER_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_BASICENTROPYSOURCEPROVIDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

