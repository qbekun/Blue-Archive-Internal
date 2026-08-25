#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4DD0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB4E00)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB4E30)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB4E60)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB4E90)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9AB4EC0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AB4EF0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB4F20)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x9AB4F50)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9AB4F80)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB4FB0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AB4FE0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9AB5010)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModuleElementCollection_TypeDefinitionIndex = 30006;

	class WebRequestModuleElementCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::WebRequestModuleElement* get_Item(::System::Int32 arg)
		{
			return (return (::System::Net::Configuration::WebRequestModuleElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Net::Configuration::WebRequestModuleElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Net::Configuration::WebRequestModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Configuration::WebRequestModuleElement* get_Item(::System::String* str)
		{
			return (return (::System::Net::Configuration::WebRequestModuleElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Net::Configuration::WebRequestModuleElement* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::Configuration::WebRequestModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::Net::Configuration::WebRequestModuleElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::WebRequestModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return (return (::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(nullptr);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* arg)
		{
			return (return (::System::Object*(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::WebRequestModuleElement* arg)
		{
			return (return (::System::Int32(*)(::System::Net::Configuration::WebRequestModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Net::Configuration::WebRequestModuleElement* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::WebRequestModuleElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

	};
}

