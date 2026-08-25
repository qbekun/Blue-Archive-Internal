#pragma once
#include "../../unitysdk.h"

#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF3F0A0)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_PORT_OFFSET UNITYSDK_OFFSET(0xF3F120)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xF3F130)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F160)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_SET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0xF3F170)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0xF3F180)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_SET_PORT_OFFSET UNITYSDK_OFFSET(0xF3F190)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0xF3F1A0)
#define MX_NETWORKPROTOCOL_IRCSERVERCONFIG_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0xF3F1B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int IrcServerConfig_TypeDefinitionIndex = 11526;

	class IrcServerConfig : public Il2CppObject
	{
	public:
		::System::String* _HostAddress_k__BackingField; // 0x10
		::System::Int32 _Port_k__BackingField; // 0x18
		::System::String* _Password_k__BackingField; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_PORT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_HostAddress(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_SET_HOSTADDRESS_OFFSET))(str, nullptr);
		}

		::System::String* get_HostAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_HOSTADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_Port(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_SET_PORT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_GET_PASSWORD_OFFSET))(nullptr);
		}

		::System::Void set_Password(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IRCSERVERCONFIG_SET_PASSWORD_OFFSET))(str, nullptr);
		}

	};
}

