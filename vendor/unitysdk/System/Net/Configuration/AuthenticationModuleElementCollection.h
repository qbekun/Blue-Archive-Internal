#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1E60)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB1E90)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB1EC0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB1EF0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB1F20)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9AB1F50)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AB1F80)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB1FB0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x9AB1FE0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9AB2010)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB2040)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB2070)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9AB20A0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int AuthenticationModuleElementCollection_TypeDefinitionIndex = 29973;

	class AuthenticationModuleElementCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::AuthenticationModuleElement* get_Item(::System::Int32 arg)
		{
			return (return (::System::Net::Configuration::AuthenticationModuleElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Net::Configuration::AuthenticationModuleElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Net::Configuration::AuthenticationModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Configuration::AuthenticationModuleElement* get_Item(::System::String* str)
		{
			return (return (::System::Net::Configuration::AuthenticationModuleElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Net::Configuration::AuthenticationModuleElement* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::Configuration::AuthenticationModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::Net::Configuration::AuthenticationModuleElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::AuthenticationModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::AuthenticationModuleElement* arg)
		{
			return (return (::System::Int32(*)(::System::Net::Configuration::AuthenticationModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Net::Configuration::AuthenticationModuleElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::AuthenticationModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

	};
}

