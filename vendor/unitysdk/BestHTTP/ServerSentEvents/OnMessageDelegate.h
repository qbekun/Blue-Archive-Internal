#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }
namespace BestHTTP::ServerSentEvents { class Message; }

#define BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74E4F0)
#define BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x7571C0)
#define BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x7571D0)
#define BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x7571E0)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnMessageDelegate_TypeDefinitionIndex = 21519;

	class OnMessageDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::Message* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::Message* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::Message*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONMESSAGEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

