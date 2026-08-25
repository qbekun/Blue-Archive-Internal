#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarkerDataUnit; }

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerDataUnit_TypeDefinitionIndex = 30852;

	class ProfilerMarkerDataUnit : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::Unity::Profiling::ProfilerMarkerDataUnit* Undefined; // 0x0
		::Unity::Profiling::ProfilerMarkerDataUnit* TimeNanoseconds; // 0x0
		::Unity::Profiling::ProfilerMarkerDataUnit* Bytes; // 0x0
		::Unity::Profiling::ProfilerMarkerDataUnit* Count; // 0x0
		::Unity::Profiling::ProfilerMarkerDataUnit* Percent; // 0x0
		::Unity::Profiling::ProfilerMarkerDataUnit* FrequencyHz; // 0x0

	};
}

