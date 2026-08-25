#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_MATRIX3X2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9829330)
#define SYSTEM_NUMERICS_MATRIX3X2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9829360)
#define SYSTEM_NUMERICS_MATRIX3X2_EQUALS_OFFSET UNITYSDK_OFFSET(0x98293C0)
#define SYSTEM_NUMERICS_MATRIX3X2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98294A0)
#define SYSTEM_NUMERICS_MATRIX3X2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9829710)
#define SYSTEM_NUMERICS_MATRIX3X2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9829790)

namespace System::Numerics
{
	inline static constexpr unsigned int Matrix3x2_TypeDefinitionIndex = 37085;

	class Matrix3x2 : public Il2CppObject
	{
	public:
		::System::Single M11; // 0x10
		::System::Single M12; // 0x14
		::System::Single M21; // 0x18
		::System::Single M22; // 0x1C
		::System::Single M31; // 0x20
		::System::Single M32; // 0x24
		::System::Numerics::Matrix3x2* _identity; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Numerics::Matrix3x2* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Matrix3x2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

