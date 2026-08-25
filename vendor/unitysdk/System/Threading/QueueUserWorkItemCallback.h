#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E8030)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x93E8110)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET UNITYSDK_OFFSET(0x93E81F0)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_WAITCALLBACK_CONTEXT_OFFSET UNITYSDK_OFFSET(0x93E8200)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E8270)

namespace System::Threading
{
	inline static constexpr unsigned int QueueUserWorkItemCallback_TypeDefinitionIndex = 24113;

	class QueueUserWorkItemCallback : public Il2CppObject
	{
	public:
		::System::Threading::WaitCallback* callback; // 0x10
		::System::Threading::ExecutionContext* context; // 0x18
		::System::Object* state; // 0x20
		::System::Threading::ContextCallback* ccb; // 0x0

		::System::Void .ctor(::System::Threading::WaitCallback* arg, ::System::Object* arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			((::System::Void(*)(::System::Threading::WaitCallback*, ::System::Object*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET))(arg, nullptr);
		}

		::System::Void WaitCallback_Context(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_WAITCALLBACK_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

