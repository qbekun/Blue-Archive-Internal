#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }

#define BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757220)
#define BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x757230)
#define BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74E6A0)
#define BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x757240)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnErrorDelegate_TypeDefinitionIndex = 21520;

	class OnErrorDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONERRORDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

