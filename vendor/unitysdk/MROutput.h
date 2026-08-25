#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define MROUTPUT_PROVABLYCOMPOSITEWITHFACTOR_OFFSET UNITYSDK_OFFSET(0x9EB6C0)
#define MROUTPUT_PROBABLYPRIME_OFFSET UNITYSDK_OFFSET(0x9EB650)
#define MROUTPUT_GET_ISPROVABLYCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9EBD50)
#define MROUTPUT_GET_FACTOR_OFFSET UNITYSDK_OFFSET(0x9EBD60)
#define MROUTPUT_GET_ISNOTPRIMEPOWER_OFFSET UNITYSDK_OFFSET(0x9EBD70)
#define MROUTPUT_PROVABLYCOMPOSITENOTPRIMEPOWER_OFFSET UNITYSDK_OFFSET(0x9EB730)
#define MROUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EBD10)

	inline static constexpr unsigned int MROutput_TypeDefinitionIndex = 21754;

	class MROutput : public Il2CppObject
	{
	public:
		::System::Boolean mProvablyComposite; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mFactor; // 0x18

		MROutput* ProvablyCompositeWithFactor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (MROutput*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_PROVABLYCOMPOSITEWITHFACTOR_OFFSET))(arg, nullptr);
		}

		MROutput* ProbablyPrime()
		{
			return (return (MROutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_PROBABLYPRIME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsProvablyComposite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_GET_ISPROVABLYCOMPOSITE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Factor()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_GET_FACTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNotPrimePower()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_GET_ISNOTPRIMEPOWER_OFFSET))(nullptr);
		}

		MROutput* ProvablyCompositeNotPrimePower()
		{
			return (return (MROutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_PROVABLYCOMPOSITENOTPRIMEPOWER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MROUTPUT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

