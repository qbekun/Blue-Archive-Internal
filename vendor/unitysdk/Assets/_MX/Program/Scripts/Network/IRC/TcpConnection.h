#pragma once
#include "../../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_SERVER_OFFSET UNITYSDK_OFFSET(0xE626C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_PORT_OFFSET UNITYSDK_OFFSET(0xE626D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0xE626E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_SET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0xE626F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_TCPCLIENT_OFFSET UNITYSDK_OFFSET(0xE62700)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_SET_TCPCLIENT_OFFSET UNITYSDK_OFFSET(0xE62710)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xE58940)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE62670)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0xE62720)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_CONNECT_OFFSET UNITYSDK_OFFSET(0xE627C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xE5DC00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE62950)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE62A20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE62A80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_IPADDRESSADDITIONALINFO_OFFSET UNITYSDK_OFFSET(0xE62AE0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int TcpConnection_TypeDefinitionIndex = 10479;

	class TcpConnection : public Il2CppObject
	{
	public:
		::System::String* _Server_k__BackingField; // 0x10
		::System::Int32 _Port_k__BackingField; // 0x18
		::System::IO::Stream* _NetworkStream_k__BackingField; // 0x20
		::System::Net::Sockets::TcpClient* _TcpClient_k__BackingField; // 0x28
		::System::Boolean disposed; // 0x30

		::System::String* get_Server()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_SERVER_OFFSET))(nullptr);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_PORT_OFFSET))(nullptr);
		}

		::System::IO::Stream* get_NetworkStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_NETWORKSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_NetworkStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_SET_NETWORKSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Net::Sockets::TcpClient* get_TcpClient()
		{
			return ((::System::Net::Sockets::TcpClient*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_TCPCLIENT_OFFSET))(nullptr);
		}

		::System::Void set_TcpClient(::System::Net::Sockets::TcpClient* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::TcpClient*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_SET_TCPCLIENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Send(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_SEND_OFFSET))(str, nullptr);
		}

		::System::Boolean Connect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_CONNECT_OFFSET))(nullptr);
		}

		::System::Void Disconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_DISCONNECT_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void IPAddressAdditionalInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TCPCONNECTION_IPADDRESSADDITIONALINFO_OFFSET))(nullptr);
		}

	};
}

