#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class PluginEventInfo; }

#define BESTHTTP_CORE_PLUGINEVENTHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8F1460)
#define BESTHTTP_CORE_PLUGINEVENTHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F14F0)
#define BESTHTTP_CORE_PLUGINEVENTHELPER_ENQUEUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x8F1580)
#define BESTHTTP_CORE_PLUGINEVENTHELPER_PROCESSQUEUE_OFFSET UNITYSDK_OFFSET(0x8F1620)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int PluginEventHelper_TypeDefinitionIndex = 23404;

	class PluginEventHelper : public Il2CppObject
	{
	public:
		Il2CppObject* pluginEvents; // 0x0
		Il2CppObject* OnEvent; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTHELPER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void EnqueuePluginEvent(::BestHTTP::Core::PluginEventInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::PluginEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTHELPER_ENQUEUEPLUGINEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTHELPER_PROCESSQUEUE_OFFSET))(nullptr);
		}

	};
}

