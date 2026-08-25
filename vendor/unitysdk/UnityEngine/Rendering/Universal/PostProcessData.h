#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02AB90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessData_TypeDefinitionIndex = 32506;

	class PostProcessData : public Il2CppObject
	{
	public:
		ShaderResources* shaders; // 0x18
		TextureResources* textures; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

