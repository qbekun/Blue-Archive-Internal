#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TIMERS_TIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD86A0)
#define SYSTEM_TIMERS_TIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD8760)
#define SYSTEM_TIMERS_TIMER_SET_AUTORESET_OFFSET UNITYSDK_OFFSET(0x9AD8AD0)
#define SYSTEM_TIMERS_TIMER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AD8BC0)
#define SYSTEM_TIMERS_TIMER_CALCULATEROUNDEDINTERVAL_OFFSET UNITYSDK_OFFSET(0x9AD88A0)
#define SYSTEM_TIMERS_TIMER_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0x9AD8B60)
#define SYSTEM_TIMERS_TIMER_ADD_ELAPSED_OFFSET UNITYSDK_OFFSET(0x9AD8E50)
#define SYSTEM_TIMERS_TIMER_REMOVE_ELAPSED_OFFSET UNITYSDK_OFFSET(0x9AD8EE0)
#define SYSTEM_TIMERS_TIMER_SET_SITE_OFFSET UNITYSDK_OFFSET(0x9AD8F70)
#define SYSTEM_TIMERS_TIMER_GET_SITE_OFFSET UNITYSDK_OFFSET(0x9AD8FA0)
#define SYSTEM_TIMERS_TIMER_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x9AD8FB0)
#define SYSTEM_TIMERS_TIMER_BEGININIT_OFFSET UNITYSDK_OFFSET(0x9AD9170)
#define SYSTEM_TIMERS_TIMER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AD91C0)
#define SYSTEM_TIMERS_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AD9210)
#define SYSTEM_TIMERS_TIMER_ENDINIT_OFFSET UNITYSDK_OFFSET(0x9AD9270)
#define SYSTEM_TIMERS_TIMER_START_OFFSET UNITYSDK_OFFSET(0x9AD9280)
#define SYSTEM_TIMERS_TIMER_STOP_OFFSET UNITYSDK_OFFSET(0x9AD9290)
#define SYSTEM_TIMERS_TIMER_MYTIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AD92A0)

namespace System::Timers
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 29200;

	class Timer : public Il2CppObject
	{
	public:
		::System::Double interval; // 0x28
		::System::Boolean enabled; // 0x30
		::System::Boolean initializing; // 0x31
		::System::Boolean delayedEnable; // 0x32
		::System::Timers::ElapsedEventHandler* onIntervalElapsed; // 0x38
		::System::Boolean autoReset; // 0x40
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x48
		::System::Boolean disposed; // 0x50
		::System::Threading::Timer* timer; // 0x58
		::System::Threading::TimerCallback* callback; // 0x60
		::System::Object* cookie; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AutoReset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_AUTORESET_OFFSET))(arg, nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateRoundedInterval(::System::Double arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Double, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_CALCULATEROUNDEDINTERVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_UPDATETIMER_OFFSET))(nullptr);
		}

		::System::Void add_Elapsed(::System::Timers::ElapsedEventHandler* arg)
		{
			((::System::Void(*)(::System::Timers::ElapsedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_ADD_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Elapsed(::System::Timers::ElapsedEventHandler* arg)
		{
			((::System::Void(*)(::System::Timers::ElapsedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_REMOVE_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ISite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_SITE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return (return (::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_SITE_OFFSET))(nullptr);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return (return (::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_SYNCHRONIZINGOBJECT_OFFSET))(nullptr);
		}

		::System::Void BeginInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_BEGININIT_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_ENDINIT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_START_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_STOP_OFFSET))(nullptr);
		}

		::System::Void MyTimerCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_MYTIMERCALLBACK_OFFSET))(arg, nullptr);
		}

	};
}

