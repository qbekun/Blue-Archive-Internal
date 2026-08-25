#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class Hub; }
namespace BestHTTP::SignalR::Messages { class ClientMessage; }
namespace BestHTTP::SignalR::Messages { class ResultMessage; }

#define BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x754490)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7544E0)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x7545F0)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x754600)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int OnMethodResultDelegate_TypeDefinitionIndex = 21509;

	class OnMethodResultDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::ClientMessage* arg, ::BestHTTP::SignalR::Messages::ResultMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::ClientMessage*, ::BestHTTP::SignalR::Messages::ResultMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::ClientMessage* arg, ::BestHTTP::SignalR::Messages::ResultMessage* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::ClientMessage*, ::BestHTTP::SignalR::Messages::ResultMessage*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODRESULTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

