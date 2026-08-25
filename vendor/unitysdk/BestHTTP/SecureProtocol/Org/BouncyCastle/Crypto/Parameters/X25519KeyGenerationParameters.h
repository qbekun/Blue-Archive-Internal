#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519KEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x695720)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int X25519KeyGenerationParameters_TypeDefinitionIndex = 22373;

	class X25519KeyGenerationParameters : public Il2CppObject
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519KEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

