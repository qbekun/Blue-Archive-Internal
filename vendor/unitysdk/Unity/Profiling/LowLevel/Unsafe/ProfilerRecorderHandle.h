#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderDescription; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderHandle; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderHandle&; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderDescription&; }

#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E0940)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA1E0950)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA1E0970)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GETDESCRIPTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1E0A60)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GETDESCRIPTIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0AD0)

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerRecorderHandle_TypeDefinitionIndex = 30862;

	class ProfilerRecorderHandle : public Il2CppObject
	{
	public:
		::System::UInt64 handle; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GET_VALID_OFFSET))(nullptr);
		}

		::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription* GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle* arg)
		{
			return (return (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription*(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription* GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle* arg)
		{
			return (return (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription*(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GETDESCRIPTIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetDescriptionInternal_Injected(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle&* arg, ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription&* arg)
		{
			((::System::Void(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle&*, ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERRECORDERHANDLE_GETDESCRIPTIONINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

