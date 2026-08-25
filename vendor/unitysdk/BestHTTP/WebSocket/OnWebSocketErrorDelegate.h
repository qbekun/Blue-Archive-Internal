#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }

#define BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4ECE40)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4ECE50)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4ECE60)
#define BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ECEA0)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int OnWebSocketErrorDelegate_TypeDefinitionIndex = 21328;

	class OnWebSocketErrorDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_ONWEBSOCKETERRORDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

