#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_ONERRORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x655C30)
#define BESTHTTP_SIGNALR_ONERRORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x655C70)
#define BESTHTTP_SIGNALR_ONERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x655C80)
#define BESTHTTP_SIGNALR_ONERRORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x655C90)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int OnErrorDelegate_TypeDefinitionIndex = 21476;

	class OnErrorDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Connection* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Connection*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONERRORDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONERRORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Connection* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONERRORDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONERRORDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

