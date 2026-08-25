#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling::LowLevel { class MarkerFlags; }

namespace Unity::Profiling::LowLevel
{
	inline static constexpr unsigned int MarkerFlags_TypeDefinitionIndex = 30859;

	class MarkerFlags : public Il2CppObject
	{
	public:
		::System::UInt16 value__; // 0x10
		::Unity::Profiling::LowLevel::MarkerFlags* Default; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* Script; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* ScriptInvoke; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* ScriptDeepProfiler; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* AvailabilityEditor; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* AvailabilityNonDevelopment; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* Warning; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* Counter; // 0x0
		::Unity::Profiling::LowLevel::MarkerFlags* SampleGPU; // 0x0

	};
}

