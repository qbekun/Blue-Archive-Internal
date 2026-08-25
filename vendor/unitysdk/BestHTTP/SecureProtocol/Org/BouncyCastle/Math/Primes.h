#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_IMPLHASANYSMALLFACTORS_OFFSET UNITYSDK_OFFSET(0x9E8EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_GENERATESTRANDOMPRIME_OFFSET UNITYSDK_OFFSET(0x9E9810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_INC_OFFSET UNITYSDK_OFFSET(0x9EA430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ISMRPROBABLEPRIME_OFFSET UNITYSDK_OFFSET(0x9EA490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_HASHGEN_OFFSET UNITYSDK_OFFSET(0x9EAA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9EAD70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ENHANCEDMRPROBABLEPRIMETEST_OFFSET UNITYSDK_OFFSET(0x9EAE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_IMPLSTRANDOMPRIME_OFFSET UNITYSDK_OFFSET(0x9E99C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_EXTRACT32_OFFSET UNITYSDK_OFFSET(0x9EB7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_IMPLMRPROBABLEPRIMETOBASE_OFFSET UNITYSDK_OFFSET(0x9EA8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ISMRPROBABLEPRIMETOBASE_OFFSET UNITYSDK_OFFSET(0x9EBA00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_HASH_OFFSET UNITYSDK_OFFSET(0x9EAC30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_CHECKCANDIDATE_OFFSET UNITYSDK_OFFSET(0x9EA7B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_HASANYSMALLFACTORS_OFFSET UNITYSDK_OFFSET(0x9EBC90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EBD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ISPRIME32_OFFSET UNITYSDK_OFFSET(0x9EB850)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math
{
	inline static constexpr unsigned int Primes_TypeDefinitionIndex = 21756;

	class Primes : public Il2CppObject
	{
	public:
		::System::Int32 SmallFactorLimit; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* One; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Three; // 0x18

		::System::Boolean ImplHasAnySmallFactors(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_IMPLHASANYSMALLFACTORS_OFFSET))(arg, nullptr);
		}

		STOutput* GenerateSTRandomPrime(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (STOutput*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_GENERATESTRANDOMPRIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Inc(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_INC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMRProbablePrime(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ISMRPROBABLEPRIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* HashGen(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_HASHGEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_.CCTOR_OFFSET))(nullptr);
		}

		MROutput* EnhancedMRProbablePrimeTest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (MROutput*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ENHANCEDMRPROBABLEPRIMETEST_OFFSET))(arg, arg, arg, nullptr);
		}

		STOutput* ImplSTRandomPrime(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (STOutput*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_IMPLSTRANDOMPRIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 Extract32(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_EXTRACT32_OFFSET))(arg, nullptr);
		}

		::System::Boolean ImplMRProbablePrimeToBase(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_IMPLMRPROBABLEPRIMETOBASE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsMRProbablePrimeToBase(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ISMRPROBABLEPRIMETOBASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Hash(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_HASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckCandidate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_CHECKCANDIDATE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean HasAnySmallFactors(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_HASANYSMALLFACTORS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsPrime32(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_PRIMES_ISPRIME32_OFFSET))(arg, nullptr);
		}

	};
}

