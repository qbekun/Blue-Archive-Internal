#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_NETWORKSTREAMWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B934D0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_USINGSECURESTREAM_OFFSET UNITYSDK_OFFSET(0x9B97300)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_SERVERADDRESS_OFFSET UNITYSDK_OFFSET(0x9B967E0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x9B98F30)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x9BA60F0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x9BA6100)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9BA6110)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9BA6140)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9BA6170)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BA61A0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BA61D0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BA6200)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BA6230)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BA6260)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9BA6290)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9BA62C0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9BA62F0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SEEK_OFFSET UNITYSDK_OFFSET(0x9BA6320)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_READ_OFFSET UNITYSDK_OFFSET(0x9BA6350)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_WRITE_OFFSET UNITYSDK_OFFSET(0x9BA6380)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BA63B0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_CLOSESOCKET_OFFSET UNITYSDK_OFFSET(0x9B95330)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9B93880)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9BA64D0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9BA6520)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_READASYNC_OFFSET UNITYSDK_OFFSET(0x9BA6550)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9BA6590)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9BA65E0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9BA6610)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9BA6650)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9BA6680)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9BA66B0)
#define SYSTEM_NET_NETWORKSTREAMWRAPPER_SETSOCKETTIMEOUTOPTION_OFFSET UNITYSDK_OFFSET(0x9BA29A0)

namespace System::Net
{
	inline static constexpr unsigned int NetworkStreamWrapper_TypeDefinitionIndex = 29670;

	class NetworkStreamWrapper : public Il2CppObject
	{
	public:
		::System::Net::Sockets::TcpClient* _client; // 0x28
		::System::Net::Sockets::NetworkStream* _networkStream; // 0x30

		::System::Void .ctor(::System::Net::Sockets::TcpClient* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::TcpClient*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UsingSecureStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_USINGSECURESTREAM_OFFSET))(nullptr);
		}

		::System::Net::IPAddress* get_ServerAddress()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_SERVERADDRESS_OFFSET))(nullptr);
		}

		::System::Net::Sockets::Socket* get_Socket()
		{
			return (return (::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_SOCKET_OFFSET))(nullptr);
		}

		::System::Net::Sockets::NetworkStream* get_NetworkStream()
		{
			return (return (::System::Net::Sockets::NetworkStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_NETWORKSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_NetworkStream(::System::Net::Sockets::NetworkStream* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::NetworkStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_NETWORKSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTimeout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_CANTIMEOUT_OFFSET))(nullptr);
		}

		::System::Int32 get_ReadTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_READTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ReadTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_READTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WriteTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_WRITETIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_WriteTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_WRITETIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CloseSocket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_CLOSESOCKET_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_ENDREAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_FLUSH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetSocketTimeoutOption(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKSTREAMWRAPPER_SETSOCKETTIMEOUTOPTION_OFFSET))(arg, nullptr);
		}

	};
}

