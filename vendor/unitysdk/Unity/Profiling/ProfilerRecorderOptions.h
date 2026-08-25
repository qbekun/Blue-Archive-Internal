#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerRecorderOptions; }

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerRecorderOptions_TypeDefinitionIndex = 30853;

	class ProfilerRecorderOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::Profiling::ProfilerRecorderOptions* None; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* StartImmediately; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* KeepAliveDuringDomainReload; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* CollectOnlyOnCurrentThread; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* WrapAroundWhenCapacityReached; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* SumAllSamplesInFrame; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* GpuRecorder; // 0x0
		::Unity::Profiling::ProfilerRecorderOptions* Default; // 0x0

	};
}

