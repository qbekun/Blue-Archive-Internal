#pragma once
#include "unitysdk.h"

class KeyMappingStruct;

#define PCKEYMAPPINGSO_TRYADDKEYMAPPINGID_OFFSET UNITYSDK_OFFSET(0x2198960)
#define PCKEYMAPPINGSO_TRYADDIDBINDING_OFFSET UNITYSDK_OFFSET(0x21989D0)
#define PCKEYMAPPINGSO_TRYGETKEYBINDINGID_OFFSET UNITYSDK_OFFSET(0x2198F40)
#define PCKEYMAPPINGSO_TRYGETBINDINGLISTFROMPREFAB_OFFSET UNITYSDK_OFFSET(0x2199080)
#define PCKEYMAPPINGSO_DELETEBINDKEY_OFFSET UNITYSDK_OFFSET(0x2199100)
#define PCKEYMAPPINGSO_DELETEKEYMAPPINGID_OFFSET UNITYSDK_OFFSET(0x21993D0)
#define PCKEYMAPPINGSO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2199B00)

	inline static constexpr unsigned int PCKeyMappingSO_TypeDefinitionIndex = 4128;

	class PCKeyMappingSO : public Il2CppObject
	{
	public:
		Il2CppObject* KeyMappingDictionary; // 0x18
		Il2CppObject* BindingPrefabDictionary; // 0x20
		Il2CppObject* KeyBindingDictionary; // 0x28

		::System::Boolean TryAddKeyMappingId(KeyMappingStruct* arg)
		{
			return ((::System::Boolean(*)(KeyMappingStruct*, ::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_TRYADDKEYMAPPINGID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAddIdBinding(::System::String* str, ::System::String* str2, KeyMappingStruct* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, KeyMappingStruct*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_TRYADDIDBINDING_OFFSET))(str, str2, arg, arg2, nullptr);
		}

		::System::Boolean TryGetKeyBindingId(KeyMappingStruct* arg, ::System::String&* arg2)
		{
			return ((::System::Boolean(*)(KeyMappingStruct*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_TRYGETKEYBINDINGID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetBindingListFromPrefab(::System::String* str, Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_TRYGETBINDINGLISTFROMPREFAB_OFFSET))(str, arg, nullptr);
		}

		::System::Void DeleteBindKey(::System::String* str, ::System::String* str2, KeyMappingStruct* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, KeyMappingStruct*, ::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_DELETEBINDKEY_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void DeleteKeyMappingId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_DELETEKEYMAPPINGID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKEYMAPPINGSO_.CTOR_OFFSET))(nullptr);
		}

	};

