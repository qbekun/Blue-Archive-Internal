#pragma once
#include "unitysdk.h"

#define WEAKKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7CAB0)
#define WEAKKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B7CC20)
#define WEAKKEYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7CAA0)

	inline static constexpr unsigned int WeakKeyComparer_TypeDefinitionIndex = 29533;

	class WeakKeyComparer : public Il2CppObject
	{
	public:
		::System::Boolean System.Collections.IEqualityComparer.Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WEAKKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IEqualityComparer.GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WEAKKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAKKEYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

