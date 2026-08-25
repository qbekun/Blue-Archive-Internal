#pragma once
#include "../../unitysdk.h"

#define UNITY_JOBS_IJOBBURSTSCHEDULABLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobBurstSchedulable_TypeDefinitionIndex = 36975;

	class IJobBurstSchedulable : public Il2CppObject
	{
	public:
		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_IJOBBURSTSCHEDULABLE_EXECUTE_OFFSET))(nullptr);
		}

	};
}

