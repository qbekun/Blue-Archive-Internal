#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class MersenneTwister; }

#define MX_CORE_MATH_PSEUDORANDOM_CREATETIMEBASEDSEED_OFFSET UNITYSDK_OFFSET(0x102E590)
#define MX_CORE_MATH_PSEUDORANDOM_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x102E5B0)
#define MX_CORE_MATH_PSEUDORANDOM_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x102E5C0)
#define MX_CORE_MATH_PSEUDORANDOM_GET_SEED_OFFSET UNITYSDK_OFFSET(0x102E5D0)
#define MX_CORE_MATH_PSEUDORANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x102E630)
#define MX_CORE_MATH_PSEUDORANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x102E6C0)
#define MX_CORE_MATH_PSEUDORANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x102E740)
#define MX_CORE_MATH_PSEUDORANDOM_SETSEQUENCE_OFFSET UNITYSDK_OFFSET(0x102E810)
#define MX_CORE_MATH_PSEUDORANDOM_RESET_OFFSET UNITYSDK_OFFSET(0x102E770)
#define MX_CORE_MATH_PSEUDORANDOM_RESET_OFFSET UNITYSDK_OFFSET(0x102E8C0)
#define MX_CORE_MATH_PSEUDORANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x102E920)
#define MX_CORE_MATH_PSEUDORANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x102E950)
#define MX_CORE_MATH_PSEUDORANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x102EA00)
#define MX_CORE_MATH_PSEUDORANDOM_NEXTINCLUDEMAX_OFFSET UNITYSDK_OFFSET(0x102EAB0)
#define MX_CORE_MATH_PSEUDORANDOM_NEXTULONG_OFFSET UNITYSDK_OFFSET(0x102EB60)
#define MX_CORE_MATH_PSEUDORANDOM_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x102EBB0)
#define MX_CORE_MATH_PSEUDORANDOM_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x102EBF0)
#define MX_CORE_MATH_PSEUDORANDOM_NEXTFLOATPOSITIVE_OFFSET UNITYSDK_OFFSET(0x102EC40)
#define MX_CORE_MATH_PSEUDORANDOM_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x102EC80)
#define MX_CORE_MATH_PSEUDORANDOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x102ECB0)

namespace MX::Core::Math
{
	inline static constexpr unsigned int PseudoRandom_TypeDefinitionIndex = 12819;

	class PseudoRandom : public Il2CppObject
	{
	public:
		::MX::Core::Math::MersenneTwister* random; // 0x10
		::System::Int32 _Sequence_k__BackingField; // 0x18

		::System::Int32 CreateTimeBasedSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_CREATETIMEBASEDSEED_OFFSET))(nullptr);
		}

		::System::Int32 get_Sequence()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_Sequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_SET_SEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_Seed()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_SETSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_RESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Reset(::System::UInt64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_RESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 Next()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXT_OFFSET))(nullptr);
		}

		::System::Int32 Next(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Next(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 NextIncludeMax(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXTINCLUDEMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt64 NextULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXTULONG_OFFSET))(nullptr);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXTFLOAT_OFFSET))(nullptr);
		}

		::System::Single NextFloat(::System::Boolean arg)
		{
			return ((::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXTFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single NextFloatPositive()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXTFLOATPOSITIVE_OFFSET))(nullptr);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_NEXTDOUBLE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_PSEUDORANDOM_TOSTRING_OFFSET))(nullptr);
		}

	};
}

