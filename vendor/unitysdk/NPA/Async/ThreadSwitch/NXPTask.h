#pragma once
#include "../../../unitysdk.h"

namespace NPA::Async::ThreadSwitch { class NXPWaitForSwitchingToMainThreadAwaitable; }
namespace NPA::Async::ThreadSwitch { class NXPWaitForSwitchingToPooledThreadAwaitable; }
namespace NPA::Async::ThreadSwitch { class NXPWaitForSwitchingToTaskAwaitable; }

#define NPA_ASYNC_THREADSWITCH_NXPTASK_DELAY_OFFSET UNITYSDK_OFFSET(0x9CD3460)
#define NPA_ASYNC_THREADSWITCH_NXPTASK_SWITCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9CD34B0)
#define NPA_ASYNC_THREADSWITCH_NXPTASK_ISINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9CD34C0)
#define NPA_ASYNC_THREADSWITCH_NXPTASK_SWITCHTOPOOLEDTHREAD_OFFSET UNITYSDK_OFFSET(0x9CD3520)
#define NPA_ASYNC_THREADSWITCH_NXPTASK_SWITCHTOTASK_OFFSET UNITYSDK_OFFSET(0x9CD3530)

namespace NPA::Async::ThreadSwitch
{
	inline static constexpr unsigned int NXPTask_TypeDefinitionIndex = 27431;

	class NXPTask : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* Delay(::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPTASK_DELAY_OFFSET))(arg, nullptr);
		}

		::NPA::Async::ThreadSwitch::NXPWaitForSwitchingToMainThreadAwaitable* SwitchToMainThread()
		{
			return (return (::NPA::Async::ThreadSwitch::NXPWaitForSwitchingToMainThreadAwaitable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPTASK_SWITCHTOMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Boolean IsInMainThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPTASK_ISINMAINTHREAD_OFFSET))(nullptr);
		}

		::NPA::Async::ThreadSwitch::NXPWaitForSwitchingToPooledThreadAwaitable* SwitchToPooledThread()
		{
			return (return (::NPA::Async::ThreadSwitch::NXPWaitForSwitchingToPooledThreadAwaitable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPTASK_SWITCHTOPOOLEDTHREAD_OFFSET))(nullptr);
		}

		::NPA::Async::ThreadSwitch::NXPWaitForSwitchingToTaskAwaitable* SwitchToTask()
		{
			return (return (::NPA::Async::ThreadSwitch::NXPWaitForSwitchingToTaskAwaitable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPTASK_SWITCHTOTASK_OFFSET))(nullptr);
		}

	};
}

