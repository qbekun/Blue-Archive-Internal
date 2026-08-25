#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F01F0)
#define SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELLOOPBEGIN_OFFSET UNITYSDK_OFFSET(0x93F0200)
#define SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELLOOPEND_OFFSET UNITYSDK_OFFSET(0x93F0380)
#define SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELFORK_OFFSET UNITYSDK_OFFSET(0x93F04B0)
#define SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELJOIN_OFFSET UNITYSDK_OFFSET(0x93F0510)
#define SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93F0570)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelEtwProvider_TypeDefinitionIndex = 24152;

	class ParallelEtwProvider : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::ParallelEtwProvider* Log; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ParallelLoopBegin(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ForkJoinOperationType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ForkJoinOperationType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELLOOPBEGIN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ParallelLoopEnd(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELLOOPEND_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ParallelFork(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELFORK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ParallelJoin(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_PARALLELJOIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELETWPROVIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

