#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class ConnectionEventInfo; }

#define BESTHTTP_CORE_CONNECTIONEVENTHELPER_ENQUEUECONNECTIONEVENT_OFFSET UNITYSDK_OFFSET(0x8EBCE0)
#define BESTHTTP_CORE_CONNECTIONEVENTHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8EBD90)
#define BESTHTTP_CORE_CONNECTIONEVENTHELPER_PROCESSQUEUE_OFFSET UNITYSDK_OFFSET(0x8EBE20)
#define BESTHTTP_CORE_CONNECTIONEVENTHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8ECB20)
#define BESTHTTP_CORE_CONNECTIONEVENTHELPER_HANDLECONNECTIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x8EC390)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int ConnectionEventHelper_TypeDefinitionIndex = 23394;

	class ConnectionEventHelper : public Il2CppObject
	{
	public:
		Il2CppObject* connectionEventQueue; // 0x0
		Il2CppObject* OnEvent; // 0x8

		::System::Void EnqueueConnectionEvent(::BestHTTP::Core::ConnectionEventInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::ConnectionEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTHELPER_ENQUEUECONNECTIONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTHELPER_PROCESSQUEUE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTHELPER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void HandleConnectionStateChange(::BestHTTP::Core::ConnectionEventInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::ConnectionEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTHELPER_HANDLECONNECTIONSTATECHANGE_OFFSET))(arg, nullptr);
		}

	};
}

