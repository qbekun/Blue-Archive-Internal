#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6925B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_GET_G_OFFSET UNITYSDK_OFFSET(0x692600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_GET_LOWERSIGMABOUND_OFFSET UNITYSDK_OFFSET(0x692610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_GET_MODULUS_OFFSET UNITYSDK_OFFSET(0x692620)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int NaccacheSternKeyParameters_TypeDefinitionIndex = 22354;

	class NaccacheSternKeyParameters : public ::UnityEngine::Animations::Rigging::WeightedTransformArrayBinder
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* g; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* n; // 0x20
		::System::Int32 lowerSigmaBound; // 0x28

		::System::Void .ctor(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_G()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_GET_G_OFFSET))(nullptr);
		}

		::System::Int32 get_LowerSigmaBound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_GET_LOWERSIGMABOUND_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Modulus()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYPARAMETERS_GET_MODULUS_OFFSET))(nullptr);
		}

	};
}

