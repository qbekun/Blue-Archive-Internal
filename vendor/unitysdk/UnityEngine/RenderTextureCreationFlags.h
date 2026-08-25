#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RenderTextureCreationFlags; }

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureCreationFlags_TypeDefinitionIndex = 31051;

	class RenderTextureCreationFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RenderTextureCreationFlags* MipMap; // 0x0
		::UnityEngine::RenderTextureCreationFlags* AutoGenerateMips; // 0x0
		::UnityEngine::RenderTextureCreationFlags* SRGB; // 0x0
		::UnityEngine::RenderTextureCreationFlags* EyeTexture; // 0x0
		::UnityEngine::RenderTextureCreationFlags* EnableRandomWrite; // 0x0
		::UnityEngine::RenderTextureCreationFlags* CreatedFromScript; // 0x0
		::UnityEngine::RenderTextureCreationFlags* AllowVerticalFlip; // 0x0
		::UnityEngine::RenderTextureCreationFlags* NoResolvedColorSurface; // 0x0
		::UnityEngine::RenderTextureCreationFlags* DynamicallyScalable; // 0x0
		::UnityEngine::RenderTextureCreationFlags* BindMS; // 0x0

	};
}

