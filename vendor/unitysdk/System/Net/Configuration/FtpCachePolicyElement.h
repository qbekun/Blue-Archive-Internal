#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2EB0)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB2EE0)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB2F10)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2F40)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB2F70)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x9AB2FA0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int FtpCachePolicyElement_TypeDefinitionIndex = 29986;

	class FtpCachePolicyElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Cache::RequestCacheLevel* get_PolicyLevel()
		{
			return (return (::System::Net::Cache::RequestCacheLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PolicyLevel(::System::Net::Cache::RequestCacheLevel* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCacheLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_RESET_OFFSET))(arg, nullptr);
		}

	};
}

