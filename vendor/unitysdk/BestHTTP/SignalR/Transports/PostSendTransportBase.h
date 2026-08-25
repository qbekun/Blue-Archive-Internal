#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_TRANSPORTS_POSTSENDTRANSPORTBASE_SENDIMPL_OFFSET UNITYSDK_OFFSET(0x74CD80)
#define BESTHTTP_SIGNALR_TRANSPORTS_POSTSENDTRANSPORTBASE_ONSENDREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x74CFF0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POSTSENDTRANSPORTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74C4C0)

namespace BestHTTP::SignalR::Transports
{
	inline static constexpr unsigned int PostSendTransportBase_TypeDefinitionIndex = 21489;

	class PostSendTransportBase : public Il2CppObject
	{
	public:
		Il2CppObject* sendRequestQueue; // 0x30

		::System::Void SendImpl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POSTSENDTRANSPORTBASE_SENDIMPL_OFFSET))(str, nullptr);
		}

		::System::Void OnSendRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POSTSENDTRANSPORTBASE_ONSENDREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POSTSENDTRANSPORTBASE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

