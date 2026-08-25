#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_IRESOURCELOCATOR_LOCATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_IRESOURCELOCATOR_GET_LOCATORID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_IRESOURCELOCATOR_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::AddressableAssets::ResourceLocators
{
	inline static constexpr unsigned int IResourceLocator_TypeDefinitionIndex = 36223;

	class IResourceLocator : public Il2CppObject
	{
	public:
		::System::Boolean Locate(::System::Object* arg, ::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_IRESOURCELOCATOR_LOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_LocatorId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_IRESOURCELOCATOR_GET_LOCATORID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_IRESOURCELOCATOR_GET_KEYS_OFFSET))(nullptr);
		}

	};
}

