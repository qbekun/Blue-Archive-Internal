#pragma once
#include "../../unitysdk.h"

namespace Unity::Jobs { class JobHandle&; }
namespace Unity::Jobs { class JobHandle; }

#define UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0xA1E0B50)
#define UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET UNITYSDK_OFFSET(0xA1E0C10)
#define UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA1E0CD0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET UNITYSDK_OFFSET(0xA1E0D50)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA1E0BD0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA1E0D10)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0xA1E0C90)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xA1E0D90)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET UNITYSDK_OFFSET(0xA1E0DF0)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0E50)

namespace Unity::Jobs
{
	inline static constexpr unsigned int JobHandle_TypeDefinitionIndex = 30877;

	class JobHandle : public Il2CppObject
	{
	public:
		::System::Int32 jobGroup; // 0x10
		::System::Int32 version; // 0x18

		::System::Void Complete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET))(nullptr);
		}

		::System::Void CompleteAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void ScheduleBatchedJobs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET))(nullptr);
		}

		::System::Void ScheduleBatchedJobsAndComplete(::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ScheduleBatchedJobsAndIsCompleted(::Unity::Jobs::JobHandle&* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void ScheduleBatchedJobsAndCompleteAll(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Jobs::JobHandle* CombineDependencies(::Unity::Jobs::JobHandle* arg, ::Unity::Jobs::JobHandle* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(::Unity::Jobs::JobHandle*, ::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Jobs::JobHandle* CombineDependenciesInternal2(::Unity::Jobs::JobHandle&* arg, ::Unity::Jobs::JobHandle&* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(::Unity::Jobs::JobHandle&*, ::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CombineDependenciesInternal2_Injected(::Unity::Jobs::JobHandle&* arg, ::Unity::Jobs::JobHandle&* arg, ::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(::Unity::Jobs::JobHandle&*, ::Unity::Jobs::JobHandle&*, ::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

