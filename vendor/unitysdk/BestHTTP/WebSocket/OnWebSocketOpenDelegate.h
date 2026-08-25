#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }

#define BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4EC930)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4EC940)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4EC970)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4EC980)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int OnWebSocketOpenDelegate_TypeDefinitionIndex = 21324;

	class OnWebSocketOpenDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::WebSocket::WebSocket*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETOPENDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

