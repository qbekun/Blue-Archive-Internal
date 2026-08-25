#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DsaValidationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DsaParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68B310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68B330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_P_OFFSET UNITYSDK_OFFSET(0x68B460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_Q_OFFSET UNITYSDK_OFFSET(0x68B470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_G_OFFSET UNITYSDK_OFFSET(0x68B480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_VALIDATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x68B490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x68B4A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x68B530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x68B5C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int DsaParameters_TypeDefinitionIndex = 22313;

	class DsaParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* p; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* q; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* g; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* validation; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_P()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_P_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Q()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_Q_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_G()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_G_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* get_ValidationParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GET_VALIDATIONPARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DSAPARAMETERS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

