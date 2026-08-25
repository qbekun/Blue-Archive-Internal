#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }
namespace BestHTTP::ServerSentEvents { class States; }

#define BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x757460)
#define BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x757500)
#define BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757610)
#define BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x757620)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnStateChangedDelegate_TypeDefinitionIndex = 21523;

	class OnStateChangedDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::States* arg, ::BestHTTP::ServerSentEvents::States* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::States*, ::BestHTTP::ServerSentEvents::States*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::States* arg, ::BestHTTP::ServerSentEvents::States* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::States*, ::BestHTTP::ServerSentEvents::States*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONSTATECHANGEDDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

