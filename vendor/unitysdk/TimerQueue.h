#pragma once
#include "unitysdk.h"

#define TIMERQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A51B80)
#define TIMERQUEUE_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x9A537A0)
#define TIMERQUEUE_FIRE_OFFSET UNITYSDK_OFFSET(0x9A53160)

	inline static constexpr unsigned int TimerQueue_TypeDefinitionIndex = 29720;

	class TimerQueue : public Il2CppObject
	{
	public:
		::System::Int32 m_ThisHandle; // 0x18
		TimerNode* m_Timers; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMERQUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Timer* CreateTimer(Callback* arg, ::System::Object* arg)
		{
			return (return (Timer*(*)(Callback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERQUEUE_CREATETIMER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fire(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERQUEUE_FIRE_OFFSET))(arg, nullptr);
		}

	};

