#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x93E8310)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x93E8630)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x93E3090)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x93E8860)
#define SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x93E8600)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEMHELPER_OFFSET UNITYSDK_OFFSET(0x93E8740)
#define SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUECUSTOMWORKITEM_OFFSET UNITYSDK_OFFSET(0x93E8930)
#define SYSTEM_THREADING_THREADPOOL_TRYPOPCUSTOMWORKITEM_OFFSET UNITYSDK_OFFSET(0x93E89D0)
#define SYSTEM_THREADING_THREADPOOL_REQUESTWORKERTHREAD_OFFSET UNITYSDK_OFFSET(0x93E5DE0)
#define SYSTEM_THREADING_THREADPOOL_ENSUREVMINITIALIZED_OFFSET UNITYSDK_OFFSET(0x93E8890)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x93E7900)
#define SYSTEM_THREADING_THREADPOOL_REPORTTHREADSTATUS_OFFSET UNITYSDK_OFFSET(0x93E8AC0)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x93E8AD0)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESSNATIVE_OFFSET UNITYSDK_OFFSET(0x93E8AF0)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMQUEUED_OFFSET UNITYSDK_OFFSET(0x93E6750)
#define SYSTEM_THREADING_THREADPOOL_INITIALIZEVMTP_OFFSET UNITYSDK_OFFSET(0x93E8AB0)
#define SYSTEM_THREADING_THREADPOOL_GET_ISTHREADPOOLTHREAD_OFFSET UNITYSDK_OFFSET(0x93E8B00)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPool_TypeDefinitionIndex = 24115;

	class ThreadPool : public Il2CppObject
	{
	public:
		::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* arg, ::System::Threading::WaitOrTimerCallback* arg, ::System::Object* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::UInt32, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* arg, ::System::Threading::WaitOrTimerCallback* arg, ::System::Object* arg, ::System::TimeSpan* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean QueueUserWorkItem(::System::Threading::WaitCallback* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean QueueUserWorkItem(::System::Threading::WaitCallback* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::WaitCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean UnsafeQueueUserWorkItem(::System::Threading::WaitCallback* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUEUSERWORKITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean QueueUserWorkItem(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean QueueUserWorkItemHelper(::System::Threading::WaitCallback* arg, ::System::Object* arg, ::System::Threading::StackCrawlMark&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*, ::System::Threading::StackCrawlMark&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEMHELPER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::IThreadPoolWorkItem*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUECUSTOMWORKITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::IThreadPoolWorkItem*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_TRYPOPCUSTOMWORKITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean RequestWorkerThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REQUESTWORKERTHREAD_OFFSET))(nullptr);
		}

		::System::Void EnsureVMInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_ENSUREVMINITIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean NotifyWorkItemComplete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void ReportThreadStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REPORTTHREADSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyWorkItemProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESS_OFFSET))(nullptr);
		}

		::System::Void NotifyWorkItemProgressNative()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESSNATIVE_OFFSET))(nullptr);
		}

		::System::Void NotifyWorkItemQueued()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMQUEUED_OFFSET))(nullptr);
		}

		::System::Void InitializeVMTp(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_INITIALIZEVMTP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsThreadPoolThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_GET_ISTHREADPOOLTHREAD_OFFSET))(nullptr);
		}

	};
}

