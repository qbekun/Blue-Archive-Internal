#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_ENTROPYUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x67F190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_ENTROPYUTILITIES_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x67F1A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int EntropyUtilities_TypeDefinitionIndex = 22281;

	class EntropyUtilities : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_ENTROPYUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSeed(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_ENTROPYUTILITIES_GENERATESEED_OFFSET))(arg, arg, nullptr);
		}

	};
}

