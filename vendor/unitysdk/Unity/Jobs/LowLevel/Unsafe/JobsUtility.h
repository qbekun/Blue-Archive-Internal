#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe { class JobRanges&; }
namespace Unity::Jobs { class JobHandle; }
namespace Unity::Jobs { class JobHandle&; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET UNITYSDK_OFFSET(0xA1E0ED0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET UNITYSDK_OFFSET(0xA1E0F10)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xA1E0F60)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET UNITYSDK_OFFSET(0xA1E0FF0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1E10A0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xA1E1150)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xA1E11A0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xA1E1200)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_ISEXECUTINGJOB_OFFSET UNITYSDK_OFFSET(0xA1E1260)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBCOMPILERENABLED_OFFSET UNITYSDK_OFFSET(0xA1E12A0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_INVOKEPANICFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1E12E0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0FB0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E1050)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E1100)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobsUtility_TypeDefinitionIndex = 30883;

	class JobsUtility : public Il2CppObject
	{
	public:
		PanicFunction_* PanicFunction; // 0x0

		::System::Void GetJobRange(::Unity::Jobs::LowLevel::Unsafe::JobRanges&* arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobRanges&*, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetWorkStealingRange(::Unity::Jobs::LowLevel::Unsafe::JobRanges&* arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Jobs::LowLevel::Unsafe::JobRanges&*, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Unity::Jobs::JobHandle* Schedule(JobScheduleParameters&* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(JobScheduleParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET))(arg, nullptr);
		}

		::Unity::Jobs::JobHandle* ScheduleParallelFor(JobScheduleParameters&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(JobScheduleParameters&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Unity::Jobs::JobHandle* ScheduleParallelForTransform(JobScheduleParameters&* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(JobScheduleParameters&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CreateJobReflectionData(::System::Type* arg, ::System::Type* arg, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CreateJobReflectionData(::System::Type* arg, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CreateJobReflectionData(::System::Type* arg, ::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsExecutingJob()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_ISEXECUTINGJOB_OFFSET))(nullptr);
		}

		::System::Void set_JobCompilerEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBCOMPILERENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokePanicFunction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_INVOKEPANICFUNCTION_OFFSET))(nullptr);
		}

		::System::Void Schedule_Injected(JobScheduleParameters&* arg, ::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(JobScheduleParameters&*, ::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ScheduleParallelFor_Injected(JobScheduleParameters&* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(JobScheduleParameters&*, ::System::Int32, ::System::Int32, ::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ScheduleParallelForTransform_Injected(JobScheduleParameters&* arg, ::System::Int32 arg, ::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(JobScheduleParameters&*, ::System::Int32, ::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

