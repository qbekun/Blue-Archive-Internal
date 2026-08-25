#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::WebSocket::Frames { class WebSocketFrameReader; }

#define BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4ECF70)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4ECFF0)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ED000)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4ED0D0)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int OnWebSocketIncompleteFrameDelegate_TypeDefinitionIndex = 21329;

	class OnWebSocketIncompleteFrameDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::WebSocket::WebSocket* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameReader* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::WebSocket::WebSocket*, ::BestHTTP::WebSocket::Frames::WebSocketFrameReader*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::WebSocket::WebSocket* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameReader* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::BestHTTP::WebSocket::Frames::WebSocketFrameReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETINCOMPLETEFRAMEDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

