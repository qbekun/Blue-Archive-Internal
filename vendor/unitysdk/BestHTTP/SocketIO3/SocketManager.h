#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class SocketOptions; }
namespace BestHTTP::SocketIO3 { class HandshakeData; }
namespace BestHTTP::SocketIO3::Transports { class ITransport; }
namespace BestHTTP::SocketIO3::Parsers { class IParser; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x50CA00)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x50CA10)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_STATE_OFFSET UNITYSDK_OFFSET(0x50CA20)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x50CA30)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x50CA40)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_URI_OFFSET UNITYSDK_OFFSET(0x50CA50)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_URI_OFFSET UNITYSDK_OFFSET(0x50CA60)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x50CA70)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x50CA80)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x50CA90)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x50CAA0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_REQUESTCOUNTER_OFFSET UNITYSDK_OFFSET(0x50CAB0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_REQUESTCOUNTER_OFFSET UNITYSDK_OFFSET(0x50CAC0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x50CAD0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x50CB50)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_RECONNECTATTEMPTS_OFFSET UNITYSDK_OFFSET(0x50CD80)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_RECONNECTATTEMPTS_OFFSET UNITYSDK_OFFSET(0x50CD90)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x50CDA0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_PARSER_OFFSET UNITYSDK_OFFSET(0x50CDB0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x50CDC0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x50CDD0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x50CDE0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_NEXTACKID_OFFSET UNITYSDK_OFFSET(0x50A310)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x50CED0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x50CEE0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_UPGRADINGTRANSPORT_OFFSET UNITYSDK_OFFSET(0x50CEF0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_UPGRADINGTRANSPORT_OFFSET UNITYSDK_OFFSET(0x50CF00)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x50CF10)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x50D2B0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x50D320)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x50CFB0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GETSOCKET_OFFSET UNITYSDK_OFFSET(0x50CB10)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_GETSOCKET_OFFSET UNITYSDK_OFFSET(0x50CB60)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.REMOVE_OFFSET UNITYSDK_OFFSET(0x50D390)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x50AFF0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x50D4C0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.CLOSE_OFFSET UNITYSDK_OFFSET(0x50D560)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.TRYTORECONNECT_OFFSET UNITYSDK_OFFSET(0x50DA40)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONTRANSPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x50E0F0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONTRANSPORTERROR_OFFSET UNITYSDK_OFFSET(0x50EAD0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONTRANSPORTPROBED_OFFSET UNITYSDK_OFFSET(0x50EC60)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SELECTTRANSPORT_OFFSET UNITYSDK_OFFSET(0x50EE20)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_SENDOFFLINEPACKETS_OFFSET UNITYSDK_OFFSET(0x50E920)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.SENDPACKET_OFFSET UNITYSDK_OFFSET(0x50EED0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONPACKET_OFFSET UNITYSDK_OFFSET(0x50F4E0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_EMITALL_OFFSET UNITYSDK_OFFSET(0x50FBC0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x50FCD0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x50FDC0)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITERROR_OFFSET UNITYSDK_OFFSET(0x50FE90)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITALL_OFFSET UNITYSDK_OFFSET(0x510320)
#define BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x510440)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int SocketManager_TypeDefinitionIndex = 21400;

	class SocketManager : public Il2CppObject
	{
	public:
		States* state; // 0x10
		::BestHTTP::SocketIO3::SocketOptions* _Options_k__BackingField; // 0x18
		::System::Uri* _Uri_k__BackingField; // 0x20
		::BestHTTP::SocketIO3::HandshakeData* _Handshake_k__BackingField; // 0x28
		::BestHTTP::SocketIO3::Transports::ITransport* _Transport_k__BackingField; // 0x30
		::System::UInt64 _RequestCounter_k__BackingField; // 0x38
		::System::Int32 _ReconnectAttempts_k__BackingField; // 0x40
		::BestHTTP::SocketIO3::Parsers::IParser* _Parser_k__BackingField; // 0x48
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x50
		::System::Int32 nextAckId; // 0x58
		States* _PreviousState_k__BackingField; // 0x5C
		::BestHTTP::SocketIO3::Transports::ITransport* _UpgradingTransport_k__BackingField; // 0x60
		Il2CppObject* Namespaces; // 0x68
		Il2CppObject* Sockets; // 0x70
		Il2CppObject* OfflinePackets; // 0x78
		::System::DateTime* LastHeartbeat; // 0x80
		::System::DateTime* ReconnectAt; // 0x88
		::System::DateTime* ConnectionStarted; // 0x90
		::System::Boolean closing; // 0x98
		::System::DateTime* lastPingReceived; // 0xA0

		::System::Int32 get_ProtocolVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		States* get_State()
		{
			return (return (States*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(States* arg)
		{
			((::System::Void(*)(States*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::SocketOptions* get_Options()
		{
			return (return (::BestHTTP::SocketIO3::SocketOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(::BestHTTP::SocketIO3::SocketOptions* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_URI_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::HandshakeData* get_Handshake()
		{
			return (return (::BestHTTP::SocketIO3::HandshakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_HANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void set_Handshake(::BestHTTP::SocketIO3::HandshakeData* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::HandshakeData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_HANDSHAKE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Transports::ITransport* get_Transport()
		{
			return (return (::BestHTTP::SocketIO3::Transports::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_TRANSPORT_OFFSET))(nullptr);
		}

		::System::Void set_Transport(::BestHTTP::SocketIO3::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_TRANSPORT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_RequestCounter()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_REQUESTCOUNTER_OFFSET))(nullptr);
		}

		::System::Void set_RequestCounter(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_REQUESTCOUNTER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Socket* get_Socket()
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_SOCKET_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Socket* get_Item(::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ReconnectAttempts()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_RECONNECTATTEMPTS_OFFSET))(nullptr);
		}

		::System::Void set_ReconnectAttempts(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_RECONNECTATTEMPTS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Parsers::IParser* get_Parser()
		{
			return (return (::BestHTTP::SocketIO3::Parsers::IParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_PARSER_OFFSET))(nullptr);
		}

		::System::Void set_Parser(::BestHTTP::SocketIO3::Parsers::IParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Parsers::IParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_PARSER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_Timestamp()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_TIMESTAMP_OFFSET))(nullptr);
		}

		::System::Int32 get_NextAckId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_NEXTACKID_OFFSET))(nullptr);
		}

		States* get_PreviousState()
		{
			return (return (States*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_PREVIOUSSTATE_OFFSET))(nullptr);
		}

		::System::Void set_PreviousState(States* arg)
		{
			((::System::Void(*)(States*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_PREVIOUSSTATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Transports::ITransport* get_UpgradingTransport()
		{
			return (return (::BestHTTP::SocketIO3::Transports::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GET_UPGRADINGTRANSPORT_OFFSET))(nullptr);
		}

		::System::Void set_UpgradingTransport(::BestHTTP::SocketIO3::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SET_UPGRADINGTRANSPORT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SocketIO3::Parsers::IParser* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SocketIO3::Parsers::IParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SocketIO3::SocketOptions* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SocketIO3::SocketOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SocketIO3::Parsers::IParser* arg, ::BestHTTP::SocketIO3::SocketOptions* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SocketIO3::Parsers::IParser*, ::BestHTTP::SocketIO3::SocketOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SocketIO3::Socket* GetSocket()
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GETSOCKET_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Socket* GetSocket(::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_GETSOCKET_OFFSET))(str, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.Remove(::BestHTTP::SocketIO3::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.TryToReconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.TRYTORECONNECT_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.SocketIO3.IManager.OnTransportConnected(::BestHTTP::SocketIO3::Transports::ITransport* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONTRANSPORTCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.OnTransportError(::BestHTTP::SocketIO3::Transports::ITransport* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONTRANSPORTERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.OnTransportProbed(::BestHTTP::SocketIO3::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONTRANSPORTPROBED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Transports::ITransport* SelectTransport()
		{
			return (return (::BestHTTP::SocketIO3::Transports::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SELECTTRANSPORT_OFFSET))(nullptr);
		}

		::System::Void SendOfflinePackets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_SENDOFFLINEPACKETS_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.SendPacket(::BestHTTP::SocketIO3::OutgoingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::OutgoingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.SENDPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.OnPacket(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void EmitAll(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_EMITALL_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.EmitEvent(::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.EmitError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITERROR_OFFSET))(str, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.IManager.EmitAll(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.SOCKETIO3.IMANAGER.EMITALL_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETMANAGER_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

	};
}

