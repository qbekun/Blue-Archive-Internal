#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

#define BESTHTTP_SOCKETIO3_ISOCKET_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_ISOCKET_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_ISOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_ISOCKET_ONPACKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_ISOCKET_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_ISOCKET_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_ISOCKET_EMITERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int ISocket_TypeDefinitionIndex = 21378;

	class ISocket : public Il2CppObject
	{
	public:
		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_OPEN_OFFSET))(nullptr);
		}

		::System::Void Disconnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_DISCONNECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void EmitEvent(::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void EmitError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ISOCKET_EMITERROR_OFFSET))(str, nullptr);
		}

	};
}

