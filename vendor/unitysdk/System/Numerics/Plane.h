#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_PLANE_EQUALS_OFFSET UNITYSDK_OFFSET(0x982A200)
#define SYSTEM_NUMERICS_PLANE_EQUALS_OFFSET UNITYSDK_OFFSET(0x982A2B0)
#define SYSTEM_NUMERICS_PLANE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x982A3A0)
#define SYSTEM_NUMERICS_PLANE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x982A500)

namespace System::Numerics
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 37087;

	class Plane : public Il2CppObject
	{
	public:
		::System::Numerics::Vector3* Normal; // 0x10
		::System::Single D; // 0x1C

		::System::Boolean Equals(::System::Numerics::Plane* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Plane*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_PLANE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_PLANE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_PLANE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_PLANE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

