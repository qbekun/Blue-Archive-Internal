#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO { class TransportEventTypes; }

#define BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET UNITYSDK_OFFSET(0x4FB810)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET UNITYSDK_OFFSET(0x508570)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_ISBLACKLISTED_OFFSET UNITYSDK_OFFSET(0x4FAE90)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x508600)

namespace BestHTTP::SocketIO::Events
{
	inline static constexpr unsigned int EventNames_TypeDefinitionIndex = 21368;

	class EventNames : public Il2CppObject
	{
	public:
		::System::String* Connect; // 0x0
		::System::String* Disconnect; // 0x0
		::System::String* Event; // 0x0
		::System::String* Ack; // 0x0
		::System::String* Error; // 0x0
		::System::String* BinaryEvent; // 0x0
		::System::String* BinaryAck; // 0x0
		::Il2CppArray<::System::Object*>* SocketIONames; // 0x0
		::Il2CppArray<::System::Object*>* TransportNames; // 0x8
		::Il2CppArray<::System::Object*>* BlacklistedEvents; // 0x10

		::System::String* GetNameFor(::BestHTTP::SocketIO::SocketIOEventTypes* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetNameFor(::BestHTTP::SocketIO::TransportEventTypes* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SocketIO::TransportEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBlacklisted(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_ISBLACKLISTED_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTNAMES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

