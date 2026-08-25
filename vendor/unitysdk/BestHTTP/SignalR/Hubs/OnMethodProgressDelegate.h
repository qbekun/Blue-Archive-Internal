#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class Hub; }
namespace BestHTTP::SignalR::Messages { class ClientMessage; }
namespace BestHTTP::SignalR::Messages { class ProgressMessage; }

#define BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x754890)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x7549A0)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x754A30)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x754A80)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int OnMethodProgressDelegate_TypeDefinitionIndex = 21511;

	class OnMethodProgressDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::ClientMessage* arg, ::BestHTTP::SignalR::Messages::ProgressMessage* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::ClientMessage*, ::BestHTTP::SignalR::Messages::ProgressMessage*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::ClientMessage* arg, ::BestHTTP::SignalR::Messages::ProgressMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::ClientMessage*, ::BestHTTP::SignalR::Messages::ProgressMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODPROGRESSDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

