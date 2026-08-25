#pragma once
#include "../../unitysdk.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9117DF0)
#define MONO_MATH_BIGINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9117E60)
#define MONO_MATH_BIGINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9117F30)
#define MONO_MATH_BIGINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91134A0)
#define MONO_MATH_BIGINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9118040)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x91122E0)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9112970)
#define MONO_MATH_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9113860)
#define MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9112A80)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x9112400)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x9112BF0)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x9118F30)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9112590)
#define MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x9119060)
#define MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x9119300)
#define MONO_MATH_BIGINTEGER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x9119540)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x9119630)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x9113780)
#define MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x91128B0)
#define MONO_MATH_BIGINTEGER_TESTBIT_OFFSET UNITYSDK_OFFSET(0x9119800)
#define MONO_MATH_BIGINTEGER_SETBIT_OFFSET UNITYSDK_OFFSET(0x91198A0)
#define MONO_MATH_BIGINTEGER_SETBIT_OFFSET UNITYSDK_OFFSET(0x91198F0)
#define MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET UNITYSDK_OFFSET(0x9119960)
#define MONO_MATH_BIGINTEGER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9114010)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x91180C0)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x91199E0)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9112D80)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x91124F0)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x9113840)
#define MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x9112950)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x9119A70)
#define MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x9119A90)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9119AB0)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9119B00)
#define MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9117FF0)
#define MONO_MATH_BIGINTEGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9113930)
#define MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9119E00)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9119EB0)
#define MONO_MATH_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9119EF0)
#define MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x9112BE0)
#define MONO_MATH_BIGINTEGER_MODPOW_OFFSET UNITYSDK_OFFSET(0x91137D0)
#define MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET UNITYSDK_OFFSET(0x9112390)
#define MONO_MATH_BIGINTEGER_INCR2_OFFSET UNITYSDK_OFFSET(0x911A9C0)
#define MONO_MATH_BIGINTEGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x911AA60)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 35820;

	class BigInteger : public Il2CppObject
	{
	public:
		::System::UInt32 length; // 0x10
		::Il2CppArray<::System::Object*>* data; // 0x18
		::Il2CppArray<::System::Object*>* smallPrimes; // 0x0
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x8

		::System::Void .ctor(Sign* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(Sign*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Mono::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Implicit(::System::UInt32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Implicit(::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Addition(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 op_Modulus(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Modulus(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GET_RNG_OFFSET))(nullptr);
		}

		::Mono::Math::BigInteger* GenerateRandom(::System::Int32 arg, ::System::Security::Cryptography::RandomNumberGenerator* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::System::Security::Cryptography::RandomNumberGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* GenerateRandom(::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET))(arg, nullptr);
		}

		::System::Int32 BitCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean TestBit(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TESTBIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetBit(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetBit(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LowestSetBit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GETBYTES_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThan(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_EQUALS_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET))(arg, nullptr);
		}

		::Mono::Math::BigInteger* ModPow(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODPOW_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* GeneratePseudoPrime(::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET))(arg, nullptr);
		}

		::System::Void Incr2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_INCR2_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

