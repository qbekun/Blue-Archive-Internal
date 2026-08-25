#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x982A940)
#define SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x982A9C0)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x982AA70)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x982AAE0)
#define SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x982AA40)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 37089;

	class Vector2 : public Il2CppObject
	{
	public:
		::System::Single X; // 0x10
		::System::Single Y; // 0x14

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::System::Numerics::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

