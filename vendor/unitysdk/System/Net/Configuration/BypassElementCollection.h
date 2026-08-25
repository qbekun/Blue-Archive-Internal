#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB22B0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB22E0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB2310)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB2340)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB2370)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET UNITYSDK_OFFSET(0x9AB23A0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9AB23D0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AB2400)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB2430)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x9AB2460)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9AB2490)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB24C0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB24F0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9AB2520)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int BypassElementCollection_TypeDefinitionIndex = 29976;

	class BypassElementCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::BypassElement* get_Item(::System::Int32 arg)
		{
			return (return (::System::Net::Configuration::BypassElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Net::Configuration::BypassElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Net::Configuration::BypassElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Configuration::BypassElement* get_Item(::System::String* str)
		{
			return (return (::System::Net::Configuration::BypassElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Net::Configuration::BypassElement* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::Configuration::BypassElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_ThrowOnDuplicate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Net::Configuration::BypassElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::BypassElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::BypassElement* arg)
		{
			return (return (::System::Int32(*)(::System::Net::Configuration::BypassElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Net::Configuration::BypassElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::BypassElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

	};
}

