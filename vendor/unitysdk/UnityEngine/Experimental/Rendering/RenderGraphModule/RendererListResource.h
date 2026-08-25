#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::RendererUtils { class RendererListDesc; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListDesc&; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTRESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA1C70)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RendererListResource_TypeDefinitionIndex = 33870;

	class RendererListResource : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RendererUtils::RendererListDesc* desc; // 0x10
		::UnityEngine::Rendering::RendererUtils::RendererList* rendererList; // 0xD0

		::System::Void .ctor(::UnityEngine::Rendering::RendererUtils::RendererListDesc&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RendererUtils::RendererListDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTRESOURCE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

