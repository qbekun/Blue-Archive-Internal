#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }

#define BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x757640)
#define BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757650)
#define BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x757660)
#define BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x757770)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int OnCommentDelegate_TypeDefinitionIndex = 21524;

	class OnCommentDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_ONCOMMENTDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

