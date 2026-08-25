#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class Hub; }

#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7541A0)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x7542B0)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x7542C0)
#define BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x7542E0)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int OnMethodCallDelegate_TypeDefinitionIndex = 21507;

	class OnMethodCallDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::Hub*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_INVOKE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Hubs::Hub* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Hubs::Hub*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_ONMETHODCALLDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

	};
}

