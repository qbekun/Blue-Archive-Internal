#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::PlatformSupport::TcpClient::General { class TcpClient; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8FFF80)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_NEGOTIATEDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x9029B0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_NEGOTIATEDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x9029C0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x9029D0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x9029E0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_TOPMOSTSTREAM_OFFSET UNITYSDK_OFFSET(0x9029F0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_TOPMOSTSTREAM_OFFSET UNITYSDK_OFFSET(0x902A00)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x902A10)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x902A20)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x902A30)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x902A40)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_CONNECT_OFFSET UNITYSDK_OFFSET(0x8FFFB0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x901F50)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FEBA0)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902A50)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x902A60)
#define BESTHTTP_CONNECTIONS_TCPCONNECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8FFFA0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int TCPConnector_TypeDefinitionIndex = 23428;

	class TCPConnector : public Il2CppObject
	{
	public:
		::System::String* _NegotiatedProtocol_k__BackingField; // 0x10
		::BestHTTP::PlatformSupport::TcpClient::General::TcpClient* _Client_k__BackingField; // 0x18
		::System::IO::Stream* _TopmostStream_k__BackingField; // 0x20
		::System::IO::Stream* _Stream_k__BackingField; // 0x28
		::System::Boolean _LeaveOpen_k__BackingField; // 0x30

		::System::Boolean get_IsConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		::System::String* get_NegotiatedProtocol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_NEGOTIATEDPROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_NegotiatedProtocol(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_NEGOTIATEDPROTOCOL_OFFSET))(str, nullptr);
		}

		::BestHTTP::PlatformSupport::TcpClient::General::TcpClient* get_Client()
		{
			return (return (::BestHTTP::PlatformSupport::TcpClient::General::TcpClient*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_CLIENT_OFFSET))(nullptr);
		}

		::System::Void set_Client(::BestHTTP::PlatformSupport::TcpClient::General::TcpClient* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::TcpClient::General::TcpClient*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_CLIENT_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_TopmostStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_TOPMOSTSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_TopmostStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_TOPMOSTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_Stream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_STREAM_OFFSET))(nullptr);
		}

		::System::Void set_Stream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_STREAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LeaveOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_GET_LEAVEOPEN_OFFSET))(nullptr);
		}

		::System::Void set_LeaveOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_SET_LEAVEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void Connect(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_CONNECT_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_TCPCONNECTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

