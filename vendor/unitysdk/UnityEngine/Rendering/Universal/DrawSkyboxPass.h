#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWSKYBOXPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA066A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_DRAWSKYBOXPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA066F30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DrawSkyboxPass_TypeDefinitionIndex = 32711;

	class DrawSkyboxPass : public Il2CppObject
	{
	public:
		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWSKYBOXPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DRAWSKYBOXPASS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

