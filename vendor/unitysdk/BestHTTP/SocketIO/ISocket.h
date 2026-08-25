#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO { class SocketIOErrors; }

#define BESTHTTP_SOCKETIO_ISOCKET_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_ISOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_ISOCKET_ONPACKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_ISOCKET_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_ISOCKET_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_ISOCKET_EMITERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int ISocket_TypeDefinitionIndex = 21348;

	class ISocket : public Il2CppObject
	{
	public:
		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ISOCKET_OPEN_OFFSET))(nullptr);
		}

		::System::Void Disconnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ISOCKET_DISCONNECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ISOCKET_ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void EmitEvent(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ISOCKET_EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ISOCKET_EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void EmitError(::BestHTTP::SocketIO::SocketIOErrors* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOErrors*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ISOCKET_EMITERROR_OFFSET))(arg, str, nullptr);
		}

	};
}

