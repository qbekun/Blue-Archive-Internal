#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3F60)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTFTPCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9AB3F90)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTHTTPCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9AB3FC0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTPOLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB3FF0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DEFAULTPOLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB4020)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DISABLEALLCACHING_OFFSET UNITYSDK_OFFSET(0x9AB4050)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DISABLEALLCACHING_OFFSET UNITYSDK_OFFSET(0x9AB4080)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_ISPRIVATECACHE_OFFSET UNITYSDK_OFFSET(0x9AB40B0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_ISPRIVATECACHE_OFFSET UNITYSDK_OFFSET(0x9AB40E0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4110)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_UNSPECIFIEDMAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x9AB4140)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_UNSPECIFIEDMAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x9AB4170)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB41A0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB41D0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int RequestCachingSection_TypeDefinitionIndex = 29997;

	class RequestCachingSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::FtpCachePolicyElement* get_DefaultFtpCachePolicy()
		{
			return (return (::System::Net::Configuration::FtpCachePolicyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTFTPCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Net::Configuration::HttpCachePolicyElement* get_DefaultHttpCachePolicy()
		{
			return (return (::System::Net::Configuration::HttpCachePolicyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTHTTPCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Net::Cache::RequestCacheLevel* get_DefaultPolicyLevel()
		{
			return (return (::System::Net::Cache::RequestCacheLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTPOLICYLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_DefaultPolicyLevel(::System::Net::Cache::RequestCacheLevel* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCacheLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DEFAULTPOLICYLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisableAllCaching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DISABLEALLCACHING_OFFSET))(nullptr);
		}

		::System::Void set_DisableAllCaching(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DISABLEALLCACHING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPrivateCache()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_ISPRIVATECACHE_OFFSET))(nullptr);
		}

		::System::Void set_IsPrivateCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_ISPRIVATECACHE_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_UnspecifiedMaximumAge()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_UNSPECIFIEDMAXIMUMAGE_OFFSET))(nullptr);
		}

		::System::Void set_UnspecifiedMaximumAge(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_UNSPECIFIEDMAXIMUMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_DESERIALIZEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_POSTDESERIALIZE_OFFSET))(nullptr);
		}

	};
}

