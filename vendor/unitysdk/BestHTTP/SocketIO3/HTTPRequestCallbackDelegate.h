#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x63A670)
#define BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x63A740)
#define BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x63A750)
#define BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x63A760)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int HTTPRequestCallbackDelegate_TypeDefinitionIndex = 21401;

	class HTTPRequestCallbackDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::HTTPRequest* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::HTTPRequest*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HTTPREQUESTCALLBACKDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

