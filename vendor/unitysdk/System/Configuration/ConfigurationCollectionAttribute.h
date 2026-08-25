#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96280D0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_ADDITEMNAME_OFFSET UNITYSDK_OFFSET(0x96280E0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_CLEARITEMSNAME_OFFSET UNITYSDK_OFFSET(0x96280F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9628100)
#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_REMOVEITEMNAME_OFFSET UNITYSDK_OFFSET(0x9628110)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationCollectionAttribute_TypeDefinitionIndex = 38070;

	class ConfigurationCollectionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AddItemName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_ADDITEMNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ClearItemsName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_CLEARITEMSNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_CollectionType(::System::Configuration::ConfigurationElementCollectionType* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElementCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_COLLECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RemoveItemName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE_SET_REMOVEITEMNAME_OFFSET))(str, nullptr);
		}

	};
}

