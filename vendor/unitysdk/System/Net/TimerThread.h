#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_TIMERTHREAD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A51810)
#define SYSTEM_NET_TIMERTHREAD_CREATEQUEUE_OFFSET UNITYSDK_OFFSET(0x9A4CDF0)
#define SYSTEM_NET_TIMERTHREAD_GETORCREATEQUEUE_OFFSET UNITYSDK_OFFSET(0x9A51C40)
#define SYSTEM_NET_TIMERTHREAD_PROD_OFFSET UNITYSDK_OFFSET(0x9A52730)
#define SYSTEM_NET_TIMERTHREAD_THREADPROC_OFFSET UNITYSDK_OFFSET(0x9A52860)
#define SYSTEM_NET_TIMERTHREAD_STOPTIMERTHREAD_OFFSET UNITYSDK_OFFSET(0x9A533E0)
#define SYSTEM_NET_TIMERTHREAD_ISTICKBETWEEN_OFFSET UNITYSDK_OFFSET(0x9A533B0)
#define SYSTEM_NET_TIMERTHREAD_ONDOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x9A53460)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TypeDefinitionIndex = 29725;

	class TimerThread : public Il2CppObject
	{
	public:
		Il2CppObject* s_Queues; // 0x0
		Il2CppObject* s_NewQueues; // 0x8
		::System::Int32 s_ThreadState; // 0x10
		::System::Threading::AutoResetEvent* s_ThreadReadyEvent; // 0x18
		::System::Threading::ManualResetEvent* s_ThreadShutdownEvent; // 0x20
		::Il2CppArray<::System::Object*>* s_ThreadEvents; // 0x28
		::System::Int32 s_CacheScanIteration; // 0x30
		::System::Collections::Hashtable* s_QueuesCache; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_.CCTOR_OFFSET))(nullptr);
		}

		Queue* CreateQueue(::System::Int32 arg)
		{
			return (return (Queue*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CREATEQUEUE_OFFSET))(arg, nullptr);
		}

		Queue* GetOrCreateQueue(::System::Int32 arg)
		{
			return (return (Queue*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_GETORCREATEQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void Prod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_PROD_OFFSET))(nullptr);
		}

		::System::Void ThreadProc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_THREADPROC_OFFSET))(nullptr);
		}

		::System::Void StopTimerThread()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_STOPTIMERTHREAD_OFFSET))(nullptr);
		}

		::System::Boolean IsTickBetween(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_ISTICKBETWEEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDomainUnload(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_ONDOMAINUNLOAD_OFFSET))(arg, arg, nullptr);
		}

	};
}

