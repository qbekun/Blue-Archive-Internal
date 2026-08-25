#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }

#define BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x757280)
#define BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757290)
#define BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74E8F0)
#define BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x7572C0)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnRetryDelegate_TypeDefinitionIndex = 21521;

	class OnRetryDelegate : public Il2CppObject
	{
	public:
		::System::Boolean Invoke(::BestHTTP::ServerSentEvents::EventSource* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::ServerSentEvents::EventSource*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONRETRYDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

