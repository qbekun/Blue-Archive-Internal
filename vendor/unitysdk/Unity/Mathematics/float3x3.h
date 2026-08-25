#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float3; }
namespace Unity::Mathematics { class float3x3; }
namespace Unity::Mathematics { class quaternion; }

#define UNITY_MATHEMATICS_FLOAT3X3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F77530)
#define UNITY_MATHEMATICS_FLOAT3X3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F77560)
#define UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F775E0)
#define UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F77660)
#define UNITY_MATHEMATICS_FLOAT3X3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F77750)
#define UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F777D0)
#define UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F77B70)
#define UNITY_MATHEMATICS_FLOAT3X3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F76460)
#define UNITY_MATHEMATICS_FLOAT3X3_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F77ED0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3x3_TypeDefinitionIndex = 37568;

	class float3x3 : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float3* c0; // 0x10
		::Unity::Mathematics::float3* c1; // 0x1C
		::Unity::Mathematics::float3* c2; // 0x28
		::Unity::Mathematics::float3x3* identity; // 0x0

		::System::Void .ctor(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::float3x3* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float3x3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::Unity::Mathematics::quaternion* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_.CCTOR_OFFSET))(nullptr);
		}

	};
}

