#pragma once
#include "../../../unitysdk.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Math::Prime { class ConfidenceFactor; }

#define MONO_MATH_PRIME_PRIMALITYTEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x911BCC0)
#define MONO_MATH_PRIME_PRIMALITYTEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x911BDD0)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTest_TypeDefinitionIndex = 35822;

	class PrimalityTest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::Mono::Math::BigInteger* arg, ::Mono::Math::Prime::ConfidenceFactor* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

