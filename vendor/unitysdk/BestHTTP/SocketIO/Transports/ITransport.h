#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO::Transports { class TransportTypes; }
namespace BestHTTP::SocketIO::Transports { class TransportStates; }
namespace BestHTTP::SocketIO { class SocketManager; }
namespace BestHTTP::SocketIO { class Packet; }

#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO::Transports
{
	inline static constexpr unsigned int ITransport_TypeDefinitionIndex = 21359;

	class ITransport : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::Transports::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SocketIO::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::Transports::TransportStates* get_State()
		{
			return (return (::BestHTTP::SocketIO::Transports::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRequestInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPollingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_OPEN_OFFSET))(nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Void Send(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_ITRANSPORT_CLOSE_OFFSET))(nullptr);
		}

	};
}

