#pragma once
#include "../../unitysdk.h"

#define UNITY_PROFILING_PROFILERRECORDERSAMPLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA1DFFD0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerRecorderSample_TypeDefinitionIndex = 30854;

	class ProfilerRecorderSample : public Il2CppObject
	{
	public:
		::System::Int64 value; // 0x10
		::System::Int64 count; // 0x18
		::System::Int64 refValue; // 0x20

		::System::Int64 get_Count()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDERSAMPLE_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

