#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x982A630)
#define SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x982A670)
#define SYSTEM_NUMERICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x982A710)
#define SYSTEM_NUMERICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x982A8F0)

namespace System::Numerics
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 37088;

	class Quaternion : public Il2CppObject
	{
	public:
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18
		::System::Single W; // 0x1C

		::System::Boolean Equals(::System::Numerics::Quaternion* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

