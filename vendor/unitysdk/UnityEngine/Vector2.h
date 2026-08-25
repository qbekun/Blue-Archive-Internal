#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA229440)
#define UNITYENGINE_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA2294B0)
#define UNITYENGINE_VECTOR2_.CTOR_OFFSET UNITYSDK_OFFSET(0xA229520)
#define UNITYENGINE_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0xA229530)
#define UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA2295A0)
#define UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0xA2295E0)
#define UNITYENGINE_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0xA2296E0)
#define UNITYENGINE_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0xA229710)
#define UNITYENGINE_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA229720)
#define UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA2297D0)
#define UNITYENGINE_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2298B0)
#define UNITYENGINE_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2298C0)
#define UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA229A60)
#define UNITYENGINE_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0xA229A90)
#define UNITYENGINE_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0xA229B10)
#define UNITYENGINE_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0xA229B40)
#define UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA229B70)
#define UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA229BE0)
#define UNITYENGINE_VECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0xA229C00)
#define UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0xA229D80)
#define UNITYENGINE_VECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA229F70)
#define UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA229FF0)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA22A0C0)
#define UNITYENGINE_VECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0xA22A0E0)
#define UNITYENGINE_VECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0xA22A110)
#define UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA22A140)
#define UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xA22A170)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA22A1A0)
#define UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xA22A1D0)
#define UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0xA22A200)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA22A220)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA22A250)
#define UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xA22A280)
#define UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22A2B0)
#define UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA22A2E0)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22A310)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22A320)
#define UNITYENGINE_VECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA22A340)
#define UNITYENGINE_VECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0xA22A380)
#define UNITYENGINE_VECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0xA22A3C0)
#define UNITYENGINE_VECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0xA22A400)
#define UNITYENGINE_VECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xA22A440)
#define UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA22A480)
#define UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0xA22A4C0)
#define UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0xA22A500)
#define UNITYENGINE_VECTOR2_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA22A540)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 31102;

	class Vector2 : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::UnityEngine::Vector2* zeroVector; // 0x0
		::UnityEngine::Vector2* oneVector; // 0x8
		::UnityEngine::Vector2* upVector; // 0x10
		::UnityEngine::Vector2* downVector; // 0x18
		::UnityEngine::Vector2* leftVector; // 0x20
		::UnityEngine::Vector2* rightVector; // 0x28
		::UnityEngine::Vector2* positiveInfinityVector; // 0x30
		::UnityEngine::Vector2* negativeInfinityVector; // 0x38
		::System::Single kEpsilon; // 0x0
		::System::Single kEpsilonNormalSqrt; // 0x0

		::System::Single get_Item(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Lerp(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* LerpUnclamped(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* MoveTowards(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Scale(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Scale(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_NORMALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_normalized()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Single Dot(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_magnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::System::Single get_sqrMagnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET))(nullptr);
		}

		::System::Single Angle(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_ANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single SignedAngle(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Distance(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DISTANCE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* ClampMagnitude(::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single SqrMagnitude(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Min(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MIN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Max(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MAX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Addition(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Subtraction(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Multiply(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Division(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_UnaryNegation(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* op_Multiply(::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Multiply(::System::Single arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Division(::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Implicit(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* op_Implicit(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_zero()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_one()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_up()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_UP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_down()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_DOWN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_left()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_LEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_right()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_positiveInfinity()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_negativeInfinity()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

