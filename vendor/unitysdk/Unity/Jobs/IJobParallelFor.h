#pragma once
#include "../../unitysdk.h"

#define UNITY_JOBS_IJOBPARALLELFOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobParallelFor_TypeDefinitionIndex = 30873;

	class IJobParallelFor : public Il2CppObject
	{
	public:
		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBPARALLELFOR_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

