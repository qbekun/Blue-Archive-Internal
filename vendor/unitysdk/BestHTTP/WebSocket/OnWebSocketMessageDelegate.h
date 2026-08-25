#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }

#define BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4ECA50)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4ECA60)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4ECA70)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ECAB0)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int OnWebSocketMessageDelegate_TypeDefinitionIndex = 21325;

	class OnWebSocketMessageDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETMESSAGEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

