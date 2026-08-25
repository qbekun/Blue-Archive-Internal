#pragma once
#include "unitysdk.h"

#define EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA33E0C0)
#define EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA33E0E0)
#define EQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33E0B0)

	inline static constexpr unsigned int EqualityComparer_TypeDefinitionIndex = 30185;

	class EqualityComparer : public Il2CppObject
	{
	public:
		::System::Boolean Equals(ElementPropertyPair* arg, ElementPropertyPair* arg)
		{
			return (return (::System::Boolean(*)(ElementPropertyPair*, ElementPropertyPair*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(ElementPropertyPair* arg)
		{
			return (return (::System::Int32(*)(ElementPropertyPair*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

