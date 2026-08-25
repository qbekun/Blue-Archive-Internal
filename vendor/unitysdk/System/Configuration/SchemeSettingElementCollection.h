#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB69D0)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9AB6A00)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB6A30)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB6A60)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB6A90)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x9AB6AC0)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9AB6AF0)

namespace System::Configuration
{
	inline static constexpr unsigned int SchemeSettingElementCollection_TypeDefinitionIndex = 30038;

	class SchemeSettingElementCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElementCollectionType* get_CollectionType()
		{
			return (return (::System::Configuration::ConfigurationElementCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Configuration::SchemeSettingElement* get_Item(::System::Int32 arg)
		{
			return (return (::System::Configuration::SchemeSettingElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SchemeSettingElement* get_Item(::System::String* str)
		{
			return (return (::System::Configuration::SchemeSettingElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Configuration::SchemeSettingElement* arg)
		{
			return (return (::System::Int32(*)(::System::Configuration::SchemeSettingElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

	};
}

