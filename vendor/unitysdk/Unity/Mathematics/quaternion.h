#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float4; }
namespace Unity::Mathematics { class quaternion; }
namespace UnityEngine { class Quaternion; }
namespace Unity::Mathematics { class float3x3; }
namespace Unity::Mathematics { class float3; }

#define UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F7A070)
#define UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F7A080)
#define UNITY_MATHEMATICS_QUATERNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7A090)
#define UNITY_MATHEMATICS_QUATERNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7A0B0)
#define UNITY_MATHEMATICS_QUATERNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F76B00)
#define UNITY_MATHEMATICS_QUATERNION_EULERXYZ_OFFSET UNITYSDK_OFFSET(0x9F7A0C0)
#define UNITY_MATHEMATICS_QUATERNION_EULERXYZ_OFFSET UNITYSDK_OFFSET(0x9F7A360)
#define UNITY_MATHEMATICS_QUATERNION_LOOKROTATIONSAFE_OFFSET UNITYSDK_OFFSET(0x9F7A600)
#define UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7AB70)
#define UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7ABB0)
#define UNITY_MATHEMATICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F7AC50)
#define UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7ACA0)
#define UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7AE90)
#define UNITY_MATHEMATICS_QUATERNION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F7B060)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int quaternion_TypeDefinitionIndex = 37575;

	class quaternion : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float4* value; // 0x10
		::Unity::Mathematics::quaternion* identity; // 0x0

		::UnityEngine::Quaternion* op_Implicit(::Unity::Mathematics::quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::quaternion* op_Implicit(::UnityEngine::Quaternion* arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Unity::Mathematics::float4* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Unity::Mathematics::float3x3* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float3x3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_.CTOR_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::quaternion* EulerXYZ(::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERXYZ_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::quaternion* EulerXYZ(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERXYZ_OFFSET))(arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::quaternion* LookRotationSafe(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_LOOKROTATIONSAFE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::quaternion* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

