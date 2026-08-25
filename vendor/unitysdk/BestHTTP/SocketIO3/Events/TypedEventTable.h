#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3::Events { class Subscription; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }

#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x643E10)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_SET_SOCKET_OFFSET UNITYSDK_OFFSET(0x643E20)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x643E30)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_GETSUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x643F80)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_REGISTER_OFFSET UNITYSDK_OFFSET(0x643FE0)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_CALL_OFFSET UNITYSDK_OFFSET(0x6440D0)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_CALL_OFFSET UNITYSDK_OFFSET(0x644390)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x644510)
#define BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x644560)

namespace BestHTTP::SocketIO3::Events
{
	inline static constexpr unsigned int TypedEventTable_TypeDefinitionIndex = 21416;

	class TypedEventTable : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::Socket* _Socket_k__BackingField; // 0x10
		Il2CppObject* subscriptions; // 0x18

		::BestHTTP::SocketIO3::Socket* get_Socket()
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_GET_SOCKET_OFFSET))(nullptr);
		}

		::System::Void set_Socket(::BestHTTP::SocketIO3::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_SET_SOCKET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO3::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::Events::Subscription* GetSubscription(::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::Events::Subscription*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_GETSUBSCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void Register(::System::String* str, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_REGISTER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Call(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_CALL_OFFSET))(str, arg, nullptr);
		}

		::System::Void Call(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_CALL_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_UNREGISTER_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_TYPEDEVENTTABLE_CLEAR_OFFSET))(nullptr);
		}

	};
}

