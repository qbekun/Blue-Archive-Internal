#pragma once
#include "unitysdk.h"

namespace Mono::Math { class BigInteger; }

#define MODULUSRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x911A6C0)
#define MODULUSRING_BARRETTREDUCTION_OFFSET UNITYSDK_OFFSET(0x911AAF0)
#define MODULUSRING_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x911B480)
#define MODULUSRING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x911B620)
#define MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x911A830)
#define MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x911B7F0)

	inline static constexpr unsigned int ModulusRing_TypeDefinitionIndex = 35818;

	class ModulusRing : public Il2CppObject
	{
	public:
		::Mono::Math::BigInteger* mod; // 0x10
		::Mono::Math::BigInteger* constant; // 0x18

		::System::Void .ctor(::Mono::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MODULUSRING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void BarrettReduction(::Mono::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MODULUSRING_BARRETTREDUCTION_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MODULUSRING_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MODULUSRING_DIFFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MODULUSRING_POW_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* Pow(::System::UInt32 arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::UInt32, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MODULUSRING_POW_OFFSET))(arg, arg, nullptr);
		}

	};

