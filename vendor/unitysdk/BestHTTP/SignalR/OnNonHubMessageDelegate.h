#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x6558C0)
#define BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x655900)
#define BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x6559D0)
#define BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x6559E0)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int OnNonHubMessageDelegate_TypeDefinitionIndex = 21473;

	class OnNonHubMessageDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Connection* arg, ::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Connection*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Connection* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONNONHUBMESSAGEDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

