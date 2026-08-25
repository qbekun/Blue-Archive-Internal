#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Transports { class TransportBase; }
namespace BestHTTP::SignalR { class TransportStates; }

#define BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74F820)
#define BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x74F930)
#define BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x74F940)
#define BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x74F9E0)

namespace BestHTTP::SignalR::Transports
{
	inline static constexpr unsigned int OnTransportStateChangedDelegate_TypeDefinitionIndex = 21492;

	class OnTransportStateChangedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Transports::TransportBase* arg, ::BestHTTP::SignalR::TransportStates* arg, ::BestHTTP::SignalR::TransportStates* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Transports::TransportBase*, ::BestHTTP::SignalR::TransportStates*, ::BestHTTP::SignalR::TransportStates*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Transports::TransportBase* arg, ::BestHTTP::SignalR::TransportStates* arg, ::BestHTTP::SignalR::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Transports::TransportBase*, ::BestHTTP::SignalR::TransportStates*, ::BestHTTP::SignalR::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_ONTRANSPORTSTATECHANGEDDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

