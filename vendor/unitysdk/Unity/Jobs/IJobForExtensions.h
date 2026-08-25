#pragma once
#include "../../unitysdk.h"

namespace Unity::Jobs { class JobHandle; }

#define UNITY_JOBS_IJOBFOREXTENSIONS_SCHEDULEPARALLEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobForExtensions_TypeDefinitionIndex = 30872;

	class IJobForExtensions : public Il2CppObject
	{
	public:
		::Unity::Jobs::JobHandle* ScheduleParallel(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::JobHandle* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBFOREXTENSIONS_SCHEDULEPARALLEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

