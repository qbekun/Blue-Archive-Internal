#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x982DE50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x982DF40)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x98310B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET UNITYSDK_OFFSET(0x98311E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x982E410)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x982E560)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x98312D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x982E4D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET UNITYSDK_OFFSET(0x9830330)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET UNITYSDK_OFFSET(0x9830750)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET UNITYSDK_OFFSET(0x9830410)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET UNITYSDK_OFFSET(0x98307D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET UNITYSDK_OFFSET(0x9831470)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET UNITYSDK_OFFSET(0x9831AB0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET UNITYSDK_OFFSET(0x9831A60)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET UNITYSDK_OFFSET(0x98319F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x9831400)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET UNITYSDK_OFFSET(0x9831970)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET UNITYSDK_OFFSET(0x982FFE0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET UNITYSDK_OFFSET(0x9831B50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x982FF30)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9830090)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x98326A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET UNITYSDK_OFFSET(0x9832550)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98334C0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_TypeDefinitionIndex = 37094;

	class BigIntegerCalculator : public Il2CppObject
	{
	public:
		::System::Int32 ReducerThreshold; // 0x0
		::System::Int32 SquareThreshold; // 0x4
		::System::Int32 AllocationThreshold; // 0x8
		::System::Int32 MultiplyThreshold; // 0xC

		::Il2CppArray<::System::Object*>* Add(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Add(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddSelf(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Subtract(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Subtract(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Subtract(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Divide(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Remainder(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Divide(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Remainder(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Divide(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 AddDivisor(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 SubtractDivisor(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean DivideGuessTooBig(::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCopy(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET))(arg, nullptr);
		}

		::System::Int32 LeadingZeros(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Square(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET))(arg, nullptr);
		}

		::System::Void Square(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Multiply(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Multiply(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Multiply(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SubtractCore(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

