#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SocketIO3::Events { class TypedEventTable; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3::Events { class ConnectResponse; }
namespace BestHTTP::SocketIO3 { class EmitBuilder; }
namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO3::Events { class Subscription; }

#define BESTHTTP_SOCKETIO3_SOCKET_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x50A5F0)
#define BESTHTTP_SOCKETIO3_SOCKET_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x50A600)
#define BESTHTTP_SOCKETIO3_SOCKET_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x50A610)
#define BESTHTTP_SOCKETIO3_SOCKET_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x50A620)
#define BESTHTTP_SOCKETIO3_SOCKET_GET_ID_OFFSET UNITYSDK_OFFSET(0x50A630)
#define BESTHTTP_SOCKETIO3_SOCKET_SET_ID_OFFSET UNITYSDK_OFFSET(0x50A640)
#define BESTHTTP_SOCKETIO3_SOCKET_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x50A650)
#define BESTHTTP_SOCKETIO3_SOCKET_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x50A660)
#define BESTHTTP_SOCKETIO3_SOCKET_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x50A670)
#define BESTHTTP_SOCKETIO3_SOCKET_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x50A680)
#define BESTHTTP_SOCKETIO3_SOCKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x50A690)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x50A890)
#define BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.OPEN_OFFSET UNITYSDK_OFFSET(0x50A8C0)
#define BESTHTTP_SOCKETIO3_SOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x50B3E0)
#define BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.DISCONNECT_OFFSET UNITYSDK_OFFSET(0x50B480)
#define BESTHTTP_SOCKETIO3_SOCKET_VOLATILE_OFFSET UNITYSDK_OFFSET(0x50B7F0)
#define BESTHTTP_SOCKETIO3_SOCKET_EXPECTACKNOWLEDGEMENT_OFFSET UNITYSDK_OFFSET(0x50B850)
#define BESTHTTP_SOCKETIO3_SOCKET_EXPECTACKNOWLEDGEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_EMIT_OFFSET UNITYSDK_OFFSET(0x50B8D0)
#define BESTHTTP_SOCKETIO3_SOCKET_EMITACK_OFFSET UNITYSDK_OFFSET(0x50B950)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x50BCF0)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x50BE10)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x50BF00)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x50BFF0)
#define BESTHTTP_SOCKETIO3_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x50C010)
#define BESTHTTP_SOCKETIO3_SOCKET_OFF_OFFSET UNITYSDK_OFFSET(0x50C030)
#define BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.ONPACKET_OFFSET UNITYSDK_OFFSET(0x50C0A0)
#define BESTHTTP_SOCKETIO3_SOCKET_GETSUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x50C3B0)
#define BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x50C3D0)
#define BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.EMITEVENT_OFFSET UNITYSDK_OFFSET(0x50C4A0)
#define BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.EMITERROR_OFFSET UNITYSDK_OFFSET(0x50C4F0)
#define BESTHTTP_SOCKETIO3_SOCKET_ONTRANSPORTOPEN_OFFSET UNITYSDK_OFFSET(0x50AA50)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int Socket_TypeDefinitionIndex = 21398;

	class Socket : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::SocketManager* _Manager_k__BackingField; // 0x10
		::System::String* _Namespace_k__BackingField; // 0x18
		::System::String* _Id_k__BackingField; // 0x20
		::System::Boolean _IsOpen_k__BackingField; // 0x28
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x30
		::BestHTTP::SocketIO3::Events::TypedEventTable* TypedEventTable; // 0x38
		::BestHTTP::SocketIO3::IncomingPacket* currentPacket; // 0x40

		::BestHTTP::SocketIO3::SocketManager* get_Manager()
		{
			return (return (::BestHTTP::SocketIO3::SocketManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Manager(::BestHTTP::SocketIO3::SocketManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_SET_MANAGER_OFFSET))(arg, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SocketIO3::SocketManager* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO3::SocketManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnConnected(::BestHTTP::SocketIO3::Events::ConnectResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Events::ConnectResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.ISocket.Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.OPEN_OFFSET))(nullptr);
		}

		::System::Void Disconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_DISCONNECT_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SocketIO3.ISocket.Disconnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.DISCONNECT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::EmitBuilder* Volatile()
		{
			return (return (::BestHTTP::SocketIO3::EmitBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_VOLATILE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::EmitBuilder* ExpectAcknowledgement(::System::Action* arg)
		{
			return (return (::BestHTTP::SocketIO3::EmitBuilder*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_EXPECTACKNOWLEDGEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::EmitBuilder* ExpectAcknowledgement(Il2CppObject* arg)
		{
			return (return (::BestHTTP::SocketIO3::EmitBuilder*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_EXPECTACKNOWLEDGEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Socket* Emit(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_EMIT_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SocketIO3::Socket* EmitAck(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_EMITACK_OFFSET))(arg, nullptr);
		}

		::System::Void On(::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void On(::BestHTTP::SocketIO3::SocketIOEventTypes* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void On(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Once(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Off()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_OFF_OFFSET))(nullptr);
		}

		::System::Void Off(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_OFF_OFFSET))(str, nullptr);
		}

		::System::Void Off(::BestHTTP::SocketIO3::SocketIOEventTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_OFF_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.ISocket.OnPacket(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.ONPACKET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Events::Subscription* GetSubscription(::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::Events::Subscription*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_GETSUBSCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.ISocket.EmitEvent(::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.EMITEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.ISocket.EmitEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.EMITEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void BestHTTP.SocketIO3.ISocket.EmitError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_BESTHTTP.SOCKETIO3.ISOCKET.EMITERROR_OFFSET))(str, nullptr);
		}

		::System::Void OnTransportOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKET_ONTRANSPORTOPEN_OFFSET))(nullptr);
		}

	};
}

