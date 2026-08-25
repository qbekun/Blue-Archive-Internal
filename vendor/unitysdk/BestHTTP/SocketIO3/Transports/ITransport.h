#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3::Transports { class TransportTypes; }
namespace BestHTTP::SocketIO3::Transports { class TransportStates; }
namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }

#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO3::Transports
{
	inline static constexpr unsigned int ITransport_TypeDefinitionIndex = 21405;

	class ITransport : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::Transports::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Transports::TransportStates* get_State()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO3::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRequestInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPollingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_OPEN_OFFSET))(nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Void Send(::BestHTTP::SocketIO3::OutgoingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::OutgoingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_ITRANSPORT_CLOSE_OFFSET))(nullptr);
		}

	};
}

