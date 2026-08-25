#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4800)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET UNITYSDK_OFFSET(0x9AB4830)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET UNITYSDK_OFFSET(0x9AB4860)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET UNITYSDK_OFFSET(0x9AB4890)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET UNITYSDK_OFFSET(0x9AB48C0)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_IPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB48F0)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_IPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9AB4920)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4950)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB4980)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SocketElement_TypeDefinitionIndex = 30001;

	class SocketElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_AlwaysUseCompletionPortsForAccept()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET))(nullptr);
		}

		::System::Void set_AlwaysUseCompletionPortsForAccept(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AlwaysUseCompletionPortsForConnect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET))(nullptr);
		}

		::System::Void set_AlwaysUseCompletionPortsForConnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET))(arg, nullptr);
		}

		::System::Net::Sockets::IPProtectionLevel* get_IPProtectionLevel()
		{
			return (return (::System::Net::Sockets::IPProtectionLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_IPPROTECTIONLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::IPProtectionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_IPPROTECTIONLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void PostDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_POSTDESERIALIZE_OFFSET))(nullptr);
		}

	};
}

