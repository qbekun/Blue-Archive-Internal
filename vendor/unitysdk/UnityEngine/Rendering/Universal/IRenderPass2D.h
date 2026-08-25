#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Renderer2DData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_IRENDERPASS2D_GET_RENDERERDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IRenderPass2D_TypeDefinitionIndex = 32478;

	class IRenderPass2D : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::Renderer2DData* get_rendererData()
		{
			return (return (::UnityEngine::Rendering::Universal::Renderer2DData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IRENDERPASS2D_GET_RENDERERDATA_OFFSET))(nullptr);
		}

	};
}

