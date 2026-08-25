#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB26A0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB26D0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB2700)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB2730)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB2760)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9AB2790)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AB27C0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB27F0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x9AB2820)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9AB2850)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB2880)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB28B0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9AB28E0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementElementCollection_TypeDefinitionIndex = 29978;

	class ConnectionManagementElementCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::ConnectionManagementElement* get_Item(::System::Int32 arg)
		{
			return (return (::System::Net::Configuration::ConnectionManagementElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Net::Configuration::ConnectionManagementElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Net::Configuration::ConnectionManagementElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Configuration::ConnectionManagementElement* get_Item(::System::String* str)
		{
			return (return (::System::Net::Configuration::ConnectionManagementElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Net::Configuration::ConnectionManagementElement* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::Configuration::ConnectionManagementElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::Net::Configuration::ConnectionManagementElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::ConnectionManagementElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::ConnectionManagementElement* arg)
		{
			return (return (::System::Int32(*)(::System::Net::Configuration::ConnectionManagementElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Net::Configuration::ConnectionManagementElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::ConnectionManagementElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

	};
}

