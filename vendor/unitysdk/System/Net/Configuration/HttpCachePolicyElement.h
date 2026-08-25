#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2FD0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x9AB3000)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x9AB3030)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMSTALE_OFFSET UNITYSDK_OFFSET(0x9AB3060)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMSTALE_OFFSET UNITYSDK_OFFSET(0x9AB3090)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MINIMUMFRESH_OFFSET UNITYSDK_OFFSET(0x9AB30C0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MINIMUMFRESH_OFFSET UNITYSDK_OFFSET(0x9AB30F0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB3120)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB3150)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB3180)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB31B0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x9AB31E0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int HttpCachePolicyElement_TypeDefinitionIndex = 29987;

	class HttpCachePolicyElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_MaximumAge()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMAGE_OFFSET))(nullptr);
		}

		::System::Void set_MaximumAge(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMAGE_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_MaximumStale()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMSTALE_OFFSET))(nullptr);
		}

		::System::Void set_MaximumStale(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMSTALE_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_MinimumFresh()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MINIMUMFRESH_OFFSET))(nullptr);
		}

		::System::Void set_MinimumFresh(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MINIMUMFRESH_OFFSET))(arg, nullptr);
		}

		::System::Net::Cache::HttpRequestCacheLevel* get_PolicyLevel()
		{
			return (return (::System::Net::Cache::HttpRequestCacheLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PolicyLevel(::System::Net::Cache::HttpRequestCacheLevel* arg)
		{
			((::System::Void(*)(::System::Net::Cache::HttpRequestCacheLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_RESET_OFFSET))(arg, nullptr);
		}

	};
}

