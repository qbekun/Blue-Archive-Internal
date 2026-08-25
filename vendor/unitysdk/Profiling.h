#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Camera; }

#define PROFILING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08CC70)
#define PROFILING_TRYGETORADDCAMERASAMPLER_OFFSET UNITYSDK_OFFSET(0xA085C40)

	inline static constexpr unsigned int Profiling_TypeDefinitionIndex = 32792;

	class Profiling : public Il2CppObject
	{
	public:
		Il2CppObject* s_HashSamplerCache; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* unknownSampler; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILING_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::ProfilingSampler* TryGetOrAddCameraSampler(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Rendering::ProfilingSampler*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + PROFILING_TRYGETORADDCAMERASAMPLER_OFFSET))(arg, nullptr);
		}

	};

