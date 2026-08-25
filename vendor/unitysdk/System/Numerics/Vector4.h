#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x982AEB0)
#define SYSTEM_NUMERICS_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x982AF60)
#define SYSTEM_NUMERICS_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x982B040)
#define SYSTEM_NUMERICS_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x982B0B0)
#define SYSTEM_NUMERICS_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x982B000)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 37091;

	class Vector4 : public Il2CppObject
	{
	public:
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18
		::System::Single W; // 0x1C

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::System::Numerics::Vector4* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

