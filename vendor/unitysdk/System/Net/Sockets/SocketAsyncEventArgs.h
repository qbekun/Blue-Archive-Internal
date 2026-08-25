#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x9AAA0B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x9AAA0C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BYTESTRANSFERRED_OFFSET UNITYSDK_OFFSET(0x9AAA0D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BYTESTRANSFERRED_OFFSET UNITYSDK_OFFSET(0x9AAA0E0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_LASTOPERATION_OFFSET UNITYSDK_OFFSET(0x9AAA0F0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x9AAA100)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSSENDSIZE_OFFSET UNITYSDK_OFFSET(0x9AAA110)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETERROR_OFFSET UNITYSDK_OFFSET(0x9AAA120)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETERROR_OFFSET UNITYSDK_OFFSET(0x9AAA130)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETFLAGS_OFFSET UNITYSDK_OFFSET(0x9AAA140)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x9AAA150)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x9AAA160)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAA170)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA2780)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9AAA220)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AAA230)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AAA240)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBYTESTRANSFERRED_OFFSET UNITYSDK_OFFSET(0x9AA6A50)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_CURRENTSOCKET_OFFSET UNITYSDK_OFFSET(0x9AAA2A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETCURRENTSOCKET_OFFSET UNITYSDK_OFFSET(0x9AAA2B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETLASTOPERATION_OFFSET UNITYSDK_OFFSET(0x9AAA2C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_COMPLETE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9AAA390)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AAA3D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_MEMORYBUFFER_OFFSET UNITYSDK_OFFSET(0x9AAA400)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x9AAA410)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9AAA420)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFERLIST_OFFSET UNITYSDK_OFFSET(0x9AAA430)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x9AAA440)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncEventArgs_TypeDefinitionIndex = 29923;

	class SocketAsyncEventArgs : public Il2CppObject
	{
	public:
		::System::Boolean disposed; // 0x10
		::System::Int32 in_progress; // 0x14
		::System::Net::EndPoint* remote_ep; // 0x18
		::System::Net::Sockets::Socket* current_socket; // 0x20
		::System::Net::Sockets::SocketAsyncResult* socket_async_result; // 0x28
		::System::Exception* _ConnectByNameError_k__BackingField; // 0x30
		::System::Net::Sockets::Socket* _AcceptSocket_k__BackingField; // 0x38
		::System::Int32 _BytesTransferred_k__BackingField; // 0x40
		::System::Boolean _DisconnectReuseSocket_k__BackingField; // 0x44
		::System::Net::Sockets::SocketAsyncOperation* _LastOperation_k__BackingField; // 0x48
		::System::Net::Sockets::IPPacketInformation* _ReceiveMessageFromPacketInfo_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _SendPacketsElements_k__BackingField; // 0x60
		::System::Net::Sockets::TransmitFileOptions* _SendPacketsFlags_k__BackingField; // 0x68
		::System::Int32 _SendPacketsSendSize_k__BackingField; // 0x6C
		::System::Net::Sockets::SocketError* _SocketError_k__BackingField; // 0x70
		::System::Net::Sockets::SocketFlags* _SocketFlags_k__BackingField; // 0x74
		::System::Object* _UserToken_k__BackingField; // 0x78
		Il2CppObject* Completed; // 0x80
		Il2CppObject* _buffer; // 0x88
		::System::Int32 _offset; // 0x98
		::System::Int32 _count; // 0x9C
		::System::Boolean _bufferIsExplicitArray; // 0xA0
		Il2CppObject* _bufferList; // 0xA8
		Il2CppObject* _bufferListInternal; // 0xB0

		::System::Net::Sockets::Socket* get_AcceptSocket()
		{
			return (return (::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_ACCEPTSOCKET_OFFSET))(nullptr);
		}

		::System::Void set_AcceptSocket(::System::Net::Sockets::Socket* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_ACCEPTSOCKET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BytesTransferred()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BYTESTRANSFERRED_OFFSET))(nullptr);
		}

		::System::Void set_BytesTransferred(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BYTESTRANSFERRED_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastOperation(::System::Net::Sockets::SocketAsyncOperation* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_LASTOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_RemoteEndPoint(::System::Net::EndPoint* arg)
		{
			((::System::Void(*)(::System::Net::EndPoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_REMOTEENDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SendPacketsSendSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSSENDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Net::Sockets::SocketError* get_SocketError()
		{
			return (return (::System::Net::Sockets::SocketError*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETERROR_OFFSET))(nullptr);
		}

		::System::Void set_SocketError(::System::Net::Sockets::SocketError* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketError*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETERROR_OFFSET))(arg, nullptr);
		}

		::System::Void set_SocketFlags(::System::Net::Sockets::SocketFlags* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Object* get_UserToken()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_USERTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_UserToken(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_USERTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void SetBytesTransferred(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBYTESTRANSFERRED_OFFSET))(arg, nullptr);
		}

		::System::Net::Sockets::Socket* get_CurrentSocket()
		{
			return (return (::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_CURRENTSOCKET_OFFSET))(nullptr);
		}

		::System::Void SetCurrentSocket(::System::Net::Sockets::Socket* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETCURRENTSOCKET_OFFSET))(arg, nullptr);
		}

		::System::Void SetLastOperation(::System::Net::Sockets::SocketAsyncOperation* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETLASTOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void Complete_internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_COMPLETE_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketAsyncEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MemoryBuffer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_MEMORYBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_Offset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_BufferList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFERLIST_OFFSET))(nullptr);
		}

		::System::Void SetBuffer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBUFFER_OFFSET))(arg, nullptr);
		}

	};
}

