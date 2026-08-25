#pragma once
#include "../../unitysdk.h"

namespace Unity::Jobs { class JobHandle; }

#define UNITY_JOBS_IJOBPARALLELFOREXTENSIONS_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobParallelForExtensions_TypeDefinitionIndex = 30876;

	class IJobParallelForExtensions : public Il2CppObject
	{
	public:
		::Unity::Jobs::JobHandle* Schedule(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::JobHandle* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBPARALLELFOREXTENSIONS_SCHEDULE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

