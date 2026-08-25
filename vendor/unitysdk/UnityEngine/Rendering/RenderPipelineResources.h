#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_RENDERPIPELINERESOURCES_GET_PACKAGEPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9FBED70)
#define UNITYENGINE_RENDERING_RENDERPIPELINERESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBED90)
#define UNITYENGINE_RENDERING_RENDERPIPELINERESOURCES_GET_PACKAGEPATH_OFFSET UNITYSDK_OFFSET(0x9FBEDA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineResources_TypeDefinitionIndex = 34001;

	class RenderPipelineResources : public Il2CppObject
	{
	public:
		::System::String* get_packagePath_Internal()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINERESOURCES_GET_PACKAGEPATH_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINERESOURCES_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_packagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINERESOURCES_GET_PACKAGEPATH_OFFSET))(nullptr);
		}

	};
}

