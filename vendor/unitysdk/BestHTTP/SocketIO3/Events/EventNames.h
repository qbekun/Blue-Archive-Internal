#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO3 { class TransportEventTypes; }

#define BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET UNITYSDK_OFFSET(0x642F70)
#define BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET UNITYSDK_OFFSET(0x643000)
#define BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_ISBLACKLISTED_OFFSET UNITYSDK_OFFSET(0x643090)
#define BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x643160)

namespace BestHTTP::SocketIO3::Events
{
	inline static constexpr unsigned int EventNames_TypeDefinitionIndex = 21412;

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

		::System::String* GetNameFor(::BestHTTP::SocketIO3::SocketIOEventTypes* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetNameFor(::BestHTTP::SocketIO3::TransportEventTypes* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SocketIO3::TransportEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_GETNAMEFOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBlacklisted(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_ISBLACKLISTED_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_EVENTNAMES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

