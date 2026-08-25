#pragma once
#include "unitysdk.h"

#define INT128_.CTOR_OFFSET UNITYSDK_OFFSET(0x286D510)
#define INT128_.CTOR_OFFSET UNITYSDK_OFFSET(0x286D520)
#define INT128_.CTOR_OFFSET UNITYSDK_OFFSET(0x286D530)
#define INT128_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x286D540)
#define INT128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x286D550)
#define INT128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x286D5E0)
#define INT128_EQUALS_OFFSET UNITYSDK_OFFSET(0x286D680)
#define INT128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x286D700)
#define INT128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x286D730)
#define INT128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x286D750)
#define INT128_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x286D770)
#define INT128_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x286D7B0)
#define INT128_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x286D7F0)
#define INT128_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x286D820)
#define INT128_INT128MUL_OFFSET UNITYSDK_OFFSET(0x286D8C0)

	inline static constexpr unsigned int Int128_TypeDefinitionIndex = 34375;

	class Int128 : public Il2CppObject
	{
	public:
		::System::Int64 hi; // 0x10
		::System::UInt64 lo; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INT128_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + INT128_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Int128* arg)
		{
			((::System::Void(*)(Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INT128_ISNEGATIVE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(Int128* arg, Int128* arg)
		{
			return (return (::System::Boolean(*)(Int128*, Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(Int128* arg, Int128* arg)
		{
			return (return (::System::Boolean(*)(Int128*, Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INT128_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_GreaterThan(Int128* arg, Int128* arg)
		{
			return (return (::System::Boolean(*)(Int128*, Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(Int128* arg, Int128* arg)
		{
			return (return (::System::Boolean(*)(Int128*, Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		Int128* op_Addition(Int128* arg, Int128* arg)
		{
			return (return (Int128*(*)(Int128*, Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		Int128* op_Subtraction(Int128* arg, Int128* arg)
		{
			return (return (Int128*(*)(Int128*, Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		Int128* op_UnaryNegation(Int128* arg)
		{
			return (return (Int128*(*)(Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Double op_Explicit(Int128* arg)
		{
			return (return (::System::Double(*)(Int128*, ::PVOID))((::PBYTE)hIl2Cpp + INT128_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Int128* Int128Mul(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Int128*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INT128_INT128MUL_OFFSET))(arg, arg, nullptr);
		}

	};

