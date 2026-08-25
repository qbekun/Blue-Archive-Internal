#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3::Transports { class TransportStates; }
namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SocketIO3::Transports { class TransportTypes; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }

#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x63AFD0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x63AFE0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x63AFF0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x63B000)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x63B010)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x63B020)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x63B030)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x63B040)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x63B120)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x63B610)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x63B620)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x63B830)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ENCODEPACKETS_OFFSET UNITYSDK_OFFSET(0x63BD40)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x63C1A0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x63D230)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x63D6F0)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ONPACKET_OFFSET UNITYSDK_OFFSET(0x63DC60)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSE_OFFSET UNITYSDK_OFFSET(0x63C720)
#define BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_FINDNEXTRECORDSEPARATOR_OFFSET UNITYSDK_OFFSET(0x63DF70)

namespace BestHTTP::SocketIO3::Transports
{
	inline static constexpr unsigned int PollingTransport_TypeDefinitionIndex = 21406;

	class PollingTransport : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::Transports::TransportStates* _State_k__BackingField; // 0x10
		::BestHTTP::SocketIO3::SocketManager* _Manager_k__BackingField; // 0x18
		::BestHTTP::HTTPRequest* LastRequest; // 0x20
		::BestHTTP::HTTPRequest* PollRequest; // 0x28
		Il2CppObject* lonelyPacketList; // 0x30
		::System::Text::StringBuilder* sendBuilder; // 0x38

		::BestHTTP::SocketIO3::Transports::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Transports::TransportStates* get_State()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::SocketIO3::Transports::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO3::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Manager(::BestHTTP::SocketIO3::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SET_MANAGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRequestInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPollingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO3::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Send(::BestHTTP::SocketIO3::OutgoingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::OutgoingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void EncodePackets(Il2CppObject* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ENCODEPACKETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ONREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Void OnPollRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void ParseResponse(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindNextRecordSeparator(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_TRANSPORTS_POLLINGTRANSPORT_FINDNEXTRECORDSEPARATOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

