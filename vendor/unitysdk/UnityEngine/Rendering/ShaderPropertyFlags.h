#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderPropertyFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderPropertyFlags_TypeDefinitionIndex = 31589;

	class ShaderPropertyFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ShaderPropertyFlags* None; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* HideInInspector; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* PerRendererData; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* NoScaleOffset; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* Normal; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* HDR; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* Gamma; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* NonModifiableTextureData; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* MainTexture; // 0x0
		::UnityEngine::Rendering::ShaderPropertyFlags* MainColor; // 0x0

	};
}

