#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO::Events { class SocketIOCallback; }
namespace BestHTTP::SocketIO { class Packet; }

#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x508FF0)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_SET_SOCKET_OFFSET UNITYSDK_OFFSET(0x509000)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F9760)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_REGISTER_OFFSET UNITYSDK_OFFSET(0x4FB420)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x4FBD10)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x4FBEA0)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_CALL_OFFSET UNITYSDK_OFFSET(0x4FC9C0)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_CALL_OFFSET UNITYSDK_OFFSET(0x4FCDB0)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x4FA4C0)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_SHOULDDECODEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x509070)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_HASSUBSCIBER_OFFSET UNITYSDK_OFFSET(0x509020)

namespace BestHTTP::SocketIO::Events
{
	inline static constexpr unsigned int EventTable_TypeDefinitionIndex = 21370;

	class EventTable : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::Socket* _Socket_k__BackingField; // 0x10
		Il2CppObject* Table; // 0x18

		::BestHTTP::SocketIO::Socket* get_Socket()
		{
			return (return (::BestHTTP::SocketIO::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_GET_SOCKET_OFFSET))(nullptr);
		}

		::System::Void set_Socket(::BestHTTP::SocketIO::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_SET_SOCKET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_REGISTER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Unregister(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_UNREGISTER_OFFSET))(str, nullptr);
		}

		::System::Void Unregister(::System::String* str, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_UNREGISTER_OFFSET))(str, arg, nullptr);
		}

		::System::Void Call(::System::String* str, ::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_CALL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Call(::BestHTTP::SocketIO::Packet* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Packet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_CALL_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldDecodePayload(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_SHOULDDECODEPAYLOAD_OFFSET))(str, nullptr);
		}

		::System::Boolean HasSubsciber(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTTABLE_HASSUBSCIBER_OFFSET))(str, nullptr);
		}

	};
}

