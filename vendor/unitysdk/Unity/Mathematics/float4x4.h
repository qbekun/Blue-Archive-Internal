#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float4; }
namespace Unity::Mathematics { class float4x4; }
namespace UnityEngine { class Matrix4x4; }
namespace Unity::Mathematics { class quaternion; }
namespace Unity::Mathematics { class float3; }

#define UNITY_MATHEMATICS_FLOAT4X4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F786D0)
#define UNITY_MATHEMATICS_FLOAT4X4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F78700)
#define UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F78870)
#define UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F78980)
#define UNITY_MATHEMATICS_FLOAT4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F78B00)
#define UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F78BD0)
#define UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F791D0)
#define UNITY_MATHEMATICS_FLOAT4X4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F79750)
#define UNITY_MATHEMATICS_FLOAT4X4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F79800)
#define UNITY_MATHEMATICS_FLOAT4X4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F79870)
#define UNITY_MATHEMATICS_FLOAT4X4_TRS_OFFSET UNITYSDK_OFFSET(0x9F79A00)
#define UNITY_MATHEMATICS_FLOAT4X4_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F79C00)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float4x4_TypeDefinitionIndex = 37571;

	class float4x4 : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float4* c0; // 0x10
		::Unity::Mathematics::float4* c1; // 0x20
		::Unity::Mathematics::float4* c2; // 0x30
		::Unity::Mathematics::float4* c3; // 0x40
		::Unity::Mathematics::float4x4* identity; // 0x0
		::Unity::Mathematics::float4x4* zero; // 0x40

		::System::Void .ctor(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::float4x4* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::Unity::Mathematics::float4x4* op_Implicit(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::Unity::Mathematics::float4x4*(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* op_Implicit(::Unity::Mathematics::float4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::Unity::Mathematics::float4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Unity::Mathematics::quaternion* arg, ::Unity::Mathematics::float3* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::quaternion*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4x4* TRS(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::quaternion* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float4x4*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::quaternion*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TRS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_.CCTOR_OFFSET))(nullptr);
		}

	};
}

