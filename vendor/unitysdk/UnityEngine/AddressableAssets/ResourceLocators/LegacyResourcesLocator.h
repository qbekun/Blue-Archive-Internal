#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E19050)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9E19060)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_LOCATE_OFFSET UNITYSDK_OFFSET(0x9E19070)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_GET_LOCATORID_OFFSET UNITYSDK_OFFSET(0x9E19310)

namespace UnityEngine::AddressableAssets::ResourceLocators
{
	inline static constexpr unsigned int LegacyResourcesLocator_TypeDefinitionIndex = 36224;

	class LegacyResourcesLocator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean Locate(::System::Object* arg, ::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_LOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_LocatorId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_LEGACYRESOURCESLOCATOR_GET_LOCATORID_OFFSET))(nullptr);
		}

	};
}

