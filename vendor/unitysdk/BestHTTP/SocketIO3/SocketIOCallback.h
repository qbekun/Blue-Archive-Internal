#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3 { class IncomingPacket; }

#define BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x509D90)
#define BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x509E20)
#define BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x509E30)
#define BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x509E80)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int SocketIOCallback_TypeDefinitionIndex = 21379;

	class SocketIOCallback : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::IncomingPacket*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::IncomingPacket*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETIOCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

