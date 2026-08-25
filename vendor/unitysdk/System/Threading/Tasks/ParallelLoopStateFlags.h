#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_GET_LOOPSTATEFLAGS_OFFSET UNITYSDK_OFFSET(0x93F0A40)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x93F0A60)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x93F08B0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_SETEXCEPTIONAL_OFFSET UNITYSDK_OFFSET(0x93F0A80)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_STOP_OFFSET UNITYSDK_OFFSET(0x93F0640)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_CANCEL_OFFSET UNITYSDK_OFFSET(0x93F0AB0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F0AE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopStateFlags_TypeDefinitionIndex = 24155;

	class ParallelLoopStateFlags : public Il2CppObject
	{
	public:
		::System::Int32 _loopStateFlags; // 0x10

		::System::Int32 get_LoopStateFlags()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_GET_LOOPSTATEFLAGS_OFFSET))(nullptr);
		}

		::System::Boolean AtomicLoopStateUpdate(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AtomicLoopStateUpdate(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetExceptional()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_SETEXCEPTIONAL_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_STOP_OFFSET))(nullptr);
		}

		::System::Boolean Cancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_CANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

