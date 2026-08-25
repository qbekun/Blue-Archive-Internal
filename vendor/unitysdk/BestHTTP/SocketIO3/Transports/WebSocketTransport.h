#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3::Transports { class TransportStates; }
namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::SocketIO3::Transports { class TransportTypes; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }

#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x63DFF0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x63E000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x63E010)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x63E020)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x63E030)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x63E040)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x63E050)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x63E060)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x63E070)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x63E080)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x63E0C0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x63E7C0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x63E930)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONOPEN_OFFSET UNITYSDK_OFFSET(0x63E940)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x63ED70)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONBINARY_OFFSET UNITYSDK_OFFSET(0x63F8A0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONERROR_OFFSET UNITYSDK_OFFSET(0x63FF90)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x640350)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x63EB50)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x640530)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONPACKET_OFFSET UNITYSDK_OFFSET(0x63F4F0)

namespace BestHTTP::SocketIO3::Transports
{
	inline static constexpr unsigned int WebSocketTransport_TypeDefinitionIndex = 21407;

	class WebSocketTransport : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::Transports::TransportStates* _State_k__BackingField; // 0x10
		::BestHTTP::SocketIO3::SocketManager* _Manager_k__BackingField; // 0x18
		::BestHTTP::WebSocket::WebSocket* _Implementation_k__BackingField; // 0x20

		::BestHTTP::SocketIO3::Transports::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Transports::TransportStates* get_State()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::SocketIO3::Transports::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO3::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Manager(::BestHTTP::SocketIO3::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SET_MANAGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRequestInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPollingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET))(nullptr);
		}

		::BestHTTP::WebSocket::WebSocket* get_Implementation()
		{
			return (return (::BestHTTP::WebSocket::WebSocket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_GET_IMPLEMENTATION_OFFSET))(nullptr);
		}

		::System::Void set_Implementation(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SET_IMPLEMENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO3::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Void OnOpen(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessage(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnBinary(::BestHTTP::WebSocket::WebSocket* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONBINARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnError(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnClosed(::BestHTTP::WebSocket::WebSocket* arg, ::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONCLOSED_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Send(::BestHTTP::SocketIO3::OutgoingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::OutgoingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_WEBSOCKETTRANSPORT_ONPACKET_OFFSET))(arg, nullptr);
		}

	};
}

