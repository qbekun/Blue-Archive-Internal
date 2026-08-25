#pragma once
#include "unitysdk.h"

#define TEMPASSEMBLYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97CF260)
#define TEMPASSEMBLYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x97CF270)
#define TEMPASSEMBLYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97CF3F0)
#define TEMPASSEMBLYCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97CF480)

	inline static constexpr unsigned int TempAssemblyComparer_TypeDefinitionIndex = 32350;

	class TempAssemblyComparer : public Il2CppObject
	{
	public:
		Il2CppObject* s_default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPASSEMBLYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TEMPASSEMBLYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TEMPASSEMBLYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPASSEMBLYCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

