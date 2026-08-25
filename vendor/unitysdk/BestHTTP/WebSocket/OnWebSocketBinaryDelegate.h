#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }

#define BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4ECB80)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4ECB90)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ECBD0)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4ECCA0)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int OnWebSocketBinaryDelegate_TypeDefinitionIndex = 21326;

	class OnWebSocketBinaryDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::WebSocket::WebSocket* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::WebSocket::WebSocket*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::WebSocket::WebSocket* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETBINARYDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

