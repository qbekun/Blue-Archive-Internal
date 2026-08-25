#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define SCENERENDERPIPELINE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9F7BB30)
#define SCENERENDERPIPELINE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F7BB40)
#define SCENERENDERPIPELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7BB50)

	inline static constexpr unsigned int SceneRenderPipeline_TypeDefinitionIndex = 33774;

	class SceneRenderPipeline : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderPipelineAsset* renderPipelineAsset; // 0x18

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE_.CTOR_OFFSET))(nullptr);
		}

	};

