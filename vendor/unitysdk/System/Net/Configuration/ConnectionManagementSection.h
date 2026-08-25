#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2910)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_CONNECTIONMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x9AB2940)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2970)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementSection_TypeDefinitionIndex = 29979;

	class ConnectionManagementSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::ConnectionManagementElementCollection* get_ConnectionManagement()
		{
			return (return (::System::Net::Configuration::ConnectionManagementElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_CONNECTIONMANAGEMENT_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

