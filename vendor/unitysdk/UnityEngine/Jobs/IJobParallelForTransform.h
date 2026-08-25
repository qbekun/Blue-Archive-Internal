#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Jobs { class TransformAccess; }

#define UNITYENGINE_JOBS_IJOBPARALLELFORTRANSFORM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int IJobParallelForTransform_TypeDefinitionIndex = 31240;

	class IJobParallelForTransform : public Il2CppObject
	{
	public:
		::System::Void Execute(::System::Int32 arg, ::UnityEngine::Jobs::TransformAccess* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Jobs::TransformAccess*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_IJOBPARALLELFORTRANSFORM_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

