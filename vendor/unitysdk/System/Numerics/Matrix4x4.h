#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_MATRIX4X4_.CTOR_OFFSET UNITYSDK_OFFSET(0x98297E0)
#define SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9829950)
#define SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9829A60)
#define SYSTEM_NUMERICS_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9829B10)
#define SYSTEM_NUMERICS_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x982A060)
#define SYSTEM_NUMERICS_MATRIX4X4_.CCTOR_OFFSET UNITYSDK_OFFSET(0x982A1A0)

namespace System::Numerics
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 37086;

	class Matrix4x4 : public Il2CppObject
	{
	public:
		::System::Single M11; // 0x10
		::System::Single M12; // 0x14
		::System::Single M13; // 0x18
		::System::Single M14; // 0x1C
		::System::Single M21; // 0x20
		::System::Single M22; // 0x24
		::System::Single M23; // 0x28
		::System::Single M24; // 0x2C
		::System::Single M31; // 0x30
		::System::Single M32; // 0x34
		::System::Single M33; // 0x38
		::System::Single M34; // 0x3C
		::System::Single M41; // 0x40
		::System::Single M42; // 0x44
		::System::Single M43; // 0x48
		::System::Single M44; // 0x4C
		::System::Numerics::Matrix4x4* _identity; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Numerics::Matrix4x4* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_.CCTOR_OFFSET))(nullptr);
		}

	};
}

