#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_VECTOR4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA22B270)
#define UNITYENGINE_VECTOR4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA22B300)
#define UNITYENGINE_VECTOR4_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22B390)
#define UNITYENGINE_VECTOR4_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22B3B0)
#define UNITYENGINE_VECTOR4_SET_OFFSET UNITYSDK_OFFSET(0xA22B3D0)
#define UNITYENGINE_VECTOR4_LERP_OFFSET UNITYSDK_OFFSET(0xA22B3F0)
#define UNITYENGINE_VECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0xA22B440)
#define UNITYENGINE_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA22B480)
#define UNITYENGINE_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22B4E0)
#define UNITYENGINE_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22B580)
#define UNITYENGINE_VECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA22B5C0)
#define UNITYENGINE_VECTOR4_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA22B6C0)
#define UNITYENGINE_VECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0xA22B790)
#define UNITYENGINE_VECTOR4_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA22B7C0)
#define UNITYENGINE_VECTOR4_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA22B850)
#define UNITYENGINE_VECTOR4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA22B880)
#define UNITYENGINE_VECTOR4_GET_ONE_OFFSET UNITYSDK_OFFSET(0xA22B8D0)
#define UNITYENGINE_VECTOR4_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0xA22B920)
#define UNITYENGINE_VECTOR4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA22B970)
#define UNITYENGINE_VECTOR4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xA22B990)
#define UNITYENGINE_VECTOR4_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0xA22B9B0)
#define UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA22B9D0)
#define UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA22B9F0)
#define UNITYENGINE_VECTOR4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xA22BA10)
#define UNITYENGINE_VECTOR4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22BA30)
#define UNITYENGINE_VECTOR4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA22BA80)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22BAD0)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22BAF0)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22BB10)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22BB30)
#define UNITYENGINE_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22BB40)
#define UNITYENGINE_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22BB50)
#define UNITYENGINE_VECTOR4_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA22BD90)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 31105;

	class Vector4 : public Il2CppObject
	{
	public:
		::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C
		::UnityEngine::Vector4* zeroVector; // 0x0
		::UnityEngine::Vector4* oneVector; // 0x10
		::UnityEngine::Vector4* positiveInfinityVector; // 0x20
		::UnityEngine::Vector4* negativeInfinityVector; // 0x30

		::System::Single get_Item(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector4* Lerp(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Scale(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Vector4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* Normalize(::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_normalized()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Single Dot(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_DOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Magnitude(::UnityEngine::Vector4* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Single get_sqrMagnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_SQRMAGNITUDE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_zero()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_one()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_negativeInfinity()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_NEGATIVEINFINITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* op_Addition(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* op_Subtraction(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* op_UnaryNegation(::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* op_Multiply(::UnityEngine::Vector4* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* op_Multiply(::System::Single arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::Single, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* op_Division(::UnityEngine::Vector4* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* op_Implicit(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* op_Implicit(::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* op_Implicit(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* op_Implicit(::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_.CCTOR_OFFSET))(nullptr);
		}

	};
}

