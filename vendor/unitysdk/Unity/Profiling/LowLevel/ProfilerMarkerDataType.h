#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling::LowLevel { class ProfilerMarkerDataType; }

namespace Unity::Profiling::LowLevel
{
	inline static constexpr unsigned int ProfilerMarkerDataType_TypeDefinitionIndex = 30860;

	class ProfilerMarkerDataType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* Int32; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* UInt32; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* Int64; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* UInt64; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* Float; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* Double; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* String16; // 0x0
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* Blob8; // 0x0

	};
}

