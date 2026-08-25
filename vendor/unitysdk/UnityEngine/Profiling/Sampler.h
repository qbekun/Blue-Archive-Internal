#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Profiling { class Sampler; }
namespace UnityEngine::Profiling { class Recorder; }

#define UNITYENGINE_PROFILING_SAMPLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2451E0)
#define UNITYENGINE_PROFILING_SAMPLER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA2451F0)
#define UNITYENGINE_PROFILING_SAMPLER_GETRECORDER_OFFSET UNITYSDK_OFFSET(0xA245240)
#define UNITYENGINE_PROFILING_SAMPLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2452D0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Sampler_TypeDefinitionIndex = 31235;

	class Sampler : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::UnityEngine::Profiling::Sampler* s_InvalidSampler; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GET_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Profiling::Recorder* GetRecorder()
		{
			return (return (::UnityEngine::Profiling::Recorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GETRECORDER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

