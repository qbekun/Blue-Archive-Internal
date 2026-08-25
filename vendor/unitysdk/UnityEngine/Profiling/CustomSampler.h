#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA245350)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2453A0)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET UNITYSDK_OFFSET(0xA245400)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA245530)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int CustomSampler_TypeDefinitionIndex = 31236;

	class CustomSampler : public Il2CppObject
	{
	public:
		::UnityEngine::Profiling::CustomSampler* s_InvalidCustomSampler; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Profiling::CustomSampler* Create(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Profiling::CustomSampler*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

