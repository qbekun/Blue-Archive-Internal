#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9E0E4C0)
#define UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_LOCATE_OFFSET UNITYSDK_OFFSET(0x9E0E500)
#define UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0F320)
#define UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_GET_ATLASSPRITEPROVIDERID_OFFSET UNITYSDK_OFFSET(0x9E0F350)
#define UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_GET_LOCATORID_OFFSET UNITYSDK_OFFSET(0x9E0F7C0)
#define UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_CREATEDYNAMICLOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E0EAC0)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int DynamicResourceLocator_TypeDefinitionIndex = 36208;

	class DynamicResourceLocator : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0x10
		::System::String* m_AtlasSpriteProviderId; // 0x18

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean Locate(::System::Object* arg, ::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_LOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::AddressableAssets::AddressablesImpl* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AtlasSpriteProviderId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_GET_ATLASSPRITEPROVIDERID_OFFSET))(nullptr);
		}

		::System::String* get_LocatorId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_GET_LOCATORID_OFFSET))(nullptr);
		}

		::System::Void CreateDynamicLocations(::System::Type* arg, Il2CppObject* arg, ::System::String* str, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::System::String*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_DYNAMICRESOURCELOCATOR_CREATEDYNAMICLOCATIONS_OFFSET))(arg, arg, str, str, arg, nullptr);
		}

	};
}

