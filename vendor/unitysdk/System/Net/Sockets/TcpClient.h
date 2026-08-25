#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_TCPCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA8110)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA8130)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA8320)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x9AA8C90)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x9AA8CA0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x9AA8CB0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0x9AA8580)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0x9AA8CD0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x9AA8DE0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_ENDCONNECT_OFFSET UNITYSDK_OFFSET(0x9AA8E50)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x9AA8E90)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x9AA9050)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AA91B0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AA9250)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AA9470)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9AA9490)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AA82A0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TcpClient_TypeDefinitionIndex = 29920;

	class TcpClient : public Il2CppObject
	{
	public:
		::System::Net::Sockets::Socket* m_ClientSocket; // 0x10
		::System::Boolean m_Active; // 0x18
		::System::Net::Sockets::NetworkStream* m_DataStream; // 0x20
		::System::Net::Sockets::AddressFamily* m_Family; // 0x28
		::System::Boolean m_CleanedUp; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::Sockets::AddressFamily* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::AddressFamily*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Net::Sockets::Socket* get_Client()
		{
			return (return (::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CLIENT_OFFSET))(nullptr);
		}

		::System::Void set_Client(::System::Net::Sockets::Socket* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_CLIENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Connected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CONNECTED_OFFSET))(nullptr);
		}

		::System::Void Connect(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_OFFSET))(str, arg, nullptr);
		}

		::System::Void Connect(::System::Net::IPEndPoint* arg)
		{
			((::System::Void(*)(::System::Net::IPEndPoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginConnect(::System::String* str, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void EndConnect(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_ENDCONNECT_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ConnectAsync(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Net::Sockets::NetworkStream* GetStream()
		{
			return (return (::System::Net::Sockets::NetworkStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GETSTREAM_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

