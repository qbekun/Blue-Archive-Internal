#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO::Transports { class TransportStates; }
namespace BestHTTP::SocketIO { class SocketManager; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO::Transports { class TransportTypes; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SocketIO { class SupportedSocketIOVersions; }

#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x502260)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x502270)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x502280)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x502290)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x5022A0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x5022B0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x5022C0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4FDE10)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x5022D0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x5027D0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x5027E0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x502980)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SENDV3_OFFSET UNITYSDK_OFFSET(0x5031C0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SENDV2_OFFSET UNITYSDK_OFFSET(0x502EC0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_ONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x5035E0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x503BC0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x504090)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_ONPACKET_OFFSET UNITYSDK_OFFSET(0x5045F0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GETSERVERVERSION_OFFSET UNITYSDK_OFFSET(0x504870)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSE_OFFSET UNITYSDK_OFFSET(0x503B50)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSEV3_OFFSET UNITYSDK_OFFSET(0x505190)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_FINDNEXTRECORDSEPARATOR_OFFSET UNITYSDK_OFFSET(0x5058C0)
#define BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSEV2_OFFSET UNITYSDK_OFFSET(0x5049D0)

namespace BestHTTP::SocketIO::Transports
{
	inline static constexpr unsigned int PollingTransport_TypeDefinitionIndex = 21361;

	class PollingTransport : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::Transports::TransportStates* _State_k__BackingField; // 0x10
		::BestHTTP::SocketIO::SocketManager* _Manager_k__BackingField; // 0x18
		::BestHTTP::HTTPRequest* LastRequest; // 0x20
		::BestHTTP::HTTPRequest* PollRequest; // 0x28
		::BestHTTP::SocketIO::Packet* PacketWithAttachment; // 0x30
		Il2CppObject* lonelyPacketList; // 0x38
		::System::Text::StringBuilder* sendBuilder; // 0x40

		::BestHTTP::SocketIO::Transports::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SocketIO::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::Transports::TransportStates* get_State()
		{
			return (return (::BestHTTP::SocketIO::Transports::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::SocketIO::Transports::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Manager(::BestHTTP::SocketIO::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SET_MANAGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRequestInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_ISREQUESTINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPollingInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GET_ISPOLLINGINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Send(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void SendV3(Il2CppObject* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SENDV3_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendV2(Il2CppObject* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_SENDV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_ONREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Void OnPollRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_ONPACKET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::SupportedSocketIOVersions* GetServerVersion(::BestHTTP::HTTPResponse* arg)
		{
			return (return (::BestHTTP::SocketIO::SupportedSocketIOVersions*(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_GETSERVERVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void ParseResponse(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseResponseV3(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSEV3_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindNextRecordSeparator(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_FINDNEXTRECORDSEPARATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParseResponseV2(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_TRANSPORTS_POLLINGTRANSPORT_PARSERESPONSEV2_OFFSET))(arg, nullptr);
		}

	};
}

