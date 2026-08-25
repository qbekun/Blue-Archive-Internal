#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E18200)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_GET_LOCATORID_OFFSET UNITYSDK_OFFSET(0x9E19620)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_SET_LOCATORID_OFFSET UNITYSDK_OFFSET(0x9E19630)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E19640)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_GET_LOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E1A240)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_SET_LOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E1A250)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9E1A260)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_LOCATE_OFFSET UNITYSDK_OFFSET(0x9E18700)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_ADD_OFFSET UNITYSDK_OFFSET(0x9E1A0E0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_ADD_OFFSET UNITYSDK_OFFSET(0x9E18460)

namespace UnityEngine::AddressableAssets::ResourceLocators
{
	inline static constexpr unsigned int ResourceLocationMap_TypeDefinitionIndex = 36226;

	class ResourceLocationMap : public Il2CppObject
	{
	public:
		::System::String* _LocatorId_k__BackingField; // 0x10
		Il2CppObject* _Locations_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_LocatorId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_GET_LOCATORID_OFFSET))(nullptr);
		}

		::System::Void set_LocatorId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_SET_LOCATORID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_.CTOR_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_Locations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_GET_LOCATIONS_OFFSET))(nullptr);
		}

		::System::Void set_Locations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_SET_LOCATIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean Locate(::System::Object* arg, ::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_LOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::System::Object* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Object* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONMAP_ADD_OFFSET))(arg, arg, nullptr);
		}

	};
}

