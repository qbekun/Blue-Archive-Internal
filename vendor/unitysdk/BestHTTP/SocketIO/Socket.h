#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class SocketManager; }
namespace BestHTTP::SocketIO::Events { class EventTable; }
namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO::Events { class SocketIOAckCallback; }
namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO::Events { class SocketIOCallback; }
namespace BestHTTP::SocketIO { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO { class SocketIOErrors; }

#define BESTHTTP_SOCKETIO_SOCKET_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x4F95D0)
#define BESTHTTP_SOCKETIO_SOCKET_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x4F95E0)
#define BESTHTTP_SOCKETIO_SOCKET_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x4F95F0)
#define BESTHTTP_SOCKETIO_SOCKET_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x4F9600)
#define BESTHTTP_SOCKETIO_SOCKET_GET_ID_OFFSET UNITYSDK_OFFSET(0x4F9610)
#define BESTHTTP_SOCKETIO_SOCKET_SET_ID_OFFSET UNITYSDK_OFFSET(0x4F9620)
#define BESTHTTP_SOCKETIO_SOCKET_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x4F9630)
#define BESTHTTP_SOCKETIO_SOCKET_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x4F9640)
#define BESTHTTP_SOCKETIO_SOCKET_GET_AUTODECODEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x4F9650)
#define BESTHTTP_SOCKETIO_SOCKET_SET_AUTODECODEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x4F9660)
#define BESTHTTP_SOCKETIO_SOCKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F9670)
#define BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.OPEN_OFFSET UNITYSDK_OFFSET(0x4F9800)
#define BESTHTTP_SOCKETIO_SOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x4FA180)
#define BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.DISCONNECT_OFFSET UNITYSDK_OFFSET(0x4FA220)
#define BESTHTTP_SOCKETIO_SOCKET_EMIT_OFFSET UNITYSDK_OFFSET(0x4FA510)
#define BESTHTTP_SOCKETIO_SOCKET_EMIT_OFFSET UNITYSDK_OFFSET(0x4FA530)
#define BESTHTTP_SOCKETIO_SOCKET_EMITACK_OFFSET UNITYSDK_OFFSET(0x4FAF70)
#define BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x4FB3F0)
#define BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x4FB700)
#define BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x4FB8A0)
#define BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x4FB8D0)
#define BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x4FB9E0)
#define BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x4FBA10)
#define BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x4FBB20)
#define BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x4FBB50)
#define BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x4FBC60)
#define BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x4FBCB0)
#define BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x4FBD60)
#define BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x4FBE80)
#define BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x4FBF80)
#define BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.ONPACKET_OFFSET UNITYSDK_OFFSET(0x4FC080)
#define BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x4FD0C0)
#define BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x4FD250)
#define BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.EMITERROR_OFFSET UNITYSDK_OFFSET(0x4FD2A0)
#define BESTHTTP_SOCKETIO_SOCKET_ONTRANSPORTOPEN_OFFSET UNITYSDK_OFFSET(0x4F9980)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int Socket_TypeDefinitionIndex = 21351;

	class Socket : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::SocketManager* _Manager_k__BackingField; // 0x10
		::System::String* _Namespace_k__BackingField; // 0x18
		::System::String* _Id_k__BackingField; // 0x20
		::System::Boolean _IsOpen_k__BackingField; // 0x28
		::System::Boolean _AutoDecodePayload_k__BackingField; // 0x29
		Il2CppObject* AckCallbacks; // 0x30
		::BestHTTP::SocketIO::Events::EventTable* EventCallbacks; // 0x38
		Il2CppObject* arguments; // 0x40

		::BestHTTP::SocketIO::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Manager(::BestHTTP::SocketIO::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_SET_MANAGER_OFFSET))(arg, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AutoDecodePayload()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_GET_AUTODECODEPAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_AutoDecodePayload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_SET_AUTODECODEPAYLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SocketIO::SocketManager* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.ISocket.Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.OPEN_OFFSET))(nullptr);
		}

		::System::Void Disconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_DISCONNECT_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SocketIO.ISocket.Disconnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.DISCONNECT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::Socket* Emit(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_EMIT_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SocketIO::Socket* Emit(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOAckCallback* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOAckCallback*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_EMIT_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SocketIO::Socket* EmitAck(::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_EMITACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void On(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void On(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void On(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Once(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Once(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Once(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ONCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Off()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET))(nullptr);
		}

		::System::Void Off(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET))(str, nullptr);
		}

		::System::Void Off(::BestHTTP::SocketIO::SocketIOEventTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET))(arg, nullptr);
		}

		::System::Void Off(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET))(str, arg, nullptr);
		}

		::System::Void Off(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_OFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.ISocket.OnPacket(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.ONPACKET_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.ISocket.EmitEvent(::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.ISocket.EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO.ISocket.EmitError(::BestHTTP::SocketIO::SocketIOErrors* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOErrors*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_BESTHTTP.SOCKETIO.ISOCKET.EMITERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnTransportOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_SOCKET_ONTRANSPORTOPEN_OFFSET))(nullptr);
		}

	};
}

