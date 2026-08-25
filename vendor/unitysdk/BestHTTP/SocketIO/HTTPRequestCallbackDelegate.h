#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class SocketManager; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x5019E0)
#define BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x501A20)
#define BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x501A30)
#define BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x501A40)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int HTTPRequestCallbackDelegate_TypeDefinitionIndex = 21354;

	class HTTPRequestCallbackDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SocketIO::SocketManager* arg, ::BestHTTP::HTTPRequest* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SocketIO::SocketManager*, ::BestHTTP::HTTPRequest*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SocketIO::SocketManager* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketManager*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HTTPREQUESTCALLBACKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

