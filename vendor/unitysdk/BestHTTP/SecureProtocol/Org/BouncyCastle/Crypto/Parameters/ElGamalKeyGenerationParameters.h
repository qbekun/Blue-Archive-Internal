#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ElGamalParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ELGAMALKEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68F880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ELGAMALKEYGENERATIONPARAMETERS_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x68F910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ELGAMALKEYGENERATIONPARAMETERS_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x68F8E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int ElGamalKeyGenerationParameters_TypeDefinitionIndex = 22330;

	class ElGamalKeyGenerationParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ELGAMALKEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* get_Parameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ELGAMALKEYGENERATIONPARAMETERS_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Int32 GetStrength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ELGAMALKEYGENERATIONPARAMETERS_GETSTRENGTH_OFFSET))(arg, nullptr);
		}

	};
}

