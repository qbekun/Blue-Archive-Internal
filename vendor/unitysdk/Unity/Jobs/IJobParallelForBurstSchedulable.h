#pragma once
#include "../../unitysdk.h"

#define UNITY_JOBS_IJOBPARALLELFORBURSTSCHEDULABLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobParallelForBurstSchedulable_TypeDefinitionIndex = 36983;

	class IJobParallelForBurstSchedulable : public Il2CppObject
	{
	public:
		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBPARALLELFORBURSTSCHEDULABLE_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

