#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B69A30)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B7C240)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B7C250)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SETWEAK_OFFSET UNITYSDK_OFFSET(0x9B67C10)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SCAVENGEKEYS_OFFSET UNITYSDK_OFFSET(0x9B7C260)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7CA20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_TypeDefinitionIndex = 29535;

	class WeakHashtable : public Il2CppObject
	{
	public:
		::System::Collections::IEqualityComparer* _comparer; // 0x0
		::System::Int64 _lastGlobalMem; // 0x50
		::System::Int32 _lastHashCount; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeak(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SETWEAK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ScavengeKeys()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_SCAVENGEKEYS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

