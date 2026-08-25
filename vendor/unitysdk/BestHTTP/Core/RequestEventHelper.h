#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class RequestEventInfo; }

#define BESTHTTP_CORE_REQUESTEVENTHELPER_HANDLEREQUESTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x8F2C30)
#define BESTHTTP_CORE_REQUESTEVENTHELPER_ABORTREQUESTWHENTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x8F38B0)
#define BESTHTTP_CORE_REQUESTEVENTHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8F3A90)
#define BESTHTTP_CORE_REQUESTEVENTHELPER_ENQUEUEREQUESTEVENT_OFFSET UNITYSDK_OFFSET(0x8ED000)
#define BESTHTTP_CORE_REQUESTEVENTHELPER_PROCESSQUEUE_OFFSET UNITYSDK_OFFSET(0x8F3B20)
#define BESTHTTP_CORE_REQUESTEVENTHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F4B80)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int RequestEventHelper_TypeDefinitionIndex = 23412;

	class RequestEventHelper : public Il2CppObject
	{
	public:
		Il2CppObject* requestEventQueue; // 0x0
		Il2CppObject* OnEvent; // 0x8

		::System::Void HandleRequestStateChange(::BestHTTP::Core::RequestEventInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::RequestEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTHELPER_HANDLEREQUESTSTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AbortRequestWhenTimedOut(::System::DateTime* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTHELPER_ABORTREQUESTWHENTIMEDOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void EnqueueRequestEvent(::BestHTTP::Core::RequestEventInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::RequestEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTHELPER_ENQUEUEREQUESTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTHELPER_PROCESSQUEUE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTHELPER_CLEAR_OFFSET))(nullptr);
		}

	};
}

