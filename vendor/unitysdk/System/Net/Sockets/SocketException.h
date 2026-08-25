#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_WSAGETLASTERROR_ICALL_OFFSET UNITYSDK_OFFSET(0x9AA7EE0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7EF0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7F10)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA39D0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA74F0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7F20)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9AA7F40)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_SOCKETERRORCODE_OFFSET UNITYSDK_OFFSET(0x9AA5500)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketException_TypeDefinitionIndex = 29902;

	class SocketException : public Il2CppObject
	{
	public:
		::System::Net::EndPoint* m_EndPoint; // 0x98

		::System::Int32 WSAGetLastError_icall()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_WSAGETLASTERROR_ICALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::Sockets::SocketError* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketError*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Net::Sockets::SocketError* get_SocketErrorCode()
		{
			return (return (::System::Net::Sockets::SocketError*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_SOCKETERRORCODE_OFFSET))(nullptr);
		}

	};
}

