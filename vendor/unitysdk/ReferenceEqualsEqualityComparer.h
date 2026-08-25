#pragma once
#include "unitysdk.h"

#define REFERENCEEQUALSEQUALITYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.EQUALS_OFFSET UNITYSDK_OFFSET(0x94CD2F0)
#define REFERENCEEQUALSEQUALITYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x94CD300)
#define REFERENCEEQUALSEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94CCCA0)

	inline static constexpr unsigned int ReferenceEqualsEqualityComparer_TypeDefinitionIndex = 31951;

	class ReferenceEqualsEqualityComparer : public Il2CppObject
	{
	public:
		::System::Boolean System.Collections.Generic.IEqualityComparer_System.Object_.Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALSEQUALITYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.Generic.IEqualityComparer_System.Object_.GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALSEQUALITYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALSEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

