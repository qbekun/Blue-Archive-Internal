#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3Int; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_VECTOR3INT_GET_X_OFFSET UNITYSDK_OFFSET(0xA22ABA0)
#define UNITYENGINE_VECTOR3INT_SET_X_OFFSET UNITYSDK_OFFSET(0xA22ABB0)
#define UNITYENGINE_VECTOR3INT_GET_Y_OFFSET UNITYSDK_OFFSET(0xA22ABC0)
#define UNITYENGINE_VECTOR3INT_SET_Y_OFFSET UNITYSDK_OFFSET(0xA22ABD0)
#define UNITYENGINE_VECTOR3INT_GET_Z_OFFSET UNITYSDK_OFFSET(0xA22ABE0)
#define UNITYENGINE_VECTOR3INT_SET_Z_OFFSET UNITYSDK_OFFSET(0xA22ABF0)
#define UNITYENGINE_VECTOR3INT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22AC00)
#define UNITYENGINE_VECTOR3INT_MIN_OFFSET UNITYSDK_OFFSET(0xA22AC10)
#define UNITYENGINE_VECTOR3INT_MAX_OFFSET UNITYSDK_OFFSET(0xA22AC50)
#define UNITYENGINE_VECTOR3INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22AC90)
#define UNITYENGINE_VECTOR3INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA22ACB0)
#define UNITYENGINE_VECTOR3INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xA22ACD0)
#define UNITYENGINE_VECTOR3INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA22ACF0)
#define UNITYENGINE_VECTOR3INT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xA22AD20)
#define UNITYENGINE_VECTOR3INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22AD50)
#define UNITYENGINE_VECTOR3INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA22AD70)
#define UNITYENGINE_VECTOR3INT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22ADB0)
#define UNITYENGINE_VECTOR3INT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22AE40)
#define UNITYENGINE_VECTOR3INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA22AE70)
#define UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22AEE0)
#define UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22AEF0)
#define UNITYENGINE_VECTOR3INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA22B0D0)
#define UNITYENGINE_VECTOR3INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0xA22B120)
#define UNITYENGINE_VECTOR3INT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA22B170)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3Int_TypeDefinitionIndex = 31104;

	class Vector3Int : public Il2CppObject
	{
	public:
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::System::Int32 m_Z; // 0x18
		::UnityEngine::Vector3Int* s_Zero; // 0x0
		::UnityEngine::Vector3Int* s_One; // 0xC
		::UnityEngine::Vector3Int* s_Up; // 0x18
		::UnityEngine::Vector3Int* s_Down; // 0x24
		::UnityEngine::Vector3Int* s_Left; // 0x30
		::UnityEngine::Vector3Int* s_Right; // 0x3C
		::UnityEngine::Vector3Int* s_Forward; // 0x48
		::UnityEngine::Vector3Int* s_Back; // 0x54

		::System::Int32 get_x()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_y(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_z()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_Z_OFFSET))(nullptr);
		}

		::System::Void set_z(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_Z_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* Min(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_MIN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* Max(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_MAX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* op_Implicit(::UnityEngine::Vector3Int* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3Int* op_Addition(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* op_Subtraction(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* op_Multiply(::UnityEngine::Vector3Int* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::UnityEngine::Vector3Int*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* op_Division(::UnityEngine::Vector3Int* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::UnityEngine::Vector3Int*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Vector3Int* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Vector3Int* get_zero()
		{
			return (return (::UnityEngine::Vector3Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3Int* get_one()
		{
			return (return (::UnityEngine::Vector3Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ONE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

