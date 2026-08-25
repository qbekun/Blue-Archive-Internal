#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerCategory; }
namespace Unity::Profiling::LowLevel { class MarkerFlags; }
namespace Unity::Profiling::LowLevel { class ProfilerMarkerDataType; }
namespace Unity::Profiling { class ProfilerMarkerDataUnit; }

#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERDESCRIPTION_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA1E0930)

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerRecorderDescription_TypeDefinitionIndex = 30861;

	class ProfilerRecorderDescription : public Il2CppObject
	{
	public:
		::Unity::Profiling::ProfilerCategory* category; // 0x10
		::Unity::Profiling::LowLevel::MarkerFlags* flags; // 0x12
		::Unity::Profiling::LowLevel::ProfilerMarkerDataType* dataType; // 0x14
		::Unity::Profiling::ProfilerMarkerDataUnit* unitType; // 0x15
		::System::Int32 reserved0; // 0x18
		::System::Int32 nameUtf8Len; // 0x1C
		::System::Object** nameUtf8; // 0x20

		::Unity::Profiling::LowLevel::MarkerFlags* get_Flags()
		{
			return (return (::Unity::Profiling::LowLevel::MarkerFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERDESCRIPTION_GET_FLAGS_OFFSET))(nullptr);
		}

	};
}

