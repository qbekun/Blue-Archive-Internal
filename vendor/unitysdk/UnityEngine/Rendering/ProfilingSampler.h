#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Profiling { class Recorder; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5350)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_BEGIN_OFFSET UNITYSDK_OFFSET(0x9FB5480)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_END_OFFSET UNITYSDK_OFFSET(0x9FB54E0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9FB5540)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_SAMPLER_OFFSET UNITYSDK_OFFSET(0x9FB5560)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_SAMPLER_OFFSET UNITYSDK_OFFSET(0x9FB5570)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINESAMPLER_OFFSET UNITYSDK_OFFSET(0x9FB5580)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_INLINESAMPLER_OFFSET UNITYSDK_OFFSET(0x9FB5590)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FB55A0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9FB55B0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_ENABLERECORDING_OFFSET UNITYSDK_OFFSET(0x9FB55C0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x9FB5600)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x9FB5650)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x9FB5690)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x9FB56E0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x9FB5720)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x9FB5770)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB57B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ProfilingSampler_TypeDefinitionIndex = 33982;

	class ProfilingSampler : public Il2CppObject
	{
	public:
		::UnityEngine::Profiling::CustomSampler* _sampler_k__BackingField; // 0x10
		::UnityEngine::Profiling::CustomSampler* _inlineSampler_k__BackingField; // 0x18
		::System::String* _name_k__BackingField; // 0x20
		::UnityEngine::Profiling::Recorder* m_Recorder; // 0x28
		::UnityEngine::Profiling::Recorder* m_InlineRecorder; // 0x30

		::UnityEngine::Rendering::ProfilingSampler* Get(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Rendering::ProfilingSampler*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Begin(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_BEGIN_OFFSET))(arg, nullptr);
		}

		::System::Void End(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_END_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Profiling::CustomSampler* get_sampler()
		{
			return (return (::UnityEngine::Profiling::CustomSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_SAMPLER_OFFSET))(nullptr);
		}

		::System::Void set_sampler(::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_SAMPLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Profiling::CustomSampler* get_inlineSampler()
		{
			return (return (::UnityEngine::Profiling::CustomSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINESAMPLER_OFFSET))(nullptr);
		}

		::System::Void set_inlineSampler(::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_INLINESAMPLER_OFFSET))(arg, nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_enableRecording(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_ENABLERECORDING_OFFSET))(arg, nullptr);
		}

		::System::Single get_gpuElapsedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUELAPSEDTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_gpuSampleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUSAMPLECOUNT_OFFSET))(nullptr);
		}

		::System::Single get_cpuElapsedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUELAPSEDTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_cpuSampleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUSAMPLECOUNT_OFFSET))(nullptr);
		}

		::System::Single get_inlineCpuElapsedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUELAPSEDTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_inlineCpuSampleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUSAMPLECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

