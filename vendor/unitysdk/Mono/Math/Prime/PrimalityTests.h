#pragma once
#include "../../../unitysdk.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Math::Prime { class ConfidenceFactor; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x911BDE0)
#define MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x911BF60)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTests_TypeDefinitionIndex = 35823;

	class PrimalityTests : public Il2CppObject
	{
	public:
		::System::Int32 GetSPPRounds(::Mono::Math::BigInteger* arg, ::Mono::Math::Prime::ConfidenceFactor* arg)
		{
			return (return (::System::Int32(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RabinMillerTest(::Mono::Math::BigInteger* arg, ::Mono::Math::Prime::ConfidenceFactor* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET))(arg, arg, nullptr);
		}

	};
}

