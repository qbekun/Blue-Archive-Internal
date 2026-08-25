#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5040)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5070)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB50A0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9AB50D0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9AB5100)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB5130)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9AB5160)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9AB5190)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModuleElement_TypeDefinitionIndex = 30007;

	class WebRequestModuleElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void set_Prefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_PREFIX_OFFSET))(str, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_TYPE_OFFSET))(arg, nullptr);
		}

	};
}

