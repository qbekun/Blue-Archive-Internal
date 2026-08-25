#pragma once
#include "../../unitysdk.h"

namespace Unity::Jobs { class JobHandle; }

#define UNITY_JOBS_IJOBEXTENSIONS_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobExtensions_TypeDefinitionIndex = 30868;

	class IJobExtensions : public Il2CppObject
	{
	public:
		::Unity::Jobs::JobHandle* Schedule(Il2CppObject* arg, ::Unity::Jobs::JobHandle* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(Il2CppObject*, ::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBEXTENSIONS_SCHEDULE_OFFSET))(arg, arg, nullptr);
		}

	};
}

