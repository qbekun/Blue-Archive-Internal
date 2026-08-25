#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO::JsonEncoders { class IJsonEncoder; }
namespace BestHTTP::SocketIO { class SocketOptions; }
namespace BestHTTP::SocketIO { class HandshakeData; }
namespace BestHTTP::SocketIO::Transports { class ITransport; }
namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO { class SocketIOErrors; }

#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x4FD410)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x4FD440)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_STATE_OFFSET UNITYSDK_OFFSET(0x4FD450)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x4FD460)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x4FD470)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_URI_OFFSET UNITYSDK_OFFSET(0x4FD480)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_URI_OFFSET UNITYSDK_OFFSET(0x4FD490)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x4FD4A0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x4FD4B0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x4FD4C0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x4FD4D0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_REQUESTCOUNTER_OFFSET UNITYSDK_OFFSET(0x4FD4E0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_REQUESTCOUNTER_OFFSET UNITYSDK_OFFSET(0x4FD4F0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x4FD500)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4FD580)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_RECONNECTATTEMPTS_OFFSET UNITYSDK_OFFSET(0x4FD7B0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_RECONNECTATTEMPTS_OFFSET UNITYSDK_OFFSET(0x4FD7C0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_ENCODER_OFFSET UNITYSDK_OFFSET(0x4FD7D0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_ENCODER_OFFSET UNITYSDK_OFFSET(0x4FD7E0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x4FD7F0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_NEXTACKID_OFFSET UNITYSDK_OFFSET(0x4FAF60)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x4FD8E0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x4FD8F0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_UPGRADINGTRANSPORT_OFFSET UNITYSDK_OFFSET(0x4FD900)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_UPGRADINGTRANSPORT_OFFSET UNITYSDK_OFFSET(0x4FD910)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4FD920)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4FDA80)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GETSOCKET_OFFSET UNITYSDK_OFFSET(0x4FD540)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_GETSOCKET_OFFSET UNITYSDK_OFFSET(0x4FD590)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.REMOVE_OFFSET UNITYSDK_OFFSET(0x4FDC40)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x4F9D90)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x4FDD70)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.CLOSE_OFFSET UNITYSDK_OFFSET(0x4FDF30)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.TRYTORECONNECT_OFFSET UNITYSDK_OFFSET(0x4FE410)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONTRANSPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x4FEAB0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONTRANSPORTERROR_OFFSET UNITYSDK_OFFSET(0x4FF4C0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONTRANSPORTPROBED_OFFSET UNITYSDK_OFFSET(0x4FF640)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SELECTTRANSPORT_OFFSET UNITYSDK_OFFSET(0x4FF800)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_SENDOFFLINEPACKETS_OFFSET UNITYSDK_OFFSET(0x4FF310)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.SENDPACKET_OFFSET UNITYSDK_OFFSET(0x4FF8B0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONPACKET_OFFSET UNITYSDK_OFFSET(0x4FFE10)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_EMITALL_OFFSET UNITYSDK_OFFSET(0x500530)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x5005D0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x5006C0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITERROR_OFFSET UNITYSDK_OFFSET(0x500850)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITALL_OFFSET UNITYSDK_OFFSET(0x5009C0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x500AE0)
#define BESTHTTP_SOCKETIO_SOCKETMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x501950)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int SocketManager_TypeDefinitionIndex = 21353;

	class SocketManager : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* DefaultEncoder; // 0x0
		States* state; // 0x10
		::BestHTTP::SocketIO::SocketOptions* _Options_k__BackingField; // 0x18
		::System::Uri* _Uri_k__BackingField; // 0x20
		::BestHTTP::SocketIO::HandshakeData* _Handshake_k__BackingField; // 0x28
		::BestHTTP::SocketIO::Transports::ITransport* _Transport_k__BackingField; // 0x30
		::System::UInt64 _RequestCounter_k__BackingField; // 0x38
		::System::Int32 _ReconnectAttempts_k__BackingField; // 0x40
		::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* _Encoder_k__BackingField; // 0x48
		::System::Int32 nextAckId; // 0x50
		States* _PreviousState_k__BackingField; // 0x54
		::BestHTTP::SocketIO::Transports::ITransport* _UpgradingTransport_k__BackingField; // 0x58
		Il2CppObject* Namespaces; // 0x60
		Il2CppObject* Sockets; // 0x68
		Il2CppObject* OfflinePackets; // 0x70
		::System::DateTime* LastHeartbeat; // 0x78
		::System::DateTime* ReconnectAt; // 0x80
		::System::DateTime* ConnectionStarted; // 0x88
		::System::Boolean closing; // 0x90
		::System::Boolean IsWaitingPong; // 0x91
		::System::DateTime* lastPingReceived; // 0x98

		::System::Int32 get_ProtocolVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		States* get_State()
		{
			return (return (States*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(States* arg)
		{
			((::System::Void(*)(States*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::SocketOptions* get_Options()
		{
			return (return (::BestHTTP::SocketIO::SocketOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(::BestHTTP::SocketIO::SocketOptions* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_URI_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::HandshakeData* get_Handshake()
		{
			return (return (::BestHTTP::SocketIO::HandshakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_HANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void set_Handshake(::BestHTTP::SocketIO::HandshakeData* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::HandshakeData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_HANDSHAKE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::Transports::ITransport* get_Transport()
		{
			return (return (::BestHTTP::SocketIO::Transports::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_TRANSPORT_OFFSET))(nullptr);
		}

		::System::Void set_Transport(::BestHTTP::SocketIO::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_TRANSPORT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_RequestCounter()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_REQUESTCOUNTER_OFFSET))(nullptr);
		}

		::System::Void set_RequestCounter(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_REQUESTCOUNTER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::Socket* get_Socket()
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_SOCKET_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::Socket* get_Item(::System::String* str)
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ReconnectAttempts()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_RECONNECTATTEMPTS_OFFSET))(nullptr);
		}

		::System::Void set_ReconnectAttempts(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_RECONNECTATTEMPTS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* get_Encoder()
		{
			return (return (::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_ENCODER_OFFSET))(nullptr);
		}

		::System::Void set_Encoder(::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_ENCODER_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_Timestamp()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_TIMESTAMP_OFFSET))(nullptr);
		}

		::System::Int32 get_NextAckId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_NEXTACKID_OFFSET))(nullptr);
		}

		States* get_PreviousState()
		{
			return (return (States*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_PREVIOUSSTATE_OFFSET))(nullptr);
		}

		::System::Void set_PreviousState(States* arg)
		{
			((::System::Void(*)(States*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_PREVIOUSSTATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::Transports::ITransport* get_UpgradingTransport()
		{
			return (return (::BestHTTP::SocketIO::Transports::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GET_UPGRADINGTRANSPORT_OFFSET))(nullptr);
		}

		::System::Void set_UpgradingTransport(::BestHTTP::SocketIO::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SET_UPGRADINGTRANSPORT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SocketIO::SocketOptions* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SocketIO::SocketOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SocketIO::Socket* GetSocket()
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GETSOCKET_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::Socket* GetSocket(::System::String* str)
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_GETSOCKET_OFFSET))(str, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.Remove(::BestHTTP::SocketIO::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.TryToReconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.TRYTORECONNECT_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.SocketIO.IManager.OnTransportConnected(::BestHTTP::SocketIO::Transports::ITransport* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONTRANSPORTCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.OnTransportError(::BestHTTP::SocketIO::Transports::ITransport* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONTRANSPORTERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.OnTransportProbed(::BestHTTP::SocketIO::Transports::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Transports::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONTRANSPORTPROBED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::Transports::ITransport* SelectTransport()
		{
			return (return (::BestHTTP::SocketIO::Transports::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SELECTTRANSPORT_OFFSET))(nullptr);
		}

		::System::Void SendOfflinePackets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_SENDOFFLINEPACKETS_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.SendPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.SENDPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.OnPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void EmitAll(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_EMITALL_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.EmitEvent(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.EmitError(::BestHTTP::SocketIO::SocketIOErrors* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOErrors*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void BestHTTP.SocketIO.IManager.EmitAll(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.SOCKETIO.IMANAGER.EMITALL_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKETMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

