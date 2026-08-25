#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Math::Prime { class ConfidenceFactor; }
namespace Mono::Math::Prime { class PrimalityTest; }
namespace Mono::Math { class BigInteger; }

#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_CONFIDENCE_OFFSET UNITYSDK_OFFSET(0x911C4E0)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_PRIMALITYTEST_OFFSET UNITYSDK_OFFSET(0x911C4F0)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_TRIALDIVISIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x911C560)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x911C570)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int PrimeGeneratorBase_TypeDefinitionIndex = 35824;

	class PrimeGeneratorBase : public Il2CppObject
	{
	public:
		::Mono::Math::Prime::ConfidenceFactor* get_Confidence()
		{
			return (return (::Mono::Math::Prime::ConfidenceFactor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_CONFIDENCE_OFFSET))(nullptr);
		}

		::Mono::Math::Prime::PrimalityTest* get_PrimalityTest()
		{
			return (return (::Mono::Math::Prime::PrimalityTest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_PRIMALITYTEST_OFFSET))(nullptr);
		}

		::System::Int32 get_TrialDivisionBounds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_TRIALDIVISIONBOUNDS_OFFSET))(nullptr);
		}

		::Mono::Math::BigInteger* GenerateNewPrime(::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

