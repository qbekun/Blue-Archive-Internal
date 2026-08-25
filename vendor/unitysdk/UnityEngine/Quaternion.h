#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_QUATERNION_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0xA226560)
#define UNITYENGINE_QUATERNION_INVERSE_OFFSET UNITYSDK_OFFSET(0xA226610)
#define UNITYENGINE_QUATERNION_SLERP_OFFSET UNITYSDK_OFFSET(0xA2266A0)
#define UNITYENGINE_QUATERNION_SLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA226770)
#define UNITYENGINE_QUATERNION_LERP_OFFSET UNITYSDK_OFFSET(0xA226840)
#define UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_OFFSET UNITYSDK_OFFSET(0xA226910)
#define UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_OFFSET UNITYSDK_OFFSET(0xA2269A0)
#define UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_OFFSET UNITYSDK_OFFSET(0xA226A40)
#define UNITYENGINE_QUATERNION_ANGLEAXIS_OFFSET UNITYSDK_OFFSET(0xA226AE0)
#define UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET UNITYSDK_OFFSET(0xA226B90)
#define UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET UNITYSDK_OFFSET(0xA226C40)
#define UNITYENGINE_QUATERNION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA226D10)
#define UNITYENGINE_QUATERNION_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0xA226D30)
#define UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA226D80)
#define UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA226E40)
#define UNITYENGINE_QUATERNION_ISEQUALUSINGDOT_OFFSET UNITYSDK_OFFSET(0xA226F70)
#define UNITYENGINE_QUATERNION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA226F80)
#define UNITYENGINE_QUATERNION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA226FC0)
#define UNITYENGINE_QUATERNION_DOT_OFFSET UNITYSDK_OFFSET(0xA227000)
#define UNITYENGINE_QUATERNION_ANGLE_OFFSET UNITYSDK_OFFSET(0xA227030)
#define UNITYENGINE_QUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0xA2270B0)
#define UNITYENGINE_QUATERNION_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0xA227150)
#define UNITYENGINE_QUATERNION_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0xA227240)
#define UNITYENGINE_QUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0xA2272C0)
#define UNITYENGINE_QUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0xA227330)
#define UNITYENGINE_QUATERNION_TOANGLEAXIS_OFFSET UNITYSDK_OFFSET(0xA2273B0)
#define UNITYENGINE_QUATERNION_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0xA227410)
#define UNITYENGINE_QUATERNION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA227530)
#define UNITYENGINE_QUATERNION_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA2275E0)
#define UNITYENGINE_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2276A0)
#define UNITYENGINE_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA227700)
#define UNITYENGINE_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2277F0)
#define UNITYENGINE_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA227860)
#define UNITYENGINE_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA227870)
#define UNITYENGINE_QUATERNION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA227AB0)
#define UNITYENGINE_QUATERNION_FROMTOROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2265C0)
#define UNITYENGINE_QUATERNION_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226660)
#define UNITYENGINE_QUATERNION_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226710)
#define UNITYENGINE_QUATERNION_SLERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2267E0)
#define UNITYENGINE_QUATERNION_LERP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2268B0)
#define UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226960)
#define UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226A00)
#define UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226A90)
#define UNITYENGINE_QUATERNION_ANGLEAXIS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226B40)
#define UNITYENGINE_QUATERNION_LOOKROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA226BF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 31100;

	class Quaternion : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C
		::UnityEngine::Quaternion* identityQuaternion; // 0x0
		::System::Single kEpsilon; // 0x0

		::UnityEngine::Quaternion* FromToRotation(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_FROMTOROTATION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Inverse(::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INVERSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* Slerp(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* SlerpUnclamped(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Lerp(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Internal_FromEulerRad(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* Internal_ToEulerRad(::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_ToAxisAngleRad(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* AngleAxis(::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLEAXIS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* LookRotation(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* LookRotation(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* get_identity()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_IDENTITY_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* op_Multiply(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* op_Multiply(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEqualUsingDot(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ISEQUALUSINGDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Dot(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_DOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Angle(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Internal_MakePositive(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_eulerAngles()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_EULERANGLES_OFFSET))(nullptr);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SET_EULERANGLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* Euler(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Euler(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULER_OFFSET))(arg, nullptr);
		}

		::System::Void ToAngleAxis(float&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(float&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOANGLEAXIS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* RotateTowards(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ROTATETOWARDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Normalize(::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_normalized()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void FromToRotation_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_FROMTOROTATION_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Inverse_Injected(::UnityEngine::Quaternion&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INVERSE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Slerp_Injected(::UnityEngine::Quaternion&* arg, ::UnityEngine::Quaternion&* arg, ::System::Single arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::UnityEngine::Quaternion&*, ::System::Single, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERP_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SlerpUnclamped_Injected(::UnityEngine::Quaternion&* arg, ::UnityEngine::Quaternion&* arg, ::System::Single arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::UnityEngine::Quaternion&*, ::System::Single, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERPUNCLAMPED_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Lerp_Injected(::UnityEngine::Quaternion&* arg, ::UnityEngine::Quaternion&* arg, ::System::Single arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::UnityEngine::Quaternion&*, ::System::Single, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERP_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_FromEulerRad_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_ToEulerRad_Injected(::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_ToAxisAngleRad_Injected(::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AngleAxis_Injected(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLEAXIS_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LookRotation_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

