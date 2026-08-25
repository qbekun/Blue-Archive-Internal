#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DHKEYGENERATIONPARAMETERS_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x689990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DHKEYGENERATIONPARAMETERS_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x6899C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DHKEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6899D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int DHKeyGenerationParameters_TypeDefinitionIndex = 22304;

	class DHKeyGenerationParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters; // 0x20

		::System::Int32 GetStrength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DHKEYGENERATIONPARAMETERS_GETSTRENGTH_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DHKEYGENERATIONPARAMETERS_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DHKEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

