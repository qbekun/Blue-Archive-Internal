#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO { class Packet; }

#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x507D70)
#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x507E40)
#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x507E50)
#define BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x507E90)

namespace BestHTTP::SocketIO::Events
{
	inline static constexpr unsigned int SocketIOCallback_TypeDefinitionIndex = 21365;

	class SocketIOCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SocketIO::Socket* arg, ::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SocketIO::Socket*, ::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SocketIO::Socket* arg, ::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_SOCKETIOCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

