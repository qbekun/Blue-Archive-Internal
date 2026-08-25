#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }

#define BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x509F50)
#define BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x50A020)
#define BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x50A070)
#define BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x50A080)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int SocketIOAckCallback_TypeDefinitionIndex = 21380;

	class SocketIOAckCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::IncomingPacket*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::IncomingPacket*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOACKCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

