#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_TIMER_GET_SCHEDULER_OFFSET UNITYSDK_OFFSET(0x93EC580)
#define SYSTEM_THREADING_TIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EC630)
#define SYSTEM_THREADING_TIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EC730)
#define SYSTEM_THREADING_TIMER_INIT_OFFSET UNITYSDK_OFFSET(0x93EC680)
#define SYSTEM_THREADING_TIMER_CHANGE_OFFSET UNITYSDK_OFFSET(0x93ECA80)
#define SYSTEM_THREADING_TIMER_CHANGE_OFFSET UNITYSDK_OFFSET(0x93ECAA0)
#define SYSTEM_THREADING_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93ECB30)
#define SYSTEM_THREADING_TIMER_CHANGE_OFFSET UNITYSDK_OFFSET(0x93EC7D0)
#define SYSTEM_THREADING_TIMER_KEEPROOTEDWHILESCHEDULED_OFFSET UNITYSDK_OFFSET(0x93ECF10)
#define SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET UNITYSDK_OFFSET(0x93ECD20)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 24126;

	class Timer : public Il2CppObject
	{
	public:
		::System::Threading::TimerCallback* callback; // 0x18
		::System::Object* state; // 0x20
		::System::Int64 due_time_ms; // 0x28
		::System::Int64 period_ms; // 0x30
		::System::Int64 next_run; // 0x38
		::System::Boolean disposed; // 0x40
		::System::Boolean is_dead; // 0x41
		::System::Boolean is_added; // 0x42
		::System::Int64 MaxValue; // 0x0

		Scheduler* get_scheduler()
		{
			return (return (Scheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_GET_SCHEDULER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::TimerCallback* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Threading::TimerCallback* arg, ::System::Object* arg, ::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Threading::TimerCallback* arg, ::System::Object* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Change(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Change(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean Change(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void KeepRootedWhileScheduled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_KEEPROOTEDWHILESCHEDULED_OFFSET))(nullptr);
		}

		::System::Int64 GetTimeMonotonic()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET))(nullptr);
		}

	};
}

