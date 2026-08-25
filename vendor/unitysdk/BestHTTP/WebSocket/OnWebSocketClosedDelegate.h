#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }

#define BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4ECCB0)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ECCD0)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4ECDA0)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4ECDB0)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int OnWebSocketClosedDelegate_TypeDefinitionIndex = 21327;

	class OnWebSocketClosedDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_INVOKE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::UInt16 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::WebSocket::WebSocket*, ::System::UInt16, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETCLOSEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

	};
}

