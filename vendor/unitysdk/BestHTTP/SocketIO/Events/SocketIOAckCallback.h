#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO { class Packet; }

#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x507EB0)
#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x507EF0)
#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x507F10)
#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x507F20)

namespace BestHTTP::SocketIO::Events
{
	inline static constexpr unsigned int SocketIOAckCallback_TypeDefinitionIndex = 21366;

	class SocketIOAckCallback : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SocketIO::Socket* arg, ::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SocketIO::Socket*, ::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SocketIO::Socket* arg, ::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOACKCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

