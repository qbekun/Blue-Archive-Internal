#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2550)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2580)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9AB25B0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9AB25E0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_MAXCONNECTION_OFFSET UNITYSDK_OFFSET(0x9AB2610)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_MAXCONNECTION_OFFSET UNITYSDK_OFFSET(0x9AB2640)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2670)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementElement_TypeDefinitionIndex = 29977;

	class ConnectionManagementElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Address()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_Address(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_ADDRESS_OFFSET))(str, nullptr);
		}

		::System::Int32 get_MaxConnection()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_MAXCONNECTION_OFFSET))(nullptr);
		}

		::System::Void set_MaxConnection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_MAXCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

