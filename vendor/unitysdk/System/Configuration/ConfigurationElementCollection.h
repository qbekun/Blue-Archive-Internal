#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9628040)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x9628070)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET UNITYSDK_OFFSET(0x96280A0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationElementCollection_TypeDefinitionIndex = 38068;

	class ConfigurationElementCollection : public Il2CppObject
	{
	public:
		::System::Configuration::ConfigurationElementCollectionType* get_CollectionType()
		{
			return (return (::System::Configuration::ConfigurationElementCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_ThrowOnDuplicate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

	};
}

