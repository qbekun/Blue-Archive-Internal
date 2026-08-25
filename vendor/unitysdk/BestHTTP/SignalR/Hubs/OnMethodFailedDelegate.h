#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class Hub; }
namespace BestHTTP::SignalR::Messages { class ClientMessage; }
namespace BestHTTP::SignalR::Messages { class FailureMessage; }

#define BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x754690)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x754720)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x754770)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x754780)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int OnMethodFailedDelegate_TypeDefinitionIndex = 21510;

	class OnMethodFailedDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::ClientMessage* arg, ::BestHTTP::SignalR::Messages::FailureMessage* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::ClientMessage*, ::BestHTTP::SignalR::Messages::FailureMessage*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::ClientMessage* arg, ::BestHTTP::SignalR::Messages::FailureMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::ClientMessage*, ::BestHTTP::SignalR::Messages::FailureMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODFAILEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

