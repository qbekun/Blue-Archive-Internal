#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_INVOKECORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_INVOKECOREASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_PROCESSCOMPLETEDOUTERTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_TRYSETFROMTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_PROCESSINNERTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int UnwrapPromise`1_TypeDefinitionIndex = 24189;

	class UnwrapPromise`1 : public ::UnityEngine::XR::WindowsMR::Input::WMRHMD
	{
	public:
		::System::Byte _state; // 0x0
		::System::Boolean _lookForOce; // 0x0

		::System::Void .ctor(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeCore(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_INVOKECORE_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeCoreAsync(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_INVOKECOREASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCompletedOuterTask(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_PROCESSCOMPLETEDOUTERTASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetFromTask(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_TRYSETFROMTASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessInnerTask(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_PROCESSINNERTASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InvokeMayRunArbitraryCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNWRAPPROMISE`1_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET))(nullptr);
		}

	};
}

