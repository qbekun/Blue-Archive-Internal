#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3210)
#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB3240)
#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_TIMEOUTS_OFFSET UNITYSDK_OFFSET(0x9AB3270)
#define SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_UNESCAPEREQUESTURL_OFFSET UNITYSDK_OFFSET(0x9AB32A0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int HttpListenerElement_TypeDefinitionIndex = 29988;

	class HttpListenerElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::HttpListenerTimeoutsElement* get_Timeouts()
		{
			return (return (::System::Net::Configuration::HttpListenerTimeoutsElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_TIMEOUTS_OFFSET))(nullptr);
		}

		::System::Boolean get_UnescapeRequestUrl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPLISTENERELEMENT_GET_UNESCAPEREQUESTURL_OFFSET))(nullptr);
		}

	};
}

