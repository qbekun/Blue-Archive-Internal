#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68B200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68B260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_L_OFFSET UNITYSDK_OFFSET(0x68B2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_N_OFFSET UNITYSDK_OFFSET(0x68B2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_USAGEINDEX_OFFSET UNITYSDK_OFFSET(0x68B2E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_CERTAINTY_OFFSET UNITYSDK_OFFSET(0x68B2F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x68B300)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int DsaParameterGenerationParameters_TypeDefinitionIndex = 22312;

	class DsaParameterGenerationParameters : public Il2CppObject
	{
	public:
		::System::Int32 DigitalSignatureUsage; // 0x0
		::System::Int32 KeyEstablishmentUsage; // 0x0
		::System::Int32 l; // 0x10
		::System::Int32 n; // 0x14
		::System::Int32 certainty; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x20
		::System::Int32 usageIndex; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_L()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_L_OFFSET))(nullptr);
		}

		::System::Int32 get_N()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_N_OFFSET))(nullptr);
		}

		::System::Int32 get_UsageIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_USAGEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_Certainty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_CERTAINTY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* get_Random()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERGENERATIONPARAMETERS_GET_RANDOM_OFFSET))(nullptr);
		}

	};
}

