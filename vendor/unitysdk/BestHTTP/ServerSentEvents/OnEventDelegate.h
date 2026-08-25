#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }
namespace BestHTTP::ServerSentEvents { class Message; }

#define BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x7572F0)
#define BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757300)
#define BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x757310)
#define BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x757350)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnEventDelegate_TypeDefinitionIndex = 21522;

	class OnEventDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::Message* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::Message* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::Message*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONEVENTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

