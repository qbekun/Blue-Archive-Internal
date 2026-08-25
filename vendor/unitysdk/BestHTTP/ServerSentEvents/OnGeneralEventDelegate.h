#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }

#define BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x757170)
#define BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757180)
#define BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74E340)
#define BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x757190)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnGeneralEventDelegate_TypeDefinitionIndex = 21518;

	class OnGeneralEventDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::ServerSentEvents::EventSource* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONGENERALEVENTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

