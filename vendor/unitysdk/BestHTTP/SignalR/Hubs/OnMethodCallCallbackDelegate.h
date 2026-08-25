#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class Hub; }
namespace BestHTTP::SignalR::Messages { class MethodCallMessage; }

#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x754320)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x754330)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x754370)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x754380)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int OnMethodCallCallbackDelegate_TypeDefinitionIndex = 21508;

	class OnMethodCallCallbackDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::MethodCallMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::MethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::BestHTTP::SignalR::Messages::MethodCallMessage* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Hubs::Hub*, ::BestHTTP::SignalR::Messages::MethodCallMessage*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLCALLBACKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

