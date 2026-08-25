#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_CALLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B5290)
#define SYSTEM_DYNAMIC_CALLINFO_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x96B5380)
#define SYSTEM_DYNAMIC_CALLINFO_GET_ARGUMENTNAMES_OFFSET UNITYSDK_OFFSET(0x96B5390)
#define SYSTEM_DYNAMIC_CALLINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96B53A0)
#define SYSTEM_DYNAMIC_CALLINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x96B53F0)

namespace System::Dynamic
{
	inline static constexpr unsigned int CallInfo_TypeDefinitionIndex = 33542;

	class CallInfo : public Il2CppObject
	{
	public:
		::System::Int32 _ArgumentCount_k__BackingField; // 0x10
		Il2CppObject* _ArgumentNames_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CALLINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CALLINFO_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_ArgumentNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CALLINFO_GET_ARGUMENTNAMES_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CALLINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CALLINFO_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

