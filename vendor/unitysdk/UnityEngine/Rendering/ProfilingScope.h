#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_PROFILINGSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB57C0)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FB57D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ProfilingScope_TypeDefinitionIndex = 33983;

	class ProfilingScope : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_DISPOSE_OFFSET))(nullptr);
		}

	};
}

