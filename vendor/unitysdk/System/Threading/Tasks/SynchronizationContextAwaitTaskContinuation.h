#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F7E10)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x93FC620)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_POSTACTION_OFFSET UNITYSDK_OFFSET(0x93FCA50)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_GETPOSTACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x93FCAF0)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93FCBF0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex = 24196;

	class SynchronizationContextAwaitTaskContinuation : public ::UnityEngine::TouchType
	{
	public:
		::System::Threading::SendOrPostCallback* s_postCallback; // 0x0
		::System::Threading::ContextCallback* s_postActionCallback; // 0x8
		::System::Threading::SynchronizationContext* m_syncContext; // 0x20

		::System::Void .ctor(::System::Threading::SynchronizationContext* arg, ::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::SynchronizationContext*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Run(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_RUN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostAction(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_POSTACTION_OFFSET))(arg, nullptr);
		}

		::System::Threading::ContextCallback* GetPostActionCallback()
		{
			return (return (::System::Threading::ContextCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_GETPOSTACTIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

