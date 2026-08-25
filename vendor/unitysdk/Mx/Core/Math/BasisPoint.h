#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }

#define MX_CORE_MATH_BASISPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1026CC0)
#define MX_CORE_MATH_BASISPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1026CD0)
#define MX_CORE_MATH_BASISPOINT_MIN_OFFSET UNITYSDK_OFFSET(0x1026CE0)
#define MX_CORE_MATH_BASISPOINT_MAX_OFFSET UNITYSDK_OFFSET(0x1026D30)
#define MX_CORE_MATH_BASISPOINT_CLAMP_OFFSET UNITYSDK_OFFSET(0x1026D80)
#define MX_CORE_MATH_BASISPOINT_FROMFLOAT_OFFSET UNITYSDK_OFFSET(0x1026EB0)
#define MX_CORE_MATH_BASISPOINT_FROMDOUBLE_OFFSET UNITYSDK_OFFSET(0x1026F20)
#define MX_CORE_MATH_BASISPOINT_FROMLONG_OFFSET UNITYSDK_OFFSET(0x1026F90)
#define MX_CORE_MATH_BASISPOINT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1026FF0)
#define MX_CORE_MATH_BASISPOINT_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x1027050)
#define MX_CORE_MATH_BASISPOINT_TOLONG_OFFSET UNITYSDK_OFFSET(0x10270B0)
#define MX_CORE_MATH_BASISPOINT_SUM_OFFSET UNITYSDK_OFFSET(0x1027110)
#define MX_CORE_MATH_BASISPOINT_MULTIPLYLONG_OFFSET UNITYSDK_OFFSET(0x10274E0)
#define MX_CORE_MATH_BASISPOINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1027550)
#define MX_CORE_MATH_BASISPOINT_DIVIDE_OFFSET UNITYSDK_OFFSET(0x10275D0)
#define MX_CORE_MATH_BASISPOINT_DIVIDE_OFFSET UNITYSDK_OFFSET(0x10276D0)
#define MX_CORE_MATH_BASISPOINT_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1027730)
#define MX_CORE_MATH_BASISPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10277E0)
#define MX_CORE_MATH_BASISPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10278D0)
#define MX_CORE_MATH_BASISPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10279A0)
#define MX_CORE_MATH_BASISPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1027A70)
#define MX_CORE_MATH_BASISPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1027AC0)
#define MX_CORE_MATH_BASISPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1027B80)
#define MX_CORE_MATH_BASISPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1027490)
#define MX_CORE_MATH_BASISPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1027BD0)
#define MX_CORE_MATH_BASISPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1027C30)
#define MX_CORE_MATH_BASISPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1027C90)
#define MX_CORE_MATH_BASISPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1027CE0)
#define MX_CORE_MATH_BASISPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1027D40)
#define MX_CORE_MATH_BASISPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1027DA0)
#define MX_CORE_MATH_BASISPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1027DF0)
#define MX_CORE_MATH_BASISPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1027E40)
#define MX_CORE_MATH_BASISPOINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1027EA0)
#define MX_CORE_MATH_BASISPOINT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1027F60)
#define MX_CORE_MATH_BASISPOINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1028020)
#define MX_CORE_MATH_BASISPOINT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x10280E0)
#define MX_CORE_MATH_BASISPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10281A0)
#define MX_CORE_MATH_BASISPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1028200)
#define MX_CORE_MATH_BASISPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x10282D0)
#define MX_CORE_MATH_BASISPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1028320)
#define MX_CORE_MATH_BASISPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1028440)

namespace MX::Core::Math
{
	inline static constexpr unsigned int BasisPoint_TypeDefinitionIndex = 12812;

	class BasisPoint : public Il2CppObject
	{
	public:
		::System::Int64 Multiplier; // 0x0
		::System::Double OneOver10_4; // 0x8
		::MX::Core::Math::BasisPoint* Zero; // 0x10
		::MX::Core::Math::BasisPoint* One; // 0x18
		::MX::Core::Math::BasisPoint* Epsilon; // 0x20
		::System::Double DoubleEpsilon; // 0x28
		::System::Int64 rawValue; // 0x10

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_GET_RAWVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* Min(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* Max(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* Clamp(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2, ::MX::Core::Math::BasisPoint* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::Math::BasisPoint* FromFloat(::System::Single arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_FROMFLOAT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* FromDouble(::System::Double arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_FROMDOUBLE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* FromLong(::System::Int64 arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_FROMLONG_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_TODOUBLE_OFFSET))(nullptr);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_TOFLOAT_OFFSET))(nullptr);
		}

		::System::Int64 ToLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_TOLONG_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* Sum(Il2CppObject* arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_SUM_OFFSET))(arg, nullptr);
		}

		::System::Int64 MultiplyLong(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_MULTIPLYLONG_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* Multiply(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* Divide(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* Divide(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* Divide(::MX::Core::Math::BasisPoint* arg, ::System::Int64 arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Multiply(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 op_Multiply(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 op_Multiply(::MX::Core::Math::BasisPoint* arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::MX::Core::Math::BasisPoint*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Division(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Division(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Division(::MX::Core::Math::BasisPoint* arg, ::System::Int64 arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Addition(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Addition(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Addition(::MX::Core::Math::BasisPoint* arg, ::System::Int64 arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Subtraction(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Subtraction(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* op_Subtraction(::MX::Core::Math::BasisPoint* arg, ::System::Int64 arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::MX::Core::Math::BasisPoint* arg)
		{
			return ((::System::Int32(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_LessThan(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::Core::Math::BasisPoint* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Math::BasisPoint* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_BASISPOINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

