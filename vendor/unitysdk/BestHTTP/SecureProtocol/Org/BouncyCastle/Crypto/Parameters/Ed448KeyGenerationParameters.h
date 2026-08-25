#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448KEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68ECE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int Ed448KeyGenerationParameters_TypeDefinitionIndex = 22327;

	class Ed448KeyGenerationParameters : public Il2CppObject
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448KEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

