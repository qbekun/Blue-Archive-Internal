#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float3; }
namespace Unity::Mathematics { class float4; }
namespace UnityEngine { class Vector3; }

#define UNITY_MATHEMATICS_FLOAT3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F77100)
#define UNITY_MATHEMATICS_FLOAT3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F77110)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F77120)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F77150)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F77170)
#define UNITY_MATHEMATICS_FLOAT3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9F771A0)
#define UNITY_MATHEMATICS_FLOAT3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9F771D0)
#define UNITY_MATHEMATICS_FLOAT3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x9F77200)
#define UNITY_MATHEMATICS_FLOAT3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x9F77220)
#define UNITY_MATHEMATICS_FLOAT3_GET_YXXY_OFFSET UNITYSDK_OFFSET(0x9F77250)
#define UNITY_MATHEMATICS_FLOAT3_GET_ZZYZ_OFFSET UNITYSDK_OFFSET(0x9F77260)
#define UNITY_MATHEMATICS_FLOAT3_GET_XYZ_OFFSET UNITYSDK_OFFSET(0x9F77270)
#define UNITY_MATHEMATICS_FLOAT3_GET_YZX_OFFSET UNITYSDK_OFFSET(0x9F77290)
#define UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F772B0)
#define UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F772E0)
#define UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F77370)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F77390)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F77450)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F774F0)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F77510)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3_TypeDefinitionIndex = 37567;

	class float3 : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::Unity::Mathematics::float3* zero; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_.CTOR_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Multiply(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Multiply(::Unity::Mathematics::float3* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Multiply(::System::Single arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::System::Single, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Addition(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Subtraction(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Division(::Unity::Mathematics::float3* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* op_UnaryNegation(::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float4* get_yxxy()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_YXXY_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_zzyz()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_ZZYZ_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float3* get_xyz()
		{
			return (return (::Unity::Mathematics::float3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_XYZ_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float3* get_yzx()
		{
			return (return (::Unity::Mathematics::float3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_YZX_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::float3* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Vector3* op_Implicit(::Unity::Mathematics::float3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* op_Implicit(::UnityEngine::Vector3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

