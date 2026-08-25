#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Gost3410Parameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_A_OFFSET UNITYSDK_OFFSET(0x6C9BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6CA6A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_BB_OFFSET UNITYSDK_OFFSET(0x6CA6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_B_OFFSET UNITYSDK_OFFSET(0x6CB860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_C_OFFSET UNITYSDK_OFFSET(0x6CBF60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6CC120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_GENERATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6CC140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_AA_OFFSET UNITYSDK_OFFSET(0x6CADA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int Gost3410ParametersGenerator_TypeDefinitionIndex = 22467;

	class Gost3410ParametersGenerator : public Il2CppObject
	{
	public:
		::System::Int32 size; // 0x10
		::System::Int32 typeproc; // 0x14
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* init_random; // 0x18

		::System::Int32 procedure_A(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_A_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void procedure_Bb(::System::Int64 arg, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_BB_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void procedure_B(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_B_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* procedure_C(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_C_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* GenerateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_GENERATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Int64 procedure_Aa(::System::Int64 arg, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_GOST3410PARAMETERSGENERATOR_PROCEDURE_AA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

