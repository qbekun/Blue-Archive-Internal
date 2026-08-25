#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6924A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x692560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_GET_CERTAINTY_OFFSET UNITYSDK_OFFSET(0x692580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_GET_COUNTSMALLPRIMES_OFFSET UNITYSDK_OFFSET(0x692590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x6925A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int NaccacheSternKeyGenerationParameters_TypeDefinitionIndex = 22353;

	class NaccacheSternKeyGenerationParameters : public Il2CppObject
	{
	public:
		::System::Int32 certainty; // 0x20
		::System::Int32 countSmallPrimes; // 0x24

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_Certainty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_GET_CERTAINTY_OFFSET))(nullptr);
		}

		::System::Int32 get_CountSmallPrimes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_GET_COUNTSMALLPRIMES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDebug()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_NACCACHESTERNKEYGENERATIONPARAMETERS_GET_ISDEBUG_OFFSET))(nullptr);
		}

	};
}

