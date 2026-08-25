#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class Hub; }
namespace BestHTTP::SignalR::Hubs { class OnMethodResultDelegate; }
namespace BestHTTP::SignalR::Hubs { class OnMethodFailedDelegate; }
namespace BestHTTP::SignalR::Hubs { class OnMethodProgressDelegate; }

#define BESTHTTP_SIGNALR_MESSAGES_CLIENTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x752290)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int ClientMessage_TypeDefinitionIndex = 21495;

	class ClientMessage : public Il2CppObject
	{
	public:
		::BestHTTP::SignalR::Hubs::Hub* Hub; // 0x10
		::System::String* Method; // 0x18
		::Il2CppArray<::System::Object*>* Args; // 0x20
		::System::UInt64 CallIdx; // 0x28
		::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* ResultCallback; // 0x30
		::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* ResultErrorCallback; // 0x38
		::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* ProgressCallback; // 0x40

		::System::Void .ctor(::BestHTTP::SignalR::Hubs::Hub* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::UInt64 arg, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* arg, ::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* arg, ::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::Hub*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::UInt64, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate*, ::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate*, ::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_CLIENTMESSAGE_.CTOR_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

