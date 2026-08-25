#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class Connection; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SignalR { class RequestTypes; }

#define BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x655F00)
#define BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x655F10)
#define BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x655F30)
#define BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x656000)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int OnPrepareRequestDelegate_TypeDefinitionIndex = 21478;

	class OnPrepareRequestDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Connection* arg, ::BestHTTP::HTTPRequest* arg, ::BestHTTP::SignalR::RequestTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::BestHTTP::HTTPRequest*, ::BestHTTP::SignalR::RequestTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Connection* arg, ::BestHTTP::HTTPRequest* arg, ::BestHTTP::SignalR::RequestTypes* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Connection*, ::BestHTTP::HTTPRequest*, ::BestHTTP::SignalR::RequestTypes*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONPREPAREREQUESTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

