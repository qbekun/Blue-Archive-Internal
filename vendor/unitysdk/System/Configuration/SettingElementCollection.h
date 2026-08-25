#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5C60)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9AB5C90)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x9AB5CC0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9AB5CF0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AB5D20)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB5D50)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x9AB5D80)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x9AB5DB0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB5DE0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingElementCollection_TypeDefinitionIndex = 30020;

	class SettingElementCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElementCollectionType* get_CollectionType()
		{
			return (return (::System::Configuration::ConfigurationElementCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Configuration::SettingElement* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Configuration::SettingElement* Get(::System::String* str)
		{
			return (return (::System::Configuration::SettingElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_OFFSET))(str, nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Configuration::SettingElement* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

