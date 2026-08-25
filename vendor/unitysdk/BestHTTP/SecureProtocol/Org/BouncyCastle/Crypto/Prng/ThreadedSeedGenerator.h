#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_THREADEDSEEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x681840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_THREADEDSEEDGENERATOR_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x681850)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int ThreadedSeedGenerator_TypeDefinitionIndex = 22291;

	class ThreadedSeedGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_THREADEDSEEDGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSeed(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_THREADEDSEEDGENERATOR_GENERATESEED_OFFSET))(arg, arg, nullptr);
		}

	};
}

