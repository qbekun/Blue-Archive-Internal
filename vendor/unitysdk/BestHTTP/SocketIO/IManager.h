#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO::Transports { class ITransport; }
namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO { class SocketIOErrors; }

#define BESTHTTP_SOCKETIO_IMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_TRYTORECONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_ONTRANSPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_ONTRANSPORTERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_ONTRANSPORTPROBED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_SENDPACKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_ONPACKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_EMITERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_IMANAGER_EMITALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int IManager_TypeDefinitionIndex = 21347;

	class IManager : public Il2CppObject
	{
	public:
		::System::Void Remove(::BestHTTP::SocketIO::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void TryToReconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_TRYTORECONNECT_OFFSET))(nullptr);
		}

		::System::Boolean OnTransportConnected(::BestHTTP::SocketIO::Transports::ITransport* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_ONTRANSPORTCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnTransportError(::BestHTTP::SocketIO::Transports::ITransport* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_ONTRANSPORTERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnTransportProbed(::BestHTTP::SocketIO::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_ONTRANSPORTPROBED_OFFSET))(arg, nullptr);
		}

		::System::Void SendPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_SENDPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void EmitEvent(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EmitError(::BestHTTP::SocketIO::SocketIOErrors* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOErrors*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_EMITERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void EmitAll(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_IMANAGER_EMITALL_OFFSET))(str, arg, nullptr);
		}

	};
}

