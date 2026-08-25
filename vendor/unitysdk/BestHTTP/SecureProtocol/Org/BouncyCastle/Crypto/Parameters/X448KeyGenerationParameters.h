#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448KEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x695F60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int X448KeyGenerationParameters_TypeDefinitionIndex = 22376;

	class X448KeyGenerationParameters : public Il2CppObject
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448KEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

