#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02D130)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipelineEditorResources_TypeDefinitionIndex = 32526;

	class UniversalRenderPipelineEditorResources : public Il2CppObject
	{
	public:
		ShaderResources* shaders; // 0x18
		MaterialResources* materials; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_.CTOR_OFFSET))(nullptr);
		}

	};
}

