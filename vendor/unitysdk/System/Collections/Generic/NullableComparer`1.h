#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int NullableComparer`1_TypeDefinitionIndex = 25175;

	class NullableComparer`1 : public CrashReporter_CallBackFunc
	{
	public:
		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NULLABLECOMPARER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

