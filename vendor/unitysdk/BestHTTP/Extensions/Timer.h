#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class TimerData; }

#define BESTHTTP_EXTENSIONS_TIMER_PROCESS_OFFSET UNITYSDK_OFFSET(0x8D7710)
#define BESTHTTP_EXTENSIONS_TIMER_ADD_OFFSET UNITYSDK_OFFSET(0x8D7A50)
#define BESTHTTP_EXTENSIONS_TIMER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8D7B80)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 23356;

	class Timer : public Il2CppObject
	{
	public:
		Il2CppObject* Timers; // 0x0

		::System::Void Process()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMER_PROCESS_OFFSET))(nullptr);
		}

		::System::Void Add(::BestHTTP::Extensions::TimerData* arg)
		{
			((::System::Void(*)(::BestHTTP::Extensions::TimerData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

