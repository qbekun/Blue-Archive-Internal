#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerRecorderOptions; }
namespace UnityEngine::Profiling { class Recorder; }
namespace Unity::Profiling { class ProfilerRecorder; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderHandle; }

#define UNITYENGINE_PROFILING_RECORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA244D80)
#define UNITYENGINE_PROFILING_RECORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA244D90)
#define UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA244E50)
#define UNITYENGINE_PROFILING_RECORDER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA244F30)
#define UNITYENGINE_PROFILING_RECORDER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA244F40)
#define UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0xA245020)
#define UNITYENGINE_PROFILING_RECORDER_GET_GPUELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0xA245060)
#define UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xA2450A0)
#define UNITYENGINE_PROFILING_RECORDER_GET_GPUSAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xA245100)
#define UNITYENGINE_PROFILING_RECORDER_SETENABLED_OFFSET UNITYSDK_OFFSET(0xA244FB0)
#define UNITYENGINE_PROFILING_RECORDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA245160)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Recorder_TypeDefinitionIndex = 31234;

	class Recorder : public Il2CppObject
	{
	public:
		::Unity::Profiling::ProfilerRecorderOptions* s_RecorderDefaultOptions; // 0x0
		::UnityEngine::Profiling::Recorder* s_InvalidRecorder; // 0x0
		::Unity::Profiling::ProfilerRecorder* m_RecorderCPU; // 0x10
		::Unity::Profiling::ProfilerRecorder* m_RecorderGPU; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle* arg)
		{
			((::System::Void(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_elapsedNanoseconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_gpuElapsedNanoseconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_GPUELAPSEDNANOSECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_sampleBlockCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_gpuSampleBlockCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_GPUSAMPLEBLOCKCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_SETENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

