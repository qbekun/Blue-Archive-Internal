#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float2; }
namespace UnityEngine { class Vector2; }

#define UNITY_MATHEMATICS_FLOAT2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F76E70)
#define UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F76E80)
#define UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F76EB0)
#define UNITY_MATHEMATICS_FLOAT2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9F76EE0)
#define UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F76F10)
#define UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F76F40)
#define UNITY_MATHEMATICS_FLOAT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F76FC0)
#define UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F76FE0)
#define UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F77070)
#define UNITY_MATHEMATICS_FLOAT2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F770F0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float2_TypeDefinitionIndex = 37565;

	class float2 : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::Unity::Mathematics::float2* zero; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float2* op_Multiply(::Unity::Mathematics::float2* arg, ::Unity::Mathematics::float2* arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::Unity::Mathematics::float2*, ::Unity::Mathematics::float2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float2* op_Multiply(::Unity::Mathematics::float2* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::Unity::Mathematics::float2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float2* op_Subtraction(::Unity::Mathematics::float2* arg, ::Unity::Mathematics::float2* arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::Unity::Mathematics::float2*, ::Unity::Mathematics::float2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::float2* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::Unity::Mathematics::float2* op_Implicit(::UnityEngine::Vector2* arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

