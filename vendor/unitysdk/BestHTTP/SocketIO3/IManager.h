#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3::Transports { class ITransport; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

#define BESTHTTP_SOCKETIO3_IMANAGER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_TRYTORECONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_ONTRANSPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_ONTRANSPORTERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_ONTRANSPORTPROBED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_SENDPACKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_ONPACKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_EMITERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_IMANAGER_EMITALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int IManager_TypeDefinitionIndex = 21377;

	class IManager : public Il2CppObject
	{
	public:
		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void Remove(::BestHTTP::SocketIO3::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void TryToReconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_TRYTORECONNECT_OFFSET))(nullptr);
		}

		::System::Boolean OnTransportConnected(::BestHTTP::SocketIO3::Transports::ITransport* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_ONTRANSPORTCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnTransportError(::BestHTTP::SocketIO3::Transports::ITransport* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_ONTRANSPORTERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnTransportProbed(::BestHTTP::SocketIO3::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_ONTRANSPORTPROBED_OFFSET))(arg, nullptr);
		}

		::System::Void SendPacket(::BestHTTP::SocketIO3::OutgoingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::OutgoingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_SENDPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void EmitEvent(::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EmitError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_EMITERROR_OFFSET))(str, nullptr);
		}

		::System::Void EmitAll(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_IMANAGER_EMITALL_OFFSET))(str, arg, nullptr);
		}

	};
}

