#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class int2; }

#define UNITY_MATHEMATICS_INT2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F79E00)
#define UNITY_MATHEMATICS_INT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F79E10)
#define UNITY_MATHEMATICS_INT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F79E30)
#define UNITY_MATHEMATICS_INT2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9F79E50)
#define UNITY_MATHEMATICS_INT2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9F79E70)
#define UNITY_MATHEMATICS_INT2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x9F79E90)
#define UNITY_MATHEMATICS_INT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F79EB0)
#define UNITY_MATHEMATICS_INT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F79ED0)
#define UNITY_MATHEMATICS_INT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F79F50)
#define UNITY_MATHEMATICS_INT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F79F70)
#define UNITY_MATHEMATICS_INT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F79FF0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int int2_TypeDefinitionIndex = 37574;

	class int2 : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::int2* op_Multiply(::Unity::Mathematics::int2* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Mathematics::int2*(*)(::Unity::Mathematics::int2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::int2* op_Multiply(::System::Int32 arg, ::Unity::Mathematics::int2* arg)
		{
			return (return (::Unity::Mathematics::int2*(*)(::System::Int32, ::Unity::Mathematics::int2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::int2* op_Addition(::Unity::Mathematics::int2* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Mathematics::int2*(*)(::Unity::Mathematics::int2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::int2* op_Subtraction(::Unity::Mathematics::int2* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Mathematics::int2*(*)(::Unity::Mathematics::int2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::int2* op_Division(::Unity::Mathematics::int2* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Mathematics::int2*(*)(::Unity::Mathematics::int2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::int2* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::int2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_INT2_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

