#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class Connection; }
namespace BestHTTP::SignalR { class ConnectionStates; }

#define BESTHTTP_SIGNALR_ONSTATECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x655D60)
#define BESTHTTP_SIGNALR_ONSTATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x655E00)
#define BESTHTTP_SIGNALR_ONSTATECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x655E20)
#define BESTHTTP_SIGNALR_ONSTATECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x655EF0)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int OnStateChanged_TypeDefinitionIndex = 21477;

	class OnStateChanged : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Connection* arg, ::BestHTTP::SignalR::ConnectionStates* arg, ::BestHTTP::SignalR::ConnectionStates* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Connection*, ::BestHTTP::SignalR::ConnectionStates*, ::BestHTTP::SignalR::ConnectionStates*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONSTATECHANGED_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Connection* arg, ::BestHTTP::SignalR::ConnectionStates* arg, ::BestHTTP::SignalR::ConnectionStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::BestHTTP::SignalR::ConnectionStates*, ::BestHTTP::SignalR::ConnectionStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONSTATECHANGED_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONSTATECHANGED_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONSTATECHANGED_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

