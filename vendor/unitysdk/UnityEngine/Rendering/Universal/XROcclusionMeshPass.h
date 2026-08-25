#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_XROCCLUSIONMESHPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA067450)
#define UNITYENGINE_RENDERING_UNIVERSAL_XROCCLUSIONMESHPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0674E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XROcclusionMeshPass_TypeDefinitionIndex = 32717;

	class XROcclusionMeshPass : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XROCCLUSIONMESHPASS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XROCCLUSIONMESHPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

