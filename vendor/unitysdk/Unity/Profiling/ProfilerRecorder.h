#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerRecorderOptions; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderHandle; }
namespace Unity::Profiling { class ProfilerRecorderSample; }
namespace Unity::Profiling { class ProfilerRecorder; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerRecorderHandle&; }
namespace Unity::Profiling { class ProfilerRecorder&; }
namespace Unity::Profiling { class ProfilerRecorderSample&; }

#define UNITY_PROFILING_PROFILERRECORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFFE0)
#define UNITY_PROFILING_PROFILERRECORDER_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA1E00A0)
#define UNITY_PROFILING_PROFILERRECORDER_START_OFFSET UNITYSDK_OFFSET(0xA1E0130)
#define UNITY_PROFILING_PROFILERRECORDER_STOP_OFFSET UNITYSDK_OFFSET(0xA1E0280)
#define UNITY_PROFILING_PROFILERRECORDER_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0xA1E0320)
#define UNITY_PROFILING_PROFILERRECORDER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA1E03F0)
#define UNITY_PROFILING_PROFILERRECORDER_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xA1E04D0)
#define UNITY_PROFILING_PROFILERRECORDER_GETSAMPLE_OFFSET UNITYSDK_OFFSET(0xA1E05A0)
#define UNITY_PROFILING_PROFILERRECORDER_CREATE_OFFSET UNITYSDK_OFFSET(0xA1E0040)
#define UNITY_PROFILING_PROFILERRECORDER_CONTROL_OFFSET UNITYSDK_OFFSET(0xA1E0240)
#define UNITY_PROFILING_PROFILERRECORDER_GETLASTVALUE_OFFSET UNITYSDK_OFFSET(0xA1E03B0)
#define UNITY_PROFILING_PROFILERRECORDER_GETCOUNT_OFFSET UNITYSDK_OFFSET(0xA1E0490)
#define UNITY_PROFILING_PROFILERRECORDER_GETVALID_OFFSET UNITYSDK_OFFSET(0xA1E00F0)
#define UNITY_PROFILING_PROFILERRECORDER_GETRUNNING_OFFSET UNITYSDK_OFFSET(0xA1E0560)
#define UNITY_PROFILING_PROFILERRECORDER_GETSAMPLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1E0680)
#define UNITY_PROFILING_PROFILERRECORDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1E08D0)
#define UNITY_PROFILING_PROFILERRECORDER_CHECKINITIALIZEDANDTHROW_OFFSET UNITYSDK_OFFSET(0xA1E01D0)
#define UNITY_PROFILING_PROFILERRECORDER_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E06F0)
#define UNITY_PROFILING_PROFILERRECORDER_CONTROL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0740)
#define UNITY_PROFILING_PROFILERRECORDER_GETLASTVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0780)
#define UNITY_PROFILING_PROFILERRECORDER_GETCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E07C0)
#define UNITY_PROFILING_PROFILERRECORDER_GETVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0800)
#define UNITY_PROFILING_PROFILERRECORDER_GETRUNNING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0840)
#define UNITY_PROFILING_PROFILERRECORDER_GETSAMPLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0880)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerRecorder_TypeDefinitionIndex = 30857;

	class ProfilerRecorder : public Il2CppObject
	{
	public:
		::System::UInt64 handle; // 0x10
		::Unity::Profiling::ProfilerRecorderOptions* SharedRecorder; // 0x0

		::System::Void .ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle* arg, ::System::Int32 arg, ::Unity::Profiling::ProfilerRecorderOptions* arg)
		{
			((::System::Void(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle*, ::System::Int32, ::Unity::Profiling::ProfilerRecorderOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_Valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GET_VALID_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_START_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_STOP_OFFSET))(nullptr);
		}

		::System::Int64 get_LastValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GET_LASTVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRunning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GET_ISRUNNING_OFFSET))(nullptr);
		}

		::Unity::Profiling::ProfilerRecorderSample* GetSample(::System::Int32 arg)
		{
			return (return (::Unity::Profiling::ProfilerRecorderSample*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETSAMPLE_OFFSET))(arg, nullptr);
		}

		::Unity::Profiling::ProfilerRecorder* Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle* arg, ::System::Int32 arg, ::Unity::Profiling::ProfilerRecorderOptions* arg)
		{
			return (return (::Unity::Profiling::ProfilerRecorder*(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle*, ::System::Int32, ::Unity::Profiling::ProfilerRecorderOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Control(::Unity::Profiling::ProfilerRecorder* arg, ControlOptions* arg)
		{
			((::System::Void(*)(::Unity::Profiling::ProfilerRecorder*, ControlOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_CONTROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetLastValue(::Unity::Profiling::ProfilerRecorder* arg)
		{
			return (return (::System::Int64(*)(::Unity::Profiling::ProfilerRecorder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETLASTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCount(::Unity::Profiling::ProfilerRecorder* arg, CountOptions* arg)
		{
			return (return (::System::Int32(*)(::Unity::Profiling::ProfilerRecorder*, CountOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetValid(::Unity::Profiling::ProfilerRecorder* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Profiling::ProfilerRecorder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetRunning(::Unity::Profiling::ProfilerRecorder* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Profiling::ProfilerRecorder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETRUNNING_OFFSET))(arg, nullptr);
		}

		::Unity::Profiling::ProfilerRecorderSample* GetSampleInternal(::Unity::Profiling::ProfilerRecorder* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Profiling::ProfilerRecorderSample*(*)(::Unity::Profiling::ProfilerRecorder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETSAMPLEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void CheckInitializedAndThrow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_CHECKINITIALIZEDANDTHROW_OFFSET))(nullptr);
		}

		::System::Void Create_Injected(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle&* arg, ::System::Int32 arg, ::Unity::Profiling::ProfilerRecorderOptions* arg, ::Unity::Profiling::ProfilerRecorder&* arg)
		{
			((::System::Void(*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle&*, ::System::Int32, ::Unity::Profiling::ProfilerRecorderOptions*, ::Unity::Profiling::ProfilerRecorder&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_CREATE_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Control_Injected(::Unity::Profiling::ProfilerRecorder&* arg, ControlOptions* arg)
		{
			((::System::Void(*)(::Unity::Profiling::ProfilerRecorder&*, ControlOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_CONTROL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetLastValue_Injected(::Unity::Profiling::ProfilerRecorder&* arg)
		{
			return (return (::System::Int64(*)(::Unity::Profiling::ProfilerRecorder&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETLASTVALUE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCount_Injected(::Unity::Profiling::ProfilerRecorder&* arg, CountOptions* arg)
		{
			return (return (::System::Int32(*)(::Unity::Profiling::ProfilerRecorder&*, CountOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETCOUNT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetValid_Injected(::Unity::Profiling::ProfilerRecorder&* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Profiling::ProfilerRecorder&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETVALID_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetRunning_Injected(::Unity::Profiling::ProfilerRecorder&* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Profiling::ProfilerRecorder&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETRUNNING_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSampleInternal_Injected(::Unity::Profiling::ProfilerRecorder&* arg, ::System::Int32 arg, ::Unity::Profiling::ProfilerRecorderSample&* arg)
		{
			((::System::Void(*)(::Unity::Profiling::ProfilerRecorder&*, ::System::Int32, ::Unity::Profiling::ProfilerRecorderSample&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERRECORDER_GETSAMPLEINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

