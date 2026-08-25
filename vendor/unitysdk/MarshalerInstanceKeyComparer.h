#pragma once
#include "unitysdk.h"

#define MARSHALERINSTANCEKEYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9227020)
#define MARSHALERINSTANCEKEYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9227070)
#define MARSHALERINSTANCEKEYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92270B0)

	inline static constexpr unsigned int MarshalerInstanceKeyComparer_TypeDefinitionIndex = 24715;

	class MarshalerInstanceKeyComparer : public Il2CppObject
	{
	public:
		::System::Boolean Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MARSHALERINSTANCEKEYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MARSHALERINSTANCEKEYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARSHALERINSTANCEKEYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

