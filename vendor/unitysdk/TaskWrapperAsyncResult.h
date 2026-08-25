#pragma once
#include "unitysdk.h"

#define TASKWRAPPERASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EE030)
#define TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x93EE2D0)
#define TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x93EE2E0)
#define TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93EE2F0)
#define TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x93EE350)

	inline static constexpr unsigned int TaskWrapperAsyncResult_TypeDefinitionIndex = 24135;

	class TaskWrapperAsyncResult : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* Task; // 0x10
		::System::Object* _state; // 0x18
		::System::Boolean _completedSynchronously; // 0x20

		::System::Void .ctor(::System::Threading::Tasks::Task* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TASKWRAPPERASYNCRESULT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* System.IAsyncResult.get_AsyncState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_ASYNCSTATE_OFFSET))(nullptr);
		}

		::System::Boolean System.IAsyncResult.get_CompletedSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(nullptr);
		}

		::System::Boolean System.IAsyncResult.get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Threading::WaitHandle* System.IAsyncResult.get_AsyncWaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKWRAPPERASYNCRESULT_SYSTEM.IASYNCRESULT.GET_ASYNCWAITHANDLE_OFFSET))(nullptr);
		}

	};

