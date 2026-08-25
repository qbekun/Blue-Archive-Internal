#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class UIRenderPass; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05D9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0xA05DA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0xA05DA60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UIRenderFeature_TypeDefinitionIndex = 32660;

	class UIRenderFeature : public Il2CppObject
	{
	public:
		UIRenderPipelineSettings* settings; // 0x20
		::UnityEngine::Rendering::Universal::UIRenderPass* pipelinePass; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERFEATURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERFEATURE_CREATE_OFFSET))(nullptr);
		}

	};
}

