#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_VECTOR3_SLERP_OFFSET UNITYSDK_OFFSET(0xA224910)
#define UNITYENGINE_VECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0xA2249F0)
#define UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA224A60)
#define UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0xA224AA0)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0xA224BD0)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0xA224C60)
#define UNITYENGINE_VECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA224F60)
#define UNITYENGINE_VECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA224FE0)
#define UNITYENGINE_VECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0xA225060)
#define UNITYENGINE_VECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0xA225070)
#define UNITYENGINE_VECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0xA225090)
#define UNITYENGINE_VECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0xA2250C0)
#define UNITYENGINE_VECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0xA2250F0)
#define UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA225140)
#define UNITYENGINE_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0xA225180)
#define UNITYENGINE_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0xA225220)
#define UNITYENGINE_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA225250)
#define UNITYENGINE_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA225330)
#define UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA225410)
#define UNITYENGINE_VECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0xA2254F0)
#define UNITYENGINE_VECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0xA225520)
#define UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0xA225610)
#define UNITYENGINE_VECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0xA2256F0)
#define UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0xA225850)
#define UNITYENGINE_VECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA225A60)
#define UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA225B00)
#define UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA225BD0)
#define UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA225C50)
#define UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA225CD0)
#define UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA225CF0)
#define UNITYENGINE_VECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0xA225D10)
#define UNITYENGINE_VECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0xA225D40)
#define UNITYENGINE_VECTOR3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA225D70)
#define UNITYENGINE_VECTOR3_GET_ONE_OFFSET UNITYSDK_OFFSET(0xA225DC0)
#define UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xA225E10)
#define UNITYENGINE_VECTOR3_GET_BACK_OFFSET UNITYSDK_OFFSET(0xA225E60)
#define UNITYENGINE_VECTOR3_GET_UP_OFFSET UNITYSDK_OFFSET(0xA225EB0)
#define UNITYENGINE_VECTOR3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0xA225F00)
#define UNITYENGINE_VECTOR3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xA225F50)
#define UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA225FA0)
#define UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0xA225FF0)
#define UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0xA226040)
#define UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA226090)
#define UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xA2260C0)
#define UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0xA2260F0)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA226120)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA226140)
#define UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xA226170)
#define UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA226190)
#define UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA2261E0)
#define UNITYENGINE_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA226230)
#define UNITYENGINE_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA226240)
#define UNITYENGINE_VECTOR3_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA226430)
#define UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA224990)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 31099;

	class Vector3 : public Il2CppObject
	{
	public:
		::System::Single kEpsilon; // 0x0
		::System::Single kEpsilonNormalSqrt; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::UnityEngine::Vector3* zeroVector; // 0x0
		::UnityEngine::Vector3* oneVector; // 0xC
		::UnityEngine::Vector3* upVector; // 0x18
		::UnityEngine::Vector3* downVector; // 0x24
		::UnityEngine::Vector3* leftVector; // 0x30
		::UnityEngine::Vector3* rightVector; // 0x3C
		::UnityEngine::Vector3* forwardVector; // 0x48
		::UnityEngine::Vector3* backVector; // 0x54
		::UnityEngine::Vector3* positiveInfinityVector; // 0x60
		::UnityEngine::Vector3* negativeInfinityVector; // 0x6C

		::UnityEngine::Vector3* Slerp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Lerp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* LerpUnclamped(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* MoveTowards(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* SmoothDamp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* SmoothDamp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single get_Item(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Scale(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Scale(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SCALE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* Cross(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_CROSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* Normalize(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_NORMALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_normalized()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Single Dot(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_DOT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Project(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_PROJECT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* ProjectOnPlane(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Angle(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single SignedAngle(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Distance(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_DISTANCE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* ClampMagnitude(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Magnitude(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Single get_magnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::System::Single SqrMagnitude(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Single get_sqrMagnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* Min(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MIN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Max(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MAX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_zero()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_one()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_forward()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_back()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_BACK_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_up()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_UP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_down()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_DOWN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_left()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_LEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_right()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_positiveInfinity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_negativeInfinity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* op_Addition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* op_Subtraction(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* op_UnaryNegation(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* op_Multiply(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* op_Multiply(::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* op_Division(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Slerp_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

