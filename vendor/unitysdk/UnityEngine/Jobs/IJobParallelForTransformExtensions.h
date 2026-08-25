#pragma once
#include "../../unitysdk.h"

namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine::Jobs { class TransformAccessArray; }

#define UNITYENGINE_JOBS_IJOBPARALLELFORTRANSFORMEXTENSIONS_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int IJobParallelForTransformExtensions_TypeDefinitionIndex = 31244;

	class IJobParallelForTransformExtensions : public Il2CppObject
	{
	public:
		::Unity::Jobs::JobHandle* Schedule(Il2CppObject* arg, ::UnityEngine::Jobs::TransformAccessArray* arg, ::Unity::Jobs::JobHandle* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(Il2CppObject*, ::UnityEngine::Jobs::TransformAccessArray*, ::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_IJOBPARALLELFORTRANSFORMEXTENSIONS_SCHEDULE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

