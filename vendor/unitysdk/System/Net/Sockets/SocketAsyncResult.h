#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AAA540)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAA210)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x9AAA590)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAA6E0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x9AAA720)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_CHECKIFTHROWDELAYEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9AAA7A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETEDISPOSED_OFFSET UNITYSDK_OFFSET(0x9AAA850)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AA60D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AAA860)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AA6E20)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AAA870)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AA56A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AA56D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9AA5A30)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncResult_TypeDefinitionIndex = 29925;

	class SocketAsyncResult : public Il2CppObject
	{
	public:
		::System::Net::Sockets::Socket* socket; // 0x30
		::System::Net::Sockets::SocketOperation* operation; // 0x38
		::System::Exception* DelayedException; // 0x40
		::System::Net::EndPoint* EndPoint; // 0x48
		Il2CppObject* Buffer; // 0x50
		::System::Int32 Offset; // 0x60
		::System::Int32 Size; // 0x64
		::System::Net::Sockets::SocketFlags* SockFlags; // 0x68
		::System::Net::Sockets::Socket* AcceptSocket; // 0x70
		::Il2CppArray<::System::Object*>* Addresses; // 0x78
		::System::Int32 Port; // 0x80
		Il2CppObject* Buffers; // 0x88
		::System::Boolean ReuseSocket; // 0x90
		::System::Int32 CurrentAddress; // 0x94
		::System::Net::Sockets::Socket* AcceptedSocket; // 0x98
		::System::Int32 Total; // 0xA0
		::System::Int32 error; // 0xA4
		::System::Int32 EndCalled; // 0xA8

		::System::Int32 get_Handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Net::Sockets::Socket* arg, ::System::AsyncCallback* arg, ::System::Object* arg, ::System::Net::Sockets::SocketOperation* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Net::Sockets::Socket* arg, ::System::AsyncCallback* arg, ::System::Object* arg, ::System::Net::Sockets::SocketOperation* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Net::Sockets::SocketError* get_ErrorCode()
		{
			return (return (::System::Net::Sockets::SocketError*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_ERRORCODE_OFFSET))(nullptr);
		}

		::System::Void CheckIfThrowDelayedException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_CHECKIFTHROWDELAYEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void CompleteDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETEDISPOSED_OFFSET))(nullptr);
		}

		::System::Void Complete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(nullptr);
		}

		::System::Void Complete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(::System::Exception* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Complete(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(::System::Net::Sockets::Socket* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(::System::Net::Sockets::Socket* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(arg, arg, nullptr);
		}

	};
}

