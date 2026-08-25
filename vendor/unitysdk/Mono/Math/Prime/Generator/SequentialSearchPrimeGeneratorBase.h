#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATESEARCHBASE_OFFSET UNITYSDK_OFFSET(0x911C580)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET UNITYSDK_OFFSET(0x911C670)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET UNITYSDK_OFFSET(0x911C690)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_ISPRIMEACCEPTABLE_OFFSET UNITYSDK_OFFSET(0x911CBF0)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x911A9B0)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int SequentialSearchPrimeGeneratorBase_TypeDefinitionIndex = 35825;

	class SequentialSearchPrimeGeneratorBase : public Il2CppObject
	{
	public:
		::Mono::Math::BigInteger* GenerateSearchBase(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATESEARCHBASE_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* GenerateNewPrime(::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* GenerateNewPrime(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPrimeAcceptable(::Mono::Math::BigInteger* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_ISPRIMEACCEPTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

