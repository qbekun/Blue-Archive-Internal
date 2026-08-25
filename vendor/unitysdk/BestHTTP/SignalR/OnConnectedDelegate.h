#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x6559F0)
#define BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x655A00)
#define BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x655A30)
#define BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x655B00)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int OnConnectedDelegate_TypeDefinitionIndex = 21474;

	class OnConnectedDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Connection* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Connection*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCONNECTEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

