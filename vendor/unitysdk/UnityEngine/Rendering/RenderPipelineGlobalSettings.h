#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_RENDERPIPELINEGLOBALSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA25F890)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineGlobalSettings_TypeDefinitionIndex = 31562;

	class RenderPipelineGlobalSettings : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEGLOBALSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

