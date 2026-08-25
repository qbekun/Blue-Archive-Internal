#pragma once
#include "unitysdk.h"

#define SCHEDULER_INITSCHEDULER_OFFSET UNITYSDK_OFFSET(0x93ED050)
#define SCHEDULER_WAKEUPSCHEDULER_OFFSET UNITYSDK_OFFSET(0x93ED160)
#define SCHEDULER_SCHEDULERTHREAD_OFFSET UNITYSDK_OFFSET(0x93ED180)
#define SCHEDULER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x93ED6D0)
#define SCHEDULER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93ED720)
#define SCHEDULER_REMOVE_OFFSET UNITYSDK_OFFSET(0x93ECC10)
#define SCHEDULER_CHANGE_OFFSET UNITYSDK_OFFSET(0x93ECD30)
#define SCHEDULER_ADD_OFFSET UNITYSDK_OFFSET(0x93ED7F0)
#define SCHEDULER_INTERNALREMOVE_OFFSET UNITYSDK_OFFSET(0x93ED7C0)
#define SCHEDULER_TIMERCB_OFFSET UNITYSDK_OFFSET(0x93ED8E0)
#define SCHEDULER_FIRETIMER_OFFSET UNITYSDK_OFFSET(0x93ED950)
#define SCHEDULER_RUNSCHEDULERLOOP_OFFSET UNITYSDK_OFFSET(0x93ED350)
#define SCHEDULER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93EDA00)

	inline static constexpr unsigned int Scheduler_TypeDefinitionIndex = 24125;

	class Scheduler : public Il2CppObject
	{
	public:
		Scheduler* instance; // 0x0
		::System::Boolean needReSort; // 0x10
		Il2CppObject* list; // 0x18
		::System::Int64 current_next_run; // 0x20
		::System::Threading::ManualResetEvent* changed; // 0x28

		::System::Void InitScheduler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_INITSCHEDULER_OFFSET))(nullptr);
		}

		::System::Void WakeupScheduler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_WAKEUPSCHEDULER_OFFSET))(nullptr);
		}

		::System::Void SchedulerThread()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_SCHEDULERTHREAD_OFFSET))(nullptr);
		}

		Scheduler* get_Instance()
		{
			return (return (Scheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Threading::Timer* arg)
		{
			((::System::Void(*)(::System::Threading::Timer*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Change(::System::Threading::Timer* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Threading::Timer*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_CHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Threading::Timer* arg)
		{
			((::System::Void(*)(::System::Threading::Timer*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalRemove(::System::Threading::Timer* arg)
		{
			((::System::Void(*)(::System::Threading::Timer*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_INTERNALREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void TimerCB(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_TIMERCB_OFFSET))(arg, nullptr);
		}

		::System::Void FireTimer(::System::Threading::Timer* arg)
		{
			((::System::Void(*)(::System::Threading::Timer*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_FIRETIMER_OFFSET))(arg, nullptr);
		}

		::System::Int32 RunSchedulerLoop()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_RUNSCHEDULERLOOP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEDULER_.CCTOR_OFFSET))(nullptr);
		}

	};

