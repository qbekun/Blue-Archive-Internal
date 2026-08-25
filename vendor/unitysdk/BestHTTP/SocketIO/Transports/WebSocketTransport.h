#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO::Transports { class TransportStates; }
namespace BestHTTP::SocketIO { class SocketManager; }
namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO::Transports { class TransportTypes; }

#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x505940)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x505950)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x505960)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x505970)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x505980)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x505990)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x5059A0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x5059B0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x5059C0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4FDEF0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x5059D0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x5060E0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x506230)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONOPEN_OFFSET UNITYSDK_OFFSET(0x506240)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x5069A0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONBINARY_OFFSET UNITYSDK_OFFSET(0x507180)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONERROR_OFFSET UNITYSDK_OFFSET(0x507690)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x507A50)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x506410)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x507C20)
#define BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONPACKET_OFFSET UNITYSDK_OFFSET(0x506EC0)

namespace BestHTTP::SocketIO::Transports
{
	inline static constexpr unsigned int WebSocketTransport_TypeDefinitionIndex = 21362;

	class WebSocketTransport : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::Transports::TransportStates* _State_k__BackingField; // 0x10
		::BestHTTP::SocketIO::SocketManager* _Manager_k__BackingField; // 0x18
		::BestHTTP::WebSocket::WebSocket* _Implementation_k__BackingField; // 0x20
		::BestHTTP::SocketIO::Packet* PacketWithAttachment; // 0x28
		::Il2CppArray<::System::Object*>* Buffer; // 0x30

		::BestHTTP::SocketIO::Transports::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SocketIO::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::Transports::TransportStates* get_State()
		{
			return (return (::BestHTTP::SocketIO::Transports::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::SocketIO::Transports::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Manager(::BestHTTP::SocketIO::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SET_MANAGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRequestInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPollingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET))(nullptr);
		}

		::BestHTTP::WebSocket::WebSocket* get_Implementation()
		{
			return (return (::BestHTTP::WebSocket::WebSocket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_GET_IMPLEMENTATION_OFFSET))(nullptr);
		}

		::System::Void set_Implementation(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SET_IMPLEMENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Void OnOpen(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessage(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnBinary(::BestHTTP::WebSocket::WebSocket* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONBINARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnError(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnClosed(::BestHTTP::WebSocket::WebSocket* arg, ::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONCLOSED_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Send(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_WEBSOCKETTRANSPORT_ONPACKET_OFFSET))(arg, nullptr);
		}

	};
}

