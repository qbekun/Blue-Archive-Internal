#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float4; }
namespace Unity::Mathematics { class float3; }
namespace UnityEngine { class Vector4; }

#define UNITY_MATHEMATICS_FLOAT4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F77F20)
#define UNITY_MATHEMATICS_FLOAT4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F77F40)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F77F70)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F77F90)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F77FB0)
#define UNITY_MATHEMATICS_FLOAT4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9F77FD0)
#define UNITY_MATHEMATICS_FLOAT4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9F77FF0)
#define UNITY_MATHEMATICS_FLOAT4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x9F78010)
#define UNITY_MATHEMATICS_FLOAT4_GET_XYZX_OFFSET UNITYSDK_OFFSET(0x9F78030)
#define UNITY_MATHEMATICS_FLOAT4_GET_YZXY_OFFSET UNITYSDK_OFFSET(0x9F78050)
#define UNITY_MATHEMATICS_FLOAT4_GET_YZXZ_OFFSET UNITYSDK_OFFSET(0x9F78070)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZXYY_OFFSET UNITYSDK_OFFSET(0x9F78090)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZXYZ_OFFSET UNITYSDK_OFFSET(0x9F780B0)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZWXY_OFFSET UNITYSDK_OFFSET(0x9F780D0)
#define UNITY_MATHEMATICS_FLOAT4_GET_WZYX_OFFSET UNITYSDK_OFFSET(0x9F780E0)
#define UNITY_MATHEMATICS_FLOAT4_GET_WWWX_OFFSET UNITYSDK_OFFSET(0x9F780F0)
#define UNITY_MATHEMATICS_FLOAT4_GET_WWWW_OFFSET UNITYSDK_OFFSET(0x9F78110)
#define UNITY_MATHEMATICS_FLOAT4_GET_XYZ_OFFSET UNITYSDK_OFFSET(0x9F78120)
#define UNITY_MATHEMATICS_FLOAT4_SET_XYZ_OFFSET UNITYSDK_OFFSET(0x9F78140)
#define UNITY_MATHEMATICS_FLOAT4_GET_YXW_OFFSET UNITYSDK_OFFSET(0x9F78160)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZWX_OFFSET UNITYSDK_OFFSET(0x9F78180)
#define UNITY_MATHEMATICS_FLOAT4_GET_WZY_OFFSET UNITYSDK_OFFSET(0x9F781A0)
#define UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F781C0)
#define UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F78200)
#define UNITY_MATHEMATICS_FLOAT4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F782A0)
#define UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F782F0)
#define UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F784E0)
#define UNITY_MATHEMATICS_FLOAT4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F786B0)
#define UNITY_MATHEMATICS_FLOAT4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F786C0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float4_TypeDefinitionIndex = 37570;

	class float4 : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C
		::Unity::Mathematics::float4* zero; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Unity::Mathematics::float3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Multiply(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Multiply(::Unity::Mathematics::float4* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Multiply(::System::Single arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::System::Single, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Addition(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Subtraction(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Division(::Unity::Mathematics::float4* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* get_xyzx()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_XYZX_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_yzxy()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YZXY_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_yzxz()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YZXZ_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_zxyy()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZXYY_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_zxyz()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZXYZ_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_zwxy()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZWXY_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_wzyx()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WZYX_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_wwwx()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WWWX_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float4* get_wwww()
		{
			return (return (::Unity::Mathematics::float4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WWWW_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float3* get_xyz()
		{
			return (return (::Unity::Mathematics::float3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_XYZ_OFFSET))(nullptr);
		}

		::System::Void set_xyz(::Unity::Mathematics::float3* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_SET_XYZ_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* get_yxw()
		{
			return (return (::Unity::Mathematics::float3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YXW_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float3* get_zwx()
		{
			return (return (::Unity::Mathematics::float3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZWX_OFFSET))(nullptr);
		}

		::Unity::Mathematics::float3* get_wzy()
		{
			return (return (::Unity::Mathematics::float3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WZY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::float4* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::Unity::Mathematics::float4* op_Implicit(::UnityEngine::Vector4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* op_Implicit(::Unity::Mathematics::float4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

