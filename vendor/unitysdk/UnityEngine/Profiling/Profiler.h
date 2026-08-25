#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET UNITYSDK_OFFSET(0xA244C80)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET UNITYSDK_OFFSET(0xA244CC0)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET UNITYSDK_OFFSET(0xA244D00)
#define UNITYENGINE_PROFILING_PROFILER_GETTOTALALLOCATEDMEMORYLONG_OFFSET UNITYSDK_OFFSET(0xA244D40)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Profiler_TypeDefinitionIndex = 31233;

	class Profiler : public Il2CppObject
	{
	public:
		::System::Int64 GetRuntimeMemorySizeLong(::UnityEngine::Object* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMonoHeapSizeLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET))(nullptr);
		}

		::System::Int64 GetMonoUsedSizeLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalAllocatedMemoryLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETTOTALALLOCATEDMEMORYLONG_OFFSET))(nullptr);
		}

	};
}

