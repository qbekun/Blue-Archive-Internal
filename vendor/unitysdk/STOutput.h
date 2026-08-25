#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define STOUTPUT_GET_PRIME_OFFSET UNITYSDK_OFFSET(0x9EBD90)
#define STOUTPUT_GET_PRIMEGENCOUNTER_OFFSET UNITYSDK_OFFSET(0x9EBDA0)
#define STOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EB9B0)
#define STOUTPUT_GET_PRIMESEED_OFFSET UNITYSDK_OFFSET(0x9EBDB0)

	inline static constexpr unsigned int STOutput_TypeDefinitionIndex = 21755;

	class STOutput : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mPrime; // 0x10
		::Il2CppArray<::System::Object*>* mPrimeSeed; // 0x18
		::System::Int32 mPrimeGenCounter; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Prime()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + STOUTPUT_GET_PRIME_OFFSET))(nullptr);
		}

		::System::Int32 get_PrimeGenCounter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STOUTPUT_GET_PRIMEGENCOUNTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STOUTPUT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PrimeSeed()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STOUTPUT_GET_PRIMESEED_OFFSET))(nullptr);
		}

	};

