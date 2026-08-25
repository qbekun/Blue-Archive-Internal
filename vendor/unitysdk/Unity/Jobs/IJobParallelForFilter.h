#pragma once
#include "../../unitysdk.h"

#define UNITY_JOBS_IJOBPARALLELFORFILTER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobParallelForFilter_TypeDefinitionIndex = 36991;

	class IJobParallelForFilter : public Il2CppObject
	{
	public:
		::System::Boolean Execute(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBPARALLELFORFILTER_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

